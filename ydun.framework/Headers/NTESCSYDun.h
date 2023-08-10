//
//  NTESFingerprint.h
//  NTESFingerprint
//
//  Created by Ke Xu on 2019/7/16.
//  Copyright © 2019 Ke Xu. All rights reserved.

/* 获取设备指纹 :  服务端模式 */

#import <Foundation/Foundation.h>
#import "NTESCSYDunConfig.h"
/**
 *  @abstract    获取token和deviceID的状态
 *
 *  @说明         NTESFingerprintGetDataSuccess      获取token或deviceID成功
 *               NTESFingerprintNetworkError        网络错误或服务不可用
 *               NTESFingerprintGetDataError        获取数据错误或失败
 *               NTESFingerprintDataValidationError    数据签名校验失败
 *               NTESFingerprintUnauthorizedError   APPID错误
 *               NTESFingerprintTimeoutError        获取token或deviceID超时
 *               NTESFingerprintOtherError          其他错误
 *
 */
typedef NS_ENUM(NSUInteger, NTESFingerprintStatus) {
    NTESFingerprintGetDataSuccess = 200,
    NTESFingerprintNetworkError = 201,
    NTESFingerprintGetDataError = 1000,
    NTESFingerprintDataValidationError = 1002,
    NTESFingerprintUnauthorizedError = 1007,
    NTESFingerprintTimeoutError = 1008,
    NTESFingerprintOtherError = 1009,
};

/**
 *  @abstract   block
 *
 *  @说明        获取token结果的回调
 */
typedef void(^yDunGetTokenBlock)(NSString *token, NTESFingerprintStatus status);

@interface NTESCSYDun: NSObject

/**
 *  获取NTESFingerprint实例
 */
+ (instancetype)sharedInstance;

/**
 *  SDK初始化
 *
 *  @param appID        产品编号
 */
- (void)init:(NSString *)appID;
/**
 *  SDK初始化
 *
 *  @param appID        产品编号
 *  @param config      配置信息，可设置私有化域名
 */
- (void)init:(NSString *)appID config:(NTESCSYDunConfig *)config;

/**
 *  获取token
 *
 *  @param block                获取token的block
 */
- (void)getToken:(yDunGetTokenBlock)block;

/**
 获取当前SDK版本号
 */
- (NSString *)getSDKVersion;

@end
