//
//  PBLinkReportEvent.h
//  PartnerBoost
//
//  Created by loo on 2023/8/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PBLReportEventType) {
    PBLReportEventTypeUnknown = 0,
    PBLReportEventTypeInstallation,
    PBLReportEventTypeOpenApp,
    PBLReportEventTypeEvent
};

@interface PBLinkReportEvent : NSObject <NSCoding>

@property (nonatomic, assign) PBLReportEventType type;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) long long event_timestamp;
@property (nonatomic, strong) NSString *download_link;
@property (nonatomic, strong) NSString *attribution_link;
/**
 phone_name
 device_name
 system_name
 system_version
 idfv
 idfa
 android_id
 carrier
 cpu
 memory
 screen_width
 screen_height
 screen_dpi
 timezone
 language
 country
 ip_global_v4
 ip_global_v6
 ip_local_v4
 ip_local_v6
 jiguang_device_id
 ydun_device_id
 pb_device_id
 */
@property (nonatomic, strong) NSMutableDictionary *device;
@property (nonatomic, strong) NSDictionary *data;


// TODO 还有设备唯一码，自收集的设备参数等

@end

NS_ASSUME_NONNULL_END
