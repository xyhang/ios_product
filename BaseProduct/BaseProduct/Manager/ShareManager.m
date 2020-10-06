//
//  ShareManager.m
//  MiAiApp
//
//  Created by 徐阳 on 2017/6/1.
//  Copyright © 2017年 徐阳. All rights reserved.
//

#import "ShareManager.h"

@implementation ShareManager

SINGLETON_FOR_CLASS(ShareManager )

-(void)showShareView{
    //显示分享面板
    //    [UMSocialUIManager showShareMenuViewInWindowWithPlatformSelectionBlock:^(UMSocialPlatformType platformType, NSDictionary *userInfo) {
    //        // 根据获取的platformType确定所选平台进行下一步操作
    //        [self shareWebPageToPlatformType:platformType];
    //    }];
}

//- (void)shareWebPageToPlatformType:(UMSocialPlatformType)platformType
//{
////    //创建分享消息对象
////    UMSocialMessageObject *messageObject = [UMSocialMessageObject messageObject];
////
////    //创建网页内容对象
////    NSString* thumbURL =  @"https://mobile.umeng.com/images/pic/home/social/img-1.png";
////    UMShareWebpageObject *shareObject = [UMShareWebpageObject shareObjectWithTitle:@"欢迎使用【友盟+】社会化组件U-Share" descr:@"欢迎使用【友盟+】社会化组件U-Share，SDK包最小，集成成本最低，助力您的产品开发、运营与推广！" thumImage:thumbURL];
////    //设置网页地址
////    shareObject.webpageUrl = @"http://mobile.umeng.com/social";
////
////    //分享消息对象设置分享内容对象
////    messageObject.shareObject = shareObject;
////
////    //调用分享接口
////    [[UMSocialManager defaultManager] shareToPlatform:platformType messageObject:messageObject currentViewController:nil completion:^(id data, NSError *error) {
////        if (error) {
////            UMSocialLogInfo(@"************Share fail with error %@*********",error);
////        }else{
////            if ([data isKindOfClass:[UMSocialShareResponse class]]) {
////                UMSocialShareResponse *resp = data;
////                //分享结果消息
////                UMSocialLogInfo(@"response message is %@",resp.message);
////                //第三方原始返回的数据
////                UMSocialLogInfo(@"response originalResponse data is %@",resp.originalResponse);
////
////            }else{
////                UMSocialLogInfo(@"response data is %@",data);
////            }
////        }
////        [self alertWithError:error];
////    }];
//}

- (void)alertWithError:(NSError *)error
{
    //    NSString *result = nil;
    //    if (!error) {
    //        result = [NSString stringWithFormat:@"Share succeed"];
    //    }
    //    else{
    //        NSMutableString *str = [NSMutableString string];
    //        if (error.userInfo) {
    //            for (NSString *key in error.userInfo) {
    //                [str appendFormat:@"%@ = %@\n", key, error.userInfo[key]];
    //            }
    //        }
    //        if (error) {
    //            result = [NSString stringWithFormat:@"Share fail with error code: %d\n%@",(int)error.code, str];
    //        }
    //        else{
    //            result = [NSString stringWithFormat:@"Share fail"];
    //        }
    //    }
    //    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"share"
    //                                                    message:result
    //                                                   delegate:nil
    //                                          cancelButtonTitle:NSLocalizedString(@"sure", @"确定")
    //                                          otherButtonTitles:nil];
    //    [alert show];
}


-(void)shareWithType:(NSInteger)type withTitle:(NSString *)title withImage:(UIImage *)img withContent:(NSString *)content withLink:(NSString *)url{
    NSMutableDictionary *dic = [NSMutableDictionary dictionary];
    
//    NSArray *imgArray = @[img];
//    [dic SSDKSetupShareParamsByText:content images:imgArray url:[NSURL URLWithString:url] title:title type:SSDKContentTypeAuto];
//    
//    [ShareSDK share:type parameters:dic onStateChanged:^(SSDKResponseState state, NSDictionary *userData, SSDKContentEntity *contentEntity, NSError *error) {
//        if (state == SSDKResponseStateSuccess) {
//            /// 成功
//            [SVProgressHUD dismissWithDelay:1.5];
//            [SVProgressHUD showSuccessWithStatus:@"分享成功"];
//        }else if(state == SSDKResponseStateCancel){
//            [SVProgressHUD dismissWithDelay:1.5];
//            [SVProgressHUD showInfoWithStatus:@"取消分享"];
//        }else{
//            [SVProgressHUD dismissWithDelay:1.5];
//            [SVProgressHUD showErrorWithStatus:@"分享失败"];
//        }
//    }];
}

@end
