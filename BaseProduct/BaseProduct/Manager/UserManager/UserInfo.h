//
//  UserInfo.h
//  MiAiApp
//
//  Created by 徐阳 on 2017/5/23.
//  Copyright © 2017年 徐阳. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CodeModel.h"
@interface UserInfo : CodeModel

@property (nonatomic , copy) NSString              * ID;
@property (nonatomic , copy) NSString              * name;
@property (nonatomic , copy) NSString              * customer;
@property (nonatomic , copy) NSString              * truename;
@property (nonatomic , copy) NSString              * token;
@property (nonatomic , copy) NSString              * tel;
@property (nonatomic , copy) NSString              * level;
@property (nonatomic , copy) NSString              * host;
@property (nonatomic , copy) NSString              * rid;
@property (nonatomic , copy) NSString              * travel_amount;
@property (nonatomic , copy) NSString              * not_send_amount;
@property (nonatomic , copy) NSString              * is_forbid;
@property (nonatomic , copy) NSString              * penname;
@property (nonatomic , copy) NSString              * avatar;
@property (nonatomic , copy) NSString              * openid;
@property (nonatomic , copy) NSString              * nickname;
@property (nonatomic , copy) NSString              * wxname;
@property (nonatomic , copy) NSString              * city;
@property (nonatomic , copy) NSString              * auth_key;
@property (nonatomic , copy) NSString              * password_hash;
@property (nonatomic , copy) NSString              * password_reset_token;
@property (nonatomic , copy) NSString              * status;
@property (nonatomic , copy) NSString              * login_ip;
@property (nonatomic , copy) NSString              * login_time;
@property (nonatomic , copy) NSString              * created_at;
@property (nonatomic , copy) NSString              * updated_at;
@property (nonatomic , copy) NSString              * uid;
@property (nonatomic , copy) NSString              * hnum;
@property (nonatomic , copy) NSString              * sign;


@end
