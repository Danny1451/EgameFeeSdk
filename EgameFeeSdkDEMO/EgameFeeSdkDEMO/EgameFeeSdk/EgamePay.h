//
//  IosFeeSdk.h
//  IosFeeSdk
//
//  Created by 韩玮 on 14-7-8.
//
//  Copyright (c) 2014年 炫彩互动网络科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EgameConstant.h"

typedef void(^EgamePayCallbackBlock)(EgamePayResult state, NSDictionary *payParams, int failedReason);

@interface EgamePay : NSObject

+ (id) shareInstance;

- (void) initSdk;

- (void) pay: (NSDictionary *) payParams payCallback:(EgamePayCallbackBlock) callback;

- (void) openURL:(NSURL *)url application:(UIApplication *)app;
@end
