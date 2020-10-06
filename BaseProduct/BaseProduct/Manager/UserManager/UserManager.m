//
//  UserManager.m
//  MiAiApp
//
//  Created by 徐阳 on 2017/5/22.
//  Copyright © 2017年 徐阳. All rights reserved.
//

#import "UserManager.h"
//#import <UMSocialCore/UMSocialCore.h>

@implementation UserManager

SINGLETON_FOR_CLASS(UserManager)

-(UserInfo *)getUserInfo{
    MMKV *mmkv = [MMKV defaultMMKV];
    NSData *data = [mmkv getDataForKey:USERINFO];
    UserInfo *info = [NSKeyedUnarchiver unarchiveObjectWithData:data];
    return info;
}

-(void)saveUserInfo:(UserInfo*)userInfo{
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:userInfo];
    MMKV *mmkv = [MMKV defaultMMKV];
    [mmkv setObject:data forKey:USERINFO];
//    [mmkv sync];
}

-(void)removeUserInfo{
    MMKV *mmkv = [MMKV defaultMMKV];
    [mmkv removeValueForKey:USERINFO];
}

@end
