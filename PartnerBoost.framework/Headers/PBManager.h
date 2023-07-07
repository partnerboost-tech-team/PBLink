//
//  PBManager.h
//  PartnerBoost
//
//  Created by loo on 2023/7/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBManager : NSObject

+ (void)initWith:(NSString *)appkey idfa:(NSString *)idfa;

+ (void)routePBLink:(NSURL *)url;

+ (void)continueUserActivity:(NSUserActivity *)userActivity;

//+ (void)registerHandler:(void(^_Nonnull)(JMLinkResponse *__nullable respone))handler;

@end

NS_ASSUME_NONNULL_END
