//
//  TSZSystemUitil.m
//  TSZCommonFoundation
//
//  Created by tangon 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

#import "TSZSystemUitil.h"
#import "TSZStringMacrocDefine.h"
#import "TSZSystemMacrocDefine.h"
#import "TSZUitils.h"
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>

@implementation TSZSystemUitil

+ (CGFloat)appVersion
{
    NSDictionary *infoDict = [[NSBundle mainBundle]infoDictionary];
    return [infoDict[@"CFBundleShortVersionString"] floatValue];
}


+ (CGFloat)appFloatVersion
{
    NSDictionary *infoDict = [[NSBundle mainBundle]infoDictionary];
    return [infoDict[@"CFBundleShortVersionString"] floatValue];
}

+ (NSString *)appStringVersion
{
    NSDictionary *infoDict = [[NSBundle mainBundle]infoDictionary];
    return infoDict[@"CFBundleShortVersionString"];
}

+ (NSString *)appBundleIdentifier
{
    return [[NSBundle mainBundle]bundleIdentifier];
}

+ (BOOL)isSystemVersionOver:(CGFloat)versionValue
{
    return [TSZSystemUitil currentSystemVersion] >= versionValue;
}

+ (CGRect)screenBounds
{
    return [UIScreen mainScreen].bounds;
}

+ (CGFloat)currentSystemVersion
{
    return [[UIDevice currentDevice].systemVersion floatValue];
}

+ (CGFloat)currentScreenScale
{
    return [UIScreen mainScreen].scale;
}

+ (BOOL)iPadDevice
{
    return UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad;
}

+ (BOOL)iPhone4Device
{
    return CGSizeEqualToSize((CGSize){320,480}, [TSZSystemUitil deviceScreenSize]);
}

+ (BOOL)iPhone5Device
{
    return CGSizeEqualToSize((CGSize){320,568}, [TSZSystemUitil deviceScreenSize]);

}

+ (BOOL)iPhone6Device
{
    return CGSizeEqualToSize((CGSize){375,667}, [TSZSystemUitil deviceScreenSize]);
}

+ (BOOL)iPhone6PlusDevice
{
    return CGSizeEqualToSize((CGSize){414,736}, [TSZSystemUitil deviceScreenSize]);
}

+ (CGSize)deviceScreenSize
{
    return [UIScreen mainScreen].bounds.size;
}

+ (CGFloat)naivationBarHeight
{
    return 44.f;
}

+ (NSNotificationCenter *)defaultCenter
{
    return [NSNotificationCenter defaultCenter];
}

+ (void)postNoti:(NSString *)notiName
{
    [TSZSystemUitil postNoti:notiName withObject:nil];
}

+ (void)postNoti:(NSString *)notiName withObject:(id)obj
{
    [TSZSystemUitil postNoti:notiName withObject:obj withUserInfo:nil];
}

+ (void)postNoti:(NSString *)notiName withObject:(id)obj withUserInfo:(NSDictionary *)infoDict
{
    if (TSZStringIsNull(notiName)) {
        return;
    }
    [[TSZSystemUitil defaultCenter]postNotificationName:notiName object:obj userInfo:infoDict];
}

+ (NSString *)mainBundlePath:(NSString*)fileName
{
    if (TSZStringIsNull(fileName)) {
        return nil;
    }
    NSArray *fileArray = [fileName componentsSeparatedByString:@"."];
    
    if (fileArray.count < 2) {
        return nil;
    }
    return [TSZMainBundle  pathForResource:fileArray[0] ofType:fileArray[1]];
}

+ (NSString *)bundle:(NSString *)bundle file:(NSString *)file
{
    if (TSZStringIsNull(bundle)||TSZStringIsNull(file)) {
        return nil;
    }
    return [bundle stringByAppendingPathComponent:file];
}

+ (void)showNetworkIndicatorActivity:(BOOL)state
{
    [[UIApplication sharedApplication]setNetworkActivityIndicatorVisible:state];
}

+ (void)originObject:(id)originObject associateObject:(id)anObject byKey:(NSString *const)associateKey
{
    if (TSZCheckObjectNull(originObject) || TSZCheckObjectNull(anObject)) {
        return;
    }
    
    objc_setAssociatedObject(originObject, &associateKey, anObject, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

+ (id)associateObjectFromOrigin:(id)originObject byKey:(NSString *const)associateKey
{
    if (TSZCheckObjectNull(originObject) || TSZStringIsNull(associateKey)) {
        return nil;
    }
    id associateObj = objc_getAssociatedObject(originObject, &associateKey);
    return associateObj;
}

+ (void)associateRemoveFromOrigin:(id)originObject
{
    if (TSZCheckObjectNull(originObject)) {
        return;
    }
    objc_removeAssociatedObjects(originObject);
}

+ (BOOL)cameraAvailable
{
    return [UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera];
}

+ (BOOL)frontCameraAvailable
{
    return [UIImagePickerController isCameraDeviceAvailable:UIImagePickerControllerCameraDeviceFront];
}

+ (BOOL)cameraFlashAvailable
{
    return [UIImagePickerController isFlashAvailableForCameraDevice:UIImagePickerControllerCameraDeviceRear];
}

+ (BOOL)canSendSMS
{
    return [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"sms://"]];
}

+ (BOOL)canMakePhoneCall
{
    return [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"tel://"]];
}


+ (BOOL)isAppCameraAccessAuthorized
{
    /* iOS7以上才有相机隐私控制 */
    if (!TSZSystemIsOver7) {
        return YES;
    }
    
    NSString *mediaType = AVMediaTypeVideo;
    
     AVAuthorizationStatus authStatus = [AVCaptureDevice authorizationStatusForMediaType:mediaType];
    
    if (authStatus !=  AVAuthorizationStatusAuthorized) {
        
        return authStatus == AVAuthorizationStatusNotDetermined;
        
    }else{
        
        return YES;
    }
}

+ (BOOL)isAppPhotoLibraryAccessAuthorized
{
    ALAuthorizationStatus authStatus = [ALAssetsLibrary authorizationStatus];
    
    if (authStatus != ALAuthorizationStatusAuthorized) {
        
        return authStatus == ALAuthorizationStatusNotDetermined;
        
    }else{
        
        return YES;
    }
}

/**
 *  获取屏幕Y轴起始点
 */
+(double)getSelfViewFrameOrangeY
{
    double orangeY = 0.0;
    
    float verson = [[UIDevice currentDevice].systemVersion floatValue];
    if (verson >= (float)7.0 && verson < (float)7.1) {
        // 7.0 ViewY轴源点从屏幕顶部开始
        orangeY = 20 + 46;
    }
    
    return orangeY;
}

/**
 *  系统是否 >=7.0 <7.1
 */
+(BOOL)isSystemVersionIs7
{
    BOOL result = NO;
    
    float verson = [[UIDevice currentDevice].systemVersion floatValue];
    if (verson >= (float)7.0 && verson < (float)7.1) {
        // 7.0
        result = YES;
    }
    
    return result;
}

@end
