//
//  AppDelegate+AppService.h
//  BaseProduct
//
//  Created by zhima on 2020/10/6.
//  Copyright © 2020 zhima. All rights reserved.
//

#import "AppDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface AppDelegate (AppService)

-(void)initWindow;

//初始化服务
-(void)initService;



////初始化用户系统
//-(void)initUserManager;

//监听网络状态
- (void)monitorNetworkStatus;

//初始化网络配置
-(void)NetWorkConfig;

//单例
+ (AppDelegate *)shareAppDelegate;

/**
 当前顶层控制器
 */
-(UIViewController*) getCurrentVC;

-(UIViewController*) getCurrentUIVC;

@end

NS_ASSUME_NONNULL_END
