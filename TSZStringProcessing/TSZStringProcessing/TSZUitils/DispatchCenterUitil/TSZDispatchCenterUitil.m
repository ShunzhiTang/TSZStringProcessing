//
//  TSZDispatchCenterUitil.m
//  TSZCommonFoundation
//
//  Created by tang on 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

#import "TSZDispatchCenterUitil.h"

@implementation TSZDispatchCenterUitil

+ (void)asyncMainQueue:(dispatch_block_t)block
{
    [TSZDispatchCenterUitil asyncMainQueue:block delay:0.f];
}

+ (void)asyncMainQueue:(dispatch_block_t)block delay:(NSTimeInterval)second
{
    [TSZDispatchCenterUitil asyncQueue:dispatch_get_main_queue() action:block delay:second];
}

+ (void)asyncGlobalBackgroundQueue:(dispatch_block_t)block
{
    [TSZDispatchCenterUitil asyncGlobalBackgroundQueue:block delay:0.f];
}

+ (void)asyncGlobalBackgroundQueue:(dispatch_block_t)block delay:(NSTimeInterval)second
{
    [TSZDispatchCenterUitil asyncQueue:dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0) action:block delay:second];
}

+ (void)asyncGlobalHighQueue:(dispatch_block_t)block
{
    [TSZDispatchCenterUitil asyncGlobalHighQueue:block delay:0.f];
}

+ (void)asyncGlobalHighQueue:(dispatch_block_t)block delay:(NSTimeInterval)second
{
    [TSZDispatchCenterUitil asyncQueue:dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0) action:block delay:second];
}

+ (void)asyncGlobalLowQueue:(dispatch_block_t)block
{
    [TSZDispatchCenterUitil asyncGlobalLowQueue:block delay:0.f];
}

+ (void)asyncGlobalLowQueue:(dispatch_block_t)block delay:(NSTimeInterval)second
{
     [TSZDispatchCenterUitil asyncQueue:dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0) action:block delay:second];
}

+ (void)asyncGlobalDefaultQueue:(dispatch_block_t)block
{
    [TSZDispatchCenterUitil asyncGlobalDefaultQueue:block delay:0.f];
}

+ (void)asyncGlobalDefaultQueue:(dispatch_block_t)block delay:(NSTimeInterval)second
{
    [TSZDispatchCenterUitil asyncQueue:dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0) action:block delay:second];
}

+ (void)asyncQueue:(dispatch_queue_t)queue action:(dispatch_block_t)block delay:(NSTimeInterval)second
{
    if (!queue || !block) {
                
        return;
    }
    
    if (second > 0.f) {
        
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(second * NSEC_PER_SEC)), queue, block);
        
    }else{
        
        dispatch_async(queue, block);

    }
}

+ (dispatch_queue_t)createQueueWithName:(NSString *)name isSerial:(BOOL)isSerial
{
    if (isSerial) {
        
        return  dispatch_queue_create([name UTF8String], DISPATCH_QUEUE_SERIAL);
        
    }else{
        
        return  dispatch_queue_create([name UTF8String], NULL);
    }
}

+ (void)dispatchOnce:(dispatch_once_t)onceToken action:(dispatch_block_t)block
{
    if(!block){
        return;
    }
    dispatch_once(&onceToken, block);
}

@end
