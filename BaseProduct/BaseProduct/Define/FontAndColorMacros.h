//
//  FontAndColorMacros.h
//  BaseProduct
//
//  Created by zhima on 2020/10/6.
//  Copyright © 2020 zhima. All rights reserved.
//

#ifndef FontAndColorMacros_h
#define FontAndColorMacros_h


//颜色
#define KClearColor [UIColor clearColor]
#define KWhiteColor [UIColor whiteColor]
#define KBlackColor [UIColor blackColor]
#define KGrayColor [UIColor grayColor]
#define KGray2Color [UIColor lightGrayColor]
#define KBlueColor [UIColor blueColor]
#define KRedColor [UIColor redColor]
// RGB颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue)\
\
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]



#pragma mark -  间距区

//默认间距
#define KNormalSpace 15.0f

#pragma mark -  颜色区
//主题色 导航栏颜色
#define CNavBgColor  [UIColor colorWithHexString:@"ffffff"]
//#define CNavBgColor  [Ulor colorWithHexString:@"ffffff"]
#define CNavBgFontColor  [UIColor colorWithHexString:@"000000"]

//默认页面背景色
#define CViewBgColor [UIColor colorWithHexString:@"f5f5f5"]


#define PrimaryColor [UIColor colorWithHexString:@"3eb134"]

#define Aspect169 9/16

//分割线颜色
#define CLineColor [UIColor colorWithHexString:@"f5f5f5"]

//次级字色
#define CFontColor1 [UIColor colorWithHexString:@"666666"]

//再次级字色
#define CFontColor2 [UIColor colorWithHexString:@"999999"]


#pragma mark -  字体区

#define Font16 [UIFont systemFontOfSize:16.0f]
#define Font15 [UIFont systemFontOfSize:15.0f]

#define Font14 [UIFont systemFontOfSize:14.0f]
#define Font13 [UIFont systemFontOfSize:13.0f]

#define Font12 [UIFont systemFontOfSize:12.0f]
#define Font11 [UIFont systemFontOfSize:11.0f]

#define Font10 [UIFont systemFontOfSize:10.0f]


#endif /* FontAndColorMacros_h */
