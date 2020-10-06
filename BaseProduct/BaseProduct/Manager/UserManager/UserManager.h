//
//  UserManager.h
//  MiAiApp
//
//  Created by 徐阳 on 2017/5/22.
//  Copyright © 2017年 徐阳. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserInfo.h"

#define USERINFO @"userInfo"

@interface UserManager : NSObject
//单例
SINGLETON_FOR_HEADER(UserManager)


-(UserInfo *)getUserInfo;

-(void)saveUserInfo:(UserInfo *)userInfo;

-(void)removeUserInfo;

@end
