//
//  PBLinkResponse.h
//  PartnerBoost
//
//  Created by Jeff on 2023/7/7.
//

#import <Foundation/Foundation.h>

/// 数据来源
typedef NS_OPTIONS(NSUInteger, PBLDataSource){
    ///未知
    kPBLDataSourceUnknown = 0,
    ///scheme跳转传递
    kPBLDataSourceScheme = 1,
    ///universal link 跳转传递
    kPBLDataSourceUniversalLink = 2,
    ///场景还原返回
    kPBLDataSourceReplay = 3
};

/// 事件类型
typedef NS_OPTIONS(NSUInteger, PBLEventType){
    ///未知
    kPBLEventTypeUnknown = 0,
    ///安装事件
    kPBLEventTypeInstallaction = 1,
    ///拉起事件
    kPBLEventTypeOpen  = 2
};

NS_ASSUME_NONNULL_BEGIN

@interface PBLinkResponse : NSObject

/// 唤起的URL
@property(nonatomic, strong) NSURL * _Nullable url;
/// 获取魔链的参数
@property(nonatomic, strong) NSDictionary * _Nullable params;
/// 数据来源
@property(nonatomic, assign) PBLDataSource source;
/// 事件类型
@property(nonatomic, assign) PBLEventType eventType;

@end

NS_ASSUME_NONNULL_END
