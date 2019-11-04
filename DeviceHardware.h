	//
	//  DeviceHardware.h
	//
	//  Use to determine version of device.
	//
	//  You can get:
	//  - Specific platform  (ex.: iPad 2 GSM)
	//  - General platform   (ex.: iPad 2)
	//  - Platform type		 (ex.: iPad)
	//  - Platform string	 (ex.: "iPad 2 (GSM)")
	//  - Raw machine string (ex.: "iPad2,2")
	//

#import <Foundation/Foundation.h>

typedef enum {
	DeviceHardwareSpecificPlatform_Unknown,
	DeviceHardwareSpecificPlatform_iPhone_1G,
	DeviceHardwareSpecificPlatform_iPhone_3G,
	DeviceHardwareSpecificPlatform_iPhone_3GS,
	DeviceHardwareSpecificPlatform_iPhone_4,
	DeviceHardwareSpecificPlatform_iPhone_4_Verizon,
	DeviceHardwareSpecificPlatform_iPhone_4S,
	DeviceHardwareSpecificPlatform_iPhone_5_GSM,
	DeviceHardwareSpecificPlatform_iPhone_5_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_5C_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_5C_Global,
	DeviceHardwareSpecificPlatform_iPhone_5S_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_5S_Global,
	DeviceHardwareSpecificPlatform_iPhone_6_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_6S_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_6_Plus_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_6S_Plus_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_SE_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPhone_7_CDMA,
	DeviceHardwareSpecificPlatform_iPhone_7_GSM,
	DeviceHardwareSpecificPlatform_iPhone_7_Plus_CDMA,
	DeviceHardwareSpecificPlatform_iPhone_7_Plus_GSM,
    DeviceHardwareSpecificPlatform_iPhone_8,
    DeviceHardwareSpecificPlatform_iPhone_8_Plus,
    DeviceHardwareSpecificPlatform_iPhone_X,
    DeviceHardwareSpecificPlatform_iPhone_XR,
    DeviceHardwareSpecificPlatform_iPhone_XS,
    DeviceHardwareSpecificPlatform_iPhone_XS_Max,
    DeviceHardwareSpecificPlatform_iPhone_11,
    DeviceHardwareSpecificPlatform_iPhone_11_Pro,
    DeviceHardwareSpecificPlatform_iPhone_11_Pro_Max,
	DeviceHardwareSpecificPlatform_iPod_Touch_1G,
	DeviceHardwareSpecificPlatform_iPod_Touch_2G,
	DeviceHardwareSpecificPlatform_iPod_Touch_3G,
	DeviceHardwareSpecificPlatform_iPod_Touch_4G,
	DeviceHardwareSpecificPlatform_iPod_Touch_5G,
	DeviceHardwareSpecificPlatform_iPod_Touch_6G,
	DeviceHardwareSpecificPlatform_iPad,
	DeviceHardwareSpecificPlatform_iPad_2_GSM,
	DeviceHardwareSpecificPlatform_iPad_2_CDMA,
	DeviceHardwareSpecificPlatform_iPad_2_WiFi,
	DeviceHardwareSpecificPlatform_iPad_3_WiFi,
	DeviceHardwareSpecificPlatform_iPad_3_GSM,
	DeviceHardwareSpecificPlatform_iPad_3_CDMA,
	DeviceHardwareSpecificPlatform_iPad_4_WiFi,
	DeviceHardwareSpecificPlatform_iPad_4_GSM,
	DeviceHardwareSpecificPlatform_iPad_4_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Mini_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Mini_GSM,
	DeviceHardwareSpecificPlatform_iPad_Mini_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Mini_2_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Mini_2_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Mini_2_TD_LTE_China,
	DeviceHardwareSpecificPlatform_iPad_Mini_3_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Mini_3_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Mini_3_TD_LTE_China,
	DeviceHardwareSpecificPlatform_iPad_Mini_4_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Mini_4_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Air_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Air_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Air_TD_LTE_China,
	DeviceHardwareSpecificPlatform_iPad_Air_2_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Air_2_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Pro_9_7_inch_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Pro_9_7_inch_CDMA_GSM,
	DeviceHardwareSpecificPlatform_iPad_Pro_12_9_inch_WiFi,
	DeviceHardwareSpecificPlatform_iPad_Pro_12_9_inch_CDMA_GSM,
	DeviceHardwareSpecificPlatform_Simulator
} DeviceHardwareSpecificPlatform;

