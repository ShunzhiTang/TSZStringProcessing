//
//  TSZDispatchCenterUitil.h
//  TSZCommonFoundation
//
//  Created by tang on 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TSZDispatchCenterUitil : NSObject

+ (void)asyncMainQueue:(dispatch_block_t)block;

+ (void)asyncMainQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

+ (void)asyncGlobalBackgroundQueue:(dispatch_block_t)block;

+ (void)asyncGlobalBackgroundQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

+ (void)asyncGlobalHighQueue:(dispatch_block_t)block ;

+ (void)asyncGlobalHighQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

+ (void)asyncGlobalLowQueue:(dispatch_block_t)block;

+ (void)asyncGlobalLowQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

+ (void)asyncGlobalDefaultQueue:(dispatch_block_t)block;

+ (void)asyncGlobalDefaultQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

+ (void)asyncQueue:(dispatch_queue_t)queue action:(dispatch_block_t)block delay:(NSTimeInterval)second;

+ (void)dispatchOnce:(dispatch_once_t)onceToken action:(dispatch_block_t)block;

+ (dispatch_queue_t)createQueueWithName:(NSString *)name isSerial:(BOOL)isSerial;

@end
