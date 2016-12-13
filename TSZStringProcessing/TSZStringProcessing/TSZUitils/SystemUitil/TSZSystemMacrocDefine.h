//
//  TSZSystemMacrocDefine.h
//  TSZCommonFoundation
//
//  Created by tangon 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个文件封装了大部分系统相关的功能宏定义
 */

#import "TSZSystemUitil.h"

/**
 *  去除performSelector警告
 *
 *  @param code 需要屏蔽警告的代码
 *
 *  @return
 */
#define TSZSystemRemovePerformSelectorLeakWarning(code)                    \
_Pragma("clang diagnostic push")                                        \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")     \
code;                                                                   \
_Pragma("clang diagnostic pop")                                         \

/**
 *  当前App的版本号
 */
#define TSZSystemAppVersion [TSZSystemUitil appVersion]

/**
 *  当前App的版本号 float型
 */
#define TSZSystemAppFloatVersion [TSZSystemUitil appFloatVersion]

/**
 *  当前App的版本号 字符串型
 */
#define TSZSystemAppStringVersion [TSZSystemUitil appStringVersion]

/**
 *  当前App的bundleIdentifier
 */
#define TSZSystemAppBundleIdentifier [TSZSystemUitil appBundleIdentifier]

/**
 *  屏幕绝对画布
 */
#define TSZSystemScreenBounds [TSZSystemUitil screenBounds]

/**
 *  获取系统版本号
 */
#define TSZSystemVersion [TSZSystemUitil currentSystemVersion]

/**
 *  当前屏幕缩放倍数
 */
#define TSZScreenScale [TSZSystemUitil currentScreenScale]

/**
 *  系统是否超过5.0
 */
#define TSZSystemIsOver5 [TSZSystemUitil isSystemVersionOver:5.0]

/**
 *  系统是否超过6.0
 */
#define TSZSystemIsOver6 [TSZSystemUitil isSystemVersionOver:6.0]

/**
 *  系统是否超过7.0
 */
#define TSZSystemIsOver7 [TSZSystemUitil isSystemVersionOver:7.0]

/**
 *  系统是否超过8.0
 */
#define TSZSystemIsOver8 [TSZSystemUitil isSystemVersionOver:8.0]

/**
 *  获取屏幕大小
 */
#define TSZSystemScreenSize [TSZSystemUitil deviceScreenSize]

/**
 *  获取屏幕宽度
 */
#define TSZSystemScreenWidth [TSZSystemUitil deviceScreenSize].width

/**
 *  获取屏幕高度
 */
#define TSZSystemScreenHeight [TSZSystemUitil deviceScreenSize].height

/**
 *  是否iPhone4
 */
#define TSZSystemiPhone4 [TSZSystemUitil iPhone4Device]

/**
 *  是否iPhone5
 */
#define TSZSystemiPhone5 [TSZSystemUitil iPhone5Device]

/**
 *  是否iPhone6
 */
#define TSZSystemiPhone6 [TSZSystemUitil iPhone6Device]

/**
 *  是否iPhone6 plus
 */
#define TSZSystemiPhone6Plus [TSZSystemUitil iPhone6PlusDevice]

/**
 *  是否iPad
 */
#define TSZSystemiPad [TSZSystemUitil iPadDevice]

/**
 *  系统UINavigationBar高度
 */
#define TSZSystemNavigationBarHeight [TSZSystemUitil naivationBarHeight]

/**
 *  Y轴增量
 */
#define TSZSystemOriginYDelta 20.f

/**
 *  AppDelegate
 */
#define TSZApplicationDelegate [UIApplication shareApplication].delegate

/**
 *  创建对象弱引用
 */
#define TSZWeakObject(anObject)  __weak __typeof(anObject)

/**
 *  创建对象强引用
 */
#define TSZStrongObject(anObject) __strong __typeof(anObject) 

/**
 *  创建self弱引用
 */
#define TSZWeakSelf TSZWeakObject(self)

/**
 *  创建self强引用
 */
#define TSZStrongSelf TSZStrongObject(TSZWeakSelf)

/**
 *  系统通知中心
 */
#define TSZNotificationCenter [TSZSystemUitil defaultCenter]

/**
 *  系统通知中心发noti名字的通知
 */
#define TSZNotificationPost(noti) [TSZSystemUitil postNoti:noti]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object
 */
#define TSZNotificationPostObj(noti,object) [TSZSystemUitil postNoti:noti withObject:object]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object ,携带用户自定义信息userInfo
 */
#define TSZNotificationPostObjUserInfo(noti,object,userInfo) [TSZSystemUitil postNoti:noti withObject:object withUserInfo:userInfo]

/**
 *  获取mainBundle
 */
#define TSZMainBundle [NSBundle mainBundle]

/**
 *  获取mainBundle内名字为fileName的文件的路径
 */
#define TSZMainBundlePath(fileName) [TSZSystemUitil mainBundlePath:fileName]

/**
 *  获取路径为bundlePath的指定bundle中文件名为fileName的文件路径
 */
#define TSZBundlePath(bundlePath,fileName) [TSZSystemUitil bundle:bundlePath file:fileName]


/**
 *  运行时给一个对象添加一个成员，添加的associateKey必须是一个静态常量字符串 static NSString * const associateKey = @"";
 */
#define TSZAssociateOriginWithObject(originObj,associateObj,associateKey) [TSZSystemUitil originObject:originObj associateObject:associateObj byKey:associateKey]

/**
 *  通过key获取运行时加入的成员
 */
#define TSZGetAssociateObject(originObj,associateKey) [TSZSystemUitil associateObjectFromOrigin:originObj byKey:associateKey]

/**
 *  移除辅助成员
 */
#define TSZAssociateRemove(originObj) [TSZSystemUitil associateRemoveFromOrigin:originObj]

/**
 *  照相机是否可用
 */
#define TSZCameraIsAvailable [TSZSystemUitil cameraAvailable]

/**
 *  前置摄像头是否可用
 */
#define TSZFrontCameraAvailable [TSZSystemUitil frontCameraAvailable]

/**
 *  照相机闪光灯是否可用
 */
#define TSZCameraFlashAvailable [TSZSystemUitil cameraFlashAvailable]

/**
 *  是否支持发短信
 */
#define TSZSystemCanSendSMS [TSZSystemUitil canSendSMS]

/**
 *  是否支持打电话
 */
#define TSZSystemCanMakePhoneCall [TSZSystemUitil canMakePhoneCall]

/**
 *  App是否有权限访问照片库
 */
#define TSZAppCanAccessPhotoLibrary [TSZSystemUitil isAppPhotoLibraryAccessAuthorized]

/**
 *  App是否有权限访问相机
 */
#define TSZAppCanAccessCamera [TSZSystemUitil isAppCameraAccessAuthorized]

/**
 *  获取屏幕Y轴起始点
 */
#define TSZAppSelfViewFrameOrangeY [TSZSystemUitil getSelfViewFrameOrangeY]

/**
 *  系统是否 >=7.0 <7.1
 */
#define TSZSystemVersionIs7 [TSZSystemUitil isSystemVersionIs7]
