//
//  PopControllerManager.m
//  zhaolenglian
//
//  Created by yan on 2020/7/18.
//  Copyright © 2020 keji. All rights reserved.
//

#import "PopControllerManager.h"

@interface PopControllerManager()


@end

@implementation PopControllerManager

static PopControllerManager *manage ;

+(instancetype)shareManager{
    static dispatch_once_t onceToken;

    dispatch_once(&onceToken, ^{
        manage = [[self alloc]init];

    });
    return manage;
}

-(void)showViewWithType:(zhPopupLayoutType)layoutType withMaskType:(zhPopupMaskType)maskType withSlideStyle:(zhPopupSlideStyle)style withTouchDismiss:(BOOL)isDismiss withKeyBoard:(BOOL)isShowKeyBoard withView:(UIView *)view{
    self.controller = [[zhPopupController alloc]initWithView:view size:view.size];
    self.controller.layoutType = layoutType;
    self.controller.maskType = maskType;
    self.controller.presentationStyle = style;
    self.controller.keyboardChangeFollowed = isShowKeyBoard;
    self.controller.becomeFirstResponded = isShowKeyBoard;
    self.controller.dismissOnMaskTouched = isDismiss;
    [self.controller showInView:kWindow completion:nil];
}

@end
