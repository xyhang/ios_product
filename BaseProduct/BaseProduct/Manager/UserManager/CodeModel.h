//
//  CodeModel.h
//  zhima_kt
//
//  Created by zhima on 2020/3/6.
//  Copyright © 2020 zhima. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CodeModel : NSObject<NSCoding,NSCopying>

-(NSDictionary*)toJson;//对象转json

@end

NS_ASSUME_NONNULL_END
