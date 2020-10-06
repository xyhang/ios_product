//
//  EmptyView.h
//  zhima_kt
//
//  Created by zhima on 2020/3/13.
//  Copyright © 2020 zhima. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,EmptyType){
    EMPTY_DATI_JILU = 0,
    EMPTY_KECHENG_CHOUBEI,/// 课程筹备
    EMPTY_KUAISU_RUMEN,
    EMPTY_LAOSHI_HUIFU,
    EMPTY_LIE_BIAO,
    EMPTY_LVYOU_JIFEN,
    EMPTY_SHOU_CANG,
    EMPTY_SOU_SUO,
    EMPTY_SUOYOU_PINGLUN,
    EMPTY_WEIKAN_KECHENG,
    EMPTY_XITONG_XIAOXI,
    EMPTY_YIKAN_KECHENG,
} ;

#define EMPTY_DATI_JILU1 @"暂无答题记录"
#define EMPTY_DATI_JILU_DES1 @"（笔已经为您准备好了，快答题吧！）"

#define EMPTY_KUAISU_RUMEN1 @"功能完善中"
#define EMPTY_KUAISU_RUMEN_DES1 @"（程序员们正在努力挥动双手！）"

#define EMPTY_KECHENG_CHOUBEI1 @"课程筹备中"
#define EMPTY_KECHENG_CHOUBEI_DES1 @"（程序员们正在努力挥动双手！）"

#define EMPTY_LAOSHI_HUIFU1 @"暂未收到老师回复"
#define EMPTY_LAOSHI_HUIFU_DES1 @"（老师正在思考怎么回复您。）"

#define EMPTY_LIE_BIAO1 @"该分类暂未添加课程"
#define EMPTY_LIE_BIAO_DES1 @"（老师正在努力备课中。）"

#define EMPTY_LVYOU_JIFEN1 @"您暂未获得积分"
#define EMPTY_LVYOU_JIFEN_DES1 @"（您还想旅游吗？该加油啦！）"

#define EMPTY_SHOU_CANG1 @"您还没有收藏课程"
#define EMPTY_SHOU_CANG_DES1 @"（把您觉得精彩的课程收藏进这里吧！）"

#define EMPTY_SOU_SUO1 @"未查找到您搜索的内容"
#define EMPTY_SOU_SUO_DES1 @"（我们已经费尽了九牛二虎之力！）"

#define EMPTY_SUOYOU_PINGLUN1 @"暂无评论记录"
#define EMPTY_SUOYOU_PINGLUN_DES1 @"（竟然没有评论，要不要评论一下）"

#define EMPTY_WEIKAN_KECHENG1 @"哇，也太厉害了吧！"
#define EMPTY_WEIKAN_KECHENG_DES1 @"（现有课程您已全部学完啦。）"

#define EMPTY_XITONG_XIAOXI1 @"系统暂未向您发送消息"
#define EMPTY_XITONG_XIAOXI_DES1 @"（难道偷懒啦！）"

#define EMPTY_YIKAN_KECHENG1 @"未找到您的观看记录"
#define EMPTY_YIKAN_KECHENG_DES1 @"（难道没有课程让您“种草”吗？）"

@interface EmptyView : UIView

@property (nonatomic , assign)EmptyType emptyType;


@property (weak, nonatomic) IBOutlet UIImageView *imgView;

@property (weak, nonatomic) IBOutlet UILabel *oneLabel;

@property (weak, nonatomic) IBOutlet UILabel *twoLabel;

-(void)configView;

@end

NS_ASSUME_NONNULL_END
