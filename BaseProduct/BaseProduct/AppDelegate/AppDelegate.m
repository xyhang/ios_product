//
//  AppDelegate.m
//  BaseProduct
//
//  Created by zhima on 2020/10/6.
//  Copyright © 2020 zhima. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    if (@available(iOS 13.0, *)) {
        [self initWindow];
//        self.mainTabBar = [MainTabBarController new];
//        [self.window setRootViewController:self.mainTabBar];
        [self.window makeKeyAndVisible];
    } else {
        self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
        [self.window setBackgroundColor:[UIColor whiteColor]];
        
//        self.mainTabBar = [MainTabBarController new];
//        [self.window setRootViewController:self.mainTabBar];
        [self.window makeKeyAndVisible];
        
    }
    
    //初始化app服务
    [self initService];
    
    [self NetWorkConfig];
    return YES;
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    NSLog(@"applicationWillEnterForeground");
    KPostNotification(kApplicationDidEnterBackground, nil);
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    NSLog(@"applicationDidEnterBackground");
    KPostNotification(kApplicationDidEnterBackground, nil);
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    NSLog(@"applicationDidBecomeActive");
    KPostNotification(kApplicationDidBecomeActive, nil);

}


@end
