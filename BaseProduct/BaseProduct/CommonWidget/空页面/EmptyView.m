//
//  EmptyView.m
//  zhima_kt
//
//  Created by zhima on 2020/3/13.
//  Copyright © 2020 zhima. All rights reserved.
//

#import "EmptyView.h"

@implementation EmptyView

-(void)configView{
    switch (_emptyType) {
        case EMPTY_SOU_SUO:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_search"];
            _oneLabel.text = EMPTY_SOU_SUO1;
            _twoLabel.text = EMPTY_SOU_SUO_DES1;
            break;
        case EMPTY_LIE_BIAO:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_cat"];
            _oneLabel.text = EMPTY_LIE_BIAO1;
            _twoLabel.text = EMPTY_LIE_BIAO_DES1;
            break;
        case EMPTY_DATI_JILU:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_dati"];
            _oneLabel.text = EMPTY_DATI_JILU1;
            _twoLabel.text = EMPTY_DATI_JILU_DES1;
            break;
        case EMPTY_SHOU_CANG:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_collect"];
            _oneLabel.text = EMPTY_SHOU_CANG1;
            _twoLabel.text = EMPTY_SHOU_CANG_DES1;
            break;
        case EMPTY_LVYOU_JIFEN:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_point"];
            _oneLabel.text = EMPTY_LVYOU_JIFEN1;
            _twoLabel.text = EMPTY_LVYOU_JIFEN_DES1;
            break;
        case EMPTY_KUAISU_RUMEN:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_quickstart"];
            _oneLabel.text = EMPTY_KUAISU_RUMEN1;
            _twoLabel.text = EMPTY_KUAISU_RUMEN_DES1;
            break;
        case EMPTY_KECHENG_CHOUBEI:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_quickstart"];
            _oneLabel.text = EMPTY_KECHENG_CHOUBEI1;
            _twoLabel.text = EMPTY_KECHENG_CHOUBEI_DES1;
        break;
        case EMPTY_LAOSHI_HUIFU:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_reply"];
            _oneLabel.text = EMPTY_LAOSHI_HUIFU1;
            _twoLabel.text = EMPTY_LAOSHI_HUIFU_DES1;
            break;
        case EMPTY_XITONG_XIAOXI:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_msg"];
            _oneLabel.text = EMPTY_XITONG_XIAOXI1;
            _twoLabel.text = EMPTY_XITONG_XIAOXI_DES1;
            break;
        case EMPTY_YIKAN_KECHENG:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_looked"];
            _oneLabel.text = EMPTY_YIKAN_KECHENG1;
            _twoLabel.text = EMPTY_YIKAN_KECHENG_DES1;
            break;
        case EMPTY_SUOYOU_PINGLUN:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_pinglun"];
            _oneLabel.text = EMPTY_SUOYOU_PINGLUN1;
            _twoLabel.text = EMPTY_SUOYOU_PINGLUN_DES1;
            break;
        case EMPTY_WEIKAN_KECHENG:
            _imgView.image = [UIImage imageNamed:@"ic_nodata_nolook"];
            _oneLabel.text = EMPTY_WEIKAN_KECHENG1;
            _twoLabel.text = EMPTY_WEIKAN_KECHENG_DES1;
            break;
        
        default:
            break;
    }
}

@end
