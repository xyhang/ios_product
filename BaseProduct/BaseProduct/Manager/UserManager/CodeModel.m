//
//  CodeModel.m
//  zhima_kt
//
//  Created by zhima on 2020/3/6.
//  Copyright © 2020 zhima. All rights reserved.
//

#import "CodeModel.h"

@implementation CodeModel


-(void)setValue:(id)value forKey:(NSString *)key{
    
    if ([value isKindOfClass:[NSNumber class]]) {
        [self setValue:[NSString stringWithFormat:@"%@",value] forKey:key];
    }else{
        if (!value) {
            [super setValue:@"" forKey:key];
        }else{
            [super setValue:value forKey:key];
        }
    }
}

-(void)setValue:(id)value forUndefinedKey:(NSString *)key{
    
        if ([key isEqualToString:@"description"]) {
            [self setValue:value forKey:@"descriptionStr"];
        }else if ([key isEqualToString:@"id"]){
            [self setValue:value forKey:@"Id"];
        }else if([key isEqualToString:@"newPrice"]){
            [self setValue:value forKey:@"price"];
        }else if([key isEqualToString:@"code"]){
            [self setValue:value forKey:@"codePara"];
        }else{
            DLOG(@"没有key＝＝%@",key);
        }
}

-(NSDictionary *)toJson
{
    NSMutableDictionary *params = [NSMutableDictionary dictionary];
    unsigned  int count = 0;
    Ivar *ivars = class_copyIvarList(self.class, &count);
    for (int i = 0; i < count; i++) {
        const char *cname = ivar_getName(ivars[i]);
        NSString *name = [NSString stringWithUTF8String:cname];
        NSString *key = [name substringFromIndex:1];
        id value = [self valueForKey:key];
        if ([value isKindOfClass:[NSString class]]&&[(NSString*)value length]) {
            [params setValue:value forKey:key];
        }
    }
    return params;
}

#pragma mark-------NSCoding,归接档协议,运行时

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    unsigned  int count = 0;
    Ivar *ivars = class_copyIvarList(self.class, &count);
    for (int i = 0; i < count; i++) {
        const char *cname = ivar_getName(ivars[i]);
        NSString *name = [NSString stringWithUTF8String:cname];
        NSString *key = [name substringFromIndex:1];
        id value = [self valueForKey:key];
        [aCoder encodeObject:value forKey:key];
    }
    
}
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super init]) {
        
        unsigned  int count = 0;
        Ivar *ivars = class_copyIvarList(self.class, &count);
        
        for (int i = 0; i < count; i++) {
            const char *cname = ivar_getName(ivars[i]);
            NSString *name = [NSString stringWithUTF8String:cname];
            NSString *key = [name substringFromIndex:1];
            id value = [aDecoder decodeObjectForKey:key];
            [self setValue:value forKey:key];
        }
    }
    return self;
}

-(id)copyWithZone:(NSZone *)zone {
    id copy = [[[self class] allocWithZone:zone] init];
    unsigned  int count = 0;
    Ivar *ivars = class_copyIvarList(self.class, &count);
    
    for (int i = 0; i < count; i++) {
        const char *cname = ivar_getName(ivars[i]);
        NSString *name = [NSString stringWithUTF8String:cname];
        NSString *key = [name substringFromIndex:1];
        id value = [self valueForKey:key];
        [copy setValue:value forKey:key];
    }
    return copy;
}



@end
