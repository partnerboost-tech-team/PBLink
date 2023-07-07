//
//  PBLinkService.h
//  PartnerBoost
//
//  Created by Jeff on 2023/7/6.
//

#import <Foundation/Foundation.h>
#import <PartnerBoost/PBLinkResponse.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBLinkService : NSObject

/// 初始化PBLinkService
+ (void)initWith:(NSString *)appkey idfa:(nullable NSString *)idfa;

/// 根据不同的URL路由到不同的app展示页
+ (void)routePBLink:(NSURL *)url;

/// 根据universal link路由到不同的app展示页
+ (void)continueUserActivity:(NSUserActivity *)userActivity;

/// 注册一个通用的获取参数的回调
+ (void)registerHandler:(void(^_Nonnull)(PBLinkResponse *__nullable respone))handler;

@end

NS_ASSUME_NONNULL_END
