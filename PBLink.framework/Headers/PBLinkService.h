//
//  PBLinkService.h
//  PartnerBoost
//
//  Created by Jeff on 2023/7/6.
//

#import <Foundation/Foundation.h>
#import <PBLink/PBLinkResponse.h>
#import <PBLink/PBLinkReportEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBLinkService : NSObject

/// 初始化PBLinkService
+ (void)initWith:(NSString *)appkey idfa:(nullable NSString *)idfa launchOptions:(nonnull NSDictionary *)launchOptions;

/// 根据不同的URL路由到不同的app展示页
+ (BOOL)routePBLink:(NSURL *)url;

/// 根据universal link路由到不同的app展示页
+ (BOOL)continueUserActivity:(NSUserActivity *)userActivity;

/// 注册一个通用的获取参数的回调
+ (void)registerHandler:(void(^_Nonnull)(PBLinkResponse *__nullable respone))handler;

/// 报告事件
+ (void)report:(PBLReportEventType)eventType;

/// 报告事件
+ (void)report:(PBLReportEventType)eventType eventValue:(nullable NSDictionary *)eventValue;

+ (NSString *)getDownloadingLink;

+ (NSString *)getAttributionLink;

@end

NS_ASSUME_NONNULL_END
