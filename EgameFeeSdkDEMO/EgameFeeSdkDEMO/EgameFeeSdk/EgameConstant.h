//
//  EgameConstant.h
//  EgamePaySdk
//
//  Created by 韩玮 on 14-7-23.
//  Copyright (c) 2014年 炫彩互动网络科技有限公司. All rights reserved.
//

#define PAY_PARAMS_KEY_TOOLS_ALIAS @"toolsAlias"
#define PAY_PARAMS_KEY_TOOLS_DESC @"toolsDesc"
#define PAY_PARAMS_KEY_CP_PARAMS @"cpParams"
#define PAY_PARAMS_KEY_PRIORITY @"priority"
#define PAY_PARAMS_KEY_TOOLS_PRICE @"toolsPrice"


//    0 没有错误,支付成功或支付取消时收到此值
//   -1 一般错误
//   -2 SDK正在初始化,暂时无法支付

// -101 计费文件未找到或数据读取异常
// -103 应用校验失败，请确认申报产品信息和当前产品是否一致
// -104 SIM异常,可能的原因:未越狱 未插卡 SIM卡不支持等
// -105 道具别名错误
// -106 道具价格错误

// -200 没有调用初始化方法
// -201 计费回调对象为空
// -202 计费道具别名错误，请确认产品申报时是否已经录入此道具别名
// -203 渠道ID数据异常，请确认产品申报时是否已经录入此渠道
// -204 SERVICE_CODE数据异常
// -205 自定义参数格式异常
// -206 计费方法调用过快，请确认前一次计费已经返回
// -207 计费短信发送失败，请检查手机是否越狱 SIM卡状态是否正常 是否开启了飞行模式 是否欠费等
// -300 获取计费流水号网络异常
// -301 获取计费流水号数据异常
// -400 手机未越狱
#define REASON_CODE_NO_ERROR                           0
#define REASON_CODE_NORMAL_ERROR                      -1
#define REASON_CODE_INIT_DOING                        -2
#define REASON_CODE_FEEINFO_IS_NIL                  -101
#define REASON_CODE_APPKEY_INVALID                  -103
#define REASON_CODE_IMSI_ERROR                      -104
#define REASON_CODE_TOOLSALIAS_IS_NIL               -105
#define REASON_CODE_TOOLSPRICE_IS_NIL               -106

#define REASON_CODE_INIT_FAILED                     -200
#define REASON_CODE_LISTENER_IS_NIL                 -201
#define REASON_CODE_TOOLSCODE_INVALID               -202
#define REASON_CODE_CHANNELID_INVALID               -203
#define REASON_CODE_SERVICE_CODE_INVALID            -204
#define REASON_CODE_CPPARAM_INVALID                 -205
#define REASON_CODE_PAY_CALL_FAST_ERROR             -206
#define REASON_CODE_PAY_SMS_SEND_ERROR              -207

#define REASON_CODE_GET_SERIAL_NUMBER_NET_ERROR     -300
#define REASON_CODE_GET_SERIAL_NUMBER_ERROR         -301

#define REASON_CODE_NO_JAILBREAK                    -400

typedef enum{
    PaySuccess,     // 支付成功
    PayFailed,      // 支付失败
    PayCanceled,    // 支付取消
}EgamePayResult;

