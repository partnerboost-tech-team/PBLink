//
//  NTESFingerprintConf.h
//  NTESFingerprintConf
//
//  Created by Ke Xu on 2019/7/16.
//  Copyright © 2019 Ke Xu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTESCSYDunConfig : NSObject

/**
 *  getToken 超时时间，不设置默认3000ms
 */
@property (nonatomic, assign) int timeout;

/**
 *  urlPrefix   自定义域名
 */
@property (nonatomic, copy) NSString *urlPrefix;

/**
 *  channel     渠道名，默认"App Store"
 */
@property (nonatomic, copy) NSString *channel;

@end

NS_ASSUME_NONNULL_END
