//
//  TSZDispatchMacrocDefine.h
//  TSZCommonFoundation
//
//  Created by tangon 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏可以方便在各种队列中执行block,提供便捷的使用方法
 *  是对GCD的一个简单封装
 */

#import "TSZDispatchCenterUitil.h"

/**
 *  主线程异步执行block
 */
#define TSZAsyncMainQueue(block) [TSZDispatchCenterUitil asyncMainQueue:block]

/**
 *  主线程延迟second秒异步执行block
 */
#define TSZAsyncMainQueueDelay(second,block) [TSZDispatchCenterUitil asyncMainQueue:block delay:second]

/**
 *  全局后台线程异步执行block
 */
#define TSZAsyncGlobalBackgroundQueue(block) [TSZDispatchCenterUitil asyncGlobalBackgroundQueue:block]

/**
 *  全局后台线程延迟second秒异步执行block
 */
#define TSZAsyncGlobalBackgroundQueueDelay(second,block) [TSZDispatchCenterUitil asyncGlobalBackgroundQueue:block delay:second]

/**
 *  全局高优先级线程异步执行block
 */
#define TSZAsyncGlobalHighQueue(block) [TSZDispatchCenterUitil asyncGlobalHighQueue:block]

/**
 *  全局高优先级线程延迟second秒异步执行block
 */
#define TSZAsyncGlobalHighQueueDelay(second,block) [TSZDispatchCenterUitil asyncGlobalHighQueue:block delay:second]

/**
 *  全局低优先级线程异步执行block
 */
#define TSZAsyncGlobalLowQueue(block) [TSZDispatchCenterUitil asyncGlobalLowQueue:block]

/**
 *  全局低优先级线程延迟second秒异步执行block
 */
#define TSZAsyncGlobalLowQueueDelay(second,block) [TSZDispatchCenterUitil asyncGlobalLowQueue:block delay:second]

/**
 *  全局默认线程异步执行block
 */
#define TSZAsyncGlobalDefaultQueue(block) [TSZDispatchCenterUitil asyncGlobalDefaultQueue:block]

/**
 *  全局默认线程延迟second秒异步执行block
 */
#define TSZAsyncGlobalDefaultQueueDelay(second,block) [TSZDispatchCenterUitil asyncGlobalDefaultQueue:block delay:second]

/**
 *  在queue线程队列异步执行block
 */
#define TSZAsync(queue,block)  [TSZDispatchCenterUitil asyncQueue:queue action:block]

/**
 *  在queue线程序延迟second秒异步执行block
 */
#define TSZAsyncDelay(queue,second,block)  [TSZDispatchCenterUitil asyncQueue:queue action:block delay:second]

/**
 *  只执行一次block,创建单例使用
 */
#define TSZDispatchOnce(onceToken,block) [TSZDispatchCenterUitil dispatchOnce:onceToken action:block]