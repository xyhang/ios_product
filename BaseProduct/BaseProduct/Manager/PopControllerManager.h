//
//  PopControllerManager.h
//  zhaolenglian
//
//  Created by yan on 2020/7/18.
//  Copyright © 2020 keji. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface PopControllerManager : NSObject
+(instancetype)shareManager;

@property (nonatomic , strong)zhPopupController *controller;


-(void)showViewWithType:(zhPopupLayoutType)layoutType withMaskType:(zhPopupMaskType)maskType withSlideStyle:(zhPopupSlideStyle)style withTouchDismiss:(BOOL)isDismiss withKeyBoard:(BOOL)isShowKeyBoard withView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