typedef enum {
	DeviceHardwareGeneralPlatform_Unknown,
	DeviceHardwareGeneralPlatform_iPhone_1G,
	DeviceHardwareGeneralPlatform_iPhone_3G,
	DeviceHardwareGeneralPlatform_iPhone_3GS,
	DeviceHardwareGeneralPlatform_iPhone_4,
	DeviceHardwareGeneralPlatform_iPhone_4S,
	DeviceHardwareGeneralPlatform_iPhone_5,
	DeviceHardwareGeneralPlatform_iPhone_5C,
	DeviceHardwareGeneralPlatform_iPhone_5S,
	DeviceHardwareGeneralPlatform_iPhone_6,
	DeviceHardwareGeneralPlatform_iPhone_6_Plus,
	DeviceHardwareGeneralPlatform_iPhone_6S,
	DeviceHardwareGeneralPlatform_iPhone_6S_Plus,
	DeviceHardwareGeneralPlatform_iPhone_SE,
	DeviceHardwareGeneralPlatform_iPhone_7,
	DeviceHardwareGeneralPlatform_iPhone_7_Plus,
	DeviceHardwareGeneralPlatform_iPhone_8,
	DeviceHardwareGeneralPlatform_iPhone_8_Plus,
	DeviceHardwareGeneralPlatform_iPhone_X,
    DeviceHardwareGeneralPlatform_iPhone_11,
    DeviceHardwareGeneralPlatform_iPhone_11_Pro,
    DeviceHardwareGeneralPlatform_iPhone_11_Pro_Max,
	DeviceHardwareGeneralPlatform_iPod_Touch_1G,
	DeviceHardwareGeneralPlatform_iPod_Touch_2G,
	DeviceHardwareGeneralPlatform_iPod_Touch_3G,
	DeviceHardwareGeneralPlatform_iPod_Touch_4G,
	DeviceHardwareGeneralPlatform_iPod_Touch_5G,
	DeviceHardwareGeneralPlatform_iPod_Touch_6G,
	DeviceHardwareGeneralPlatform_iPad,
	DeviceHardwareGeneralPlatform_iPad_2,
	DeviceHardwareGeneralPlatform_iPad_3,
	DeviceHardwareGeneralPlatform_iPad_4,
	DeviceHardwareGeneralPlatform_iPad_Mini,
	DeviceHardwareGeneralPlatform_iPad_Air,
	DeviceHardwareGeneralPlatform_iPad_Air_2,
	DeviceHardwareGeneralPlatform_iPad_Mini_2,
	DeviceHardwareGeneralPlatform_iPad_Mini_3,
	DeviceHardwareGeneralPlatform_iPad_Mini_4,
	DeviceHardwareGeneralPlatform_iPad_Pro_9_7_inch,
	DeviceHardwareGeneralPlatform_iPad_Pro_12_9_inch,
	DeviceHardwareGeneralPlatform_Simulator
} DeviceHardwareGeneralPlatform;

typedef enum {
	DeviceHardwarePlatformType_Unknown,
	DeviceHardwarePlatformType_iPhone,
	DeviceHardwarePlatformType_iPod_Touch,
	DeviceHardwarePlatformType_iPad,
	DeviceHardwarePlatformType_Simulator
} DeviceHardwarePlatformType;

@interface DeviceHardware : NSObject

+ (DeviceHardwareSpecificPlatform)specificPlatform;
+ (DeviceHardwareGeneralPlatform)generalPlatform;
+ (DeviceHardwarePlatformType)platformType;
+ (NSString *)platformString;

+ (NSString *)machine;

@end
