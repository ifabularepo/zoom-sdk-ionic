//
//  MobileRTCE2EMeetingKey.h
//  MobileRTC
//
//  Created by Robust Hu on 2017/9/18.
//  Copyright © 2019年 Zoom Video Communications, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @brief The method provides support for custom end-to-end meeting session keys.
 @warning The function is optional.
 */
@interface MobileRTCE2EMeetingKey : NSObject

/*!
 @brief Component .
 */
@property (nonatomic, assign, readwrite) MobileRTCComponentType type;
/*!
 @brief Meeting session key.
 */
@property (nonatomic, retain, readwrite) NSData *meetingKey;
/*!
 @brief Meeting session extra information.
 */
@property (nonatomic, retain, readwrite) NSData *meetingIv;

@end
