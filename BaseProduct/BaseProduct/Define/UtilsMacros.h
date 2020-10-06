//
//  UtilsMacros.h
//  BaseProduct
//
//  Created by zhima on 2020/10/6.
//  Copyright © 2020 zhima. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h


#define WEAK_VAR_VARNAME(var,name) __weak typeof(var) name = var
#define WEAKSELF(weakSelf) WEAK_VAR_VARNAME(self,weakSelf)

#define ios8 [[[UIDevice currentDevice] systemVersion ] floatValue] >= 8.0

#define ios7later [[[UIDevice currentDevice] systemVersion ] floatValue] >= 7.0

#define isNilOrNSNull(var) var && (NSNull *)var != [NSNull null]

#define DLOG(fmt, ...) NSLog((@"[DEBUG] %s [Line %d] --- " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
//-------------------获取设备大小-------------------------
//NavBar高度
#define NavigationBar_HEIGHT 44

//获取屏幕 宽度、高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define Screen_Bounds [UIScreen mainScreen].bounds

//iPhoneX / iPhoneXS
#define  KIphoneX_XS        (SCREEN_WIDTH == 375.f && SCREEN_HEIGHT == 812.f ? YES : NO)
//iPhoneXR / iPhoneXSMax
#define  KIphoneXR_XSMax    (SCREEN_WIDTH == 414.f && SCREEN_HEIGHT == 896.f ? YES : NO)
//异性全面屏
#define   KFullProfiledScreen    (KIphoneX_XS || KIphoneXR_XSMax)



//竖屏状态
//iPhoneX状态栏的高度 44
#define KState_Height (KFullProfiledScreen ? 44.0 : 20.0)
//NavigationBar的高度 44
#define KNavigationBar_Height 44.0
#define KSafeAreaTopHeight (KFullProfiledScreen ? 88 : 64)
//底部非安全区域的高度 34
#define KBottomNOSafeArea_Height (KFullProfiledScreen ? 34.0 :0.0)
#define KTabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)

#define KStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height

#define KTopHeight (KStatusBarHeight + KNavigationBar_Height)


//#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
//#define iPhone6 ([[UIScreen mainScreen] currentMode].size.height >= 1334 && [[UIScreen mainScreen] currentMode].size.height <= 2208? YES:NO)
//#define iPhone6p ([[UIScreen mainScreen] currentMode].size.height >= 2000 ? YES:NO)

//#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
//#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define iPhone4 (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define iPhone5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define iPhone6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define iPhone6p (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define  iphoneX_XS        (IS_IPHONE && SCREEN_MAX_LENGTH == 812.f)
//iPhoneXR / iPhoneXSMax
#define  iphoneXR_XSMax    (IS_IPHONE && SCREEN_MAX_LENGTH == 896.f)

#define iPadn ([[UIScreen mainScreen] currentMode].size.width == 1536 && [[UIScreen mainScreen] currentMode].size.height == 2048? YES:NO)
#define iPad2 ([[UIScreen mainScreen] currentMode].size.width == 768 && [[UIScreen mainScreen] currentMode].size.height == 1024? YES:NO)


//获取系统对象
#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [AppDelegate shareAppDelegate].window
#define kAppDelegate        [AppDelegate shareAppDelegate]
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kWindow [UIApplication sharedApplication].keyWindow


#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavBarHeight (KFullProfiledScreen ? 88 : 64)
#define kTabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
#define kTopHeight (kStatusBarHeight + kNavBarHeight)


// 接受通知
#define KObserverNotification(action,name) [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(action) name:name object:nil];


//发送通知
#define KPostNotification(name,obj) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];

/// 获取用户数据
#define GETUSERIFNO [[UserManager sharedUserManager] getUserInfo]


//单例化一个类
#define SINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

#endif /* UtilsMacros_h */
