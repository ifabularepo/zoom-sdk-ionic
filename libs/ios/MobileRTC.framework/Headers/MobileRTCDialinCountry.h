//
//  MobileRTCDialinCountry.h
//  MobileRTC
//
//  Created by Robust Hu on 2017/8/21.
//  Copyright © 2019年 Zoom Video Communications, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AudioOptionType)
{
    AudioOptionType_TelephonyOnly,
    AudioOptionType_VoipOnly,
    AudioOptionType_VoipAndTelephony,
    AudioOptionType_ThirdPartyAudio,
};

@interface MobileRTCDialinCountry : NSObject

/*!
 @brief the user select countries.
 */
@property (nonatomic, retain) NSMutableArray *selectedCountries;

/*!
 @brief all available countries config in web server.
 */
@property (nonatomic, retain) NSMutableArray *allCountries;

/*!
 @brief specify the dialin number include toll free phone number.
 */
@property (nonatomic, assign) BOOL           isIncludedTollfree;

@property (nonatomic, retain) NSString       *hash;

@end
