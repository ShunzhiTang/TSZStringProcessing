//
//  TSZQuickCacheUitil.m
//  TSZCommonFoundation
//
//  Created by tangon 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

#import "TSZQuickCacheUitil.h"

#import "TSZQuickCacheMacrocDefine.h"

#import "TSZDispatchMacrocDefine.h"

#import "TSZStringMacrocDefine.h"

@implementation TSZQuickCacheUitil

+ (BOOL)isNullObject:(id)anObject
{
    if (!anObject || [anObject isKindOfClass:[NSNull class]]) {
        return YES;
    }else{
        return NO;
    }
}

+ (BOOL)checkValue:(id)value key:(id)key
{
    if(TSZCheckObjectNull(value)||TSZCheckObjectNull(key)){
        return YES;
    }else{
        return NO;
    }
}

+ (NSUserDefaults *)standDefault
{
    return [NSUserDefaults standardUserDefaults];
}

+ (void)userDefaultCache:(id<NSCoding>)value key:(id)key
{
    if (TSZCheckKeyValueHasNull(key, value)) {
        return;
    }
    [[TSZQuickCacheUitil standDefault]setObject:value forKey:key];
}

+ (void)userDefaultRemove:(id)key
{
    if (TSZCheckObjectNull(key)) {
        return;
    }
    [[TSZQuickCacheUitil standDefault]removeObjectForKey:key];
}

+ (id)userDefaultGetValue:(id)key
{
    if (TSZCheckObjectNull(key)) {
        return nil;
    }
    return [[TSZQuickCacheUitil standDefault]objectForKey:key];
}

+ (BOOL)userDefaultEmptyValue:(id)key
{
    return [TSZQuickCacheUitil userDefaultGetValue:key] == nil;
}

+ (NSCache *)shareCache
{
    static NSCache *_gjcfNSCacheInstance = nil;
    static dispatch_once_t onceToken;
    
    TSZDispatchOnce(onceToken, ^{
        
        if (!_gjcfNSCacheInstance) {
            _gjcfNSCacheInstance = [[NSCache alloc]init];
        }
        
    });
    
    return _gjcfNSCacheInstance;
}

+ (void)systemMemoryCacheSet:(id<NSCoding>)value key:(id)key
{
    if (TSZCheckKeyValueHasNull(value, key)) {
        return;
    }
    [[TSZQuickCacheUitil shareCache]setObject:value forKey:key];
}

+ (void)systemMemoryCacheRemove:(id)key
{
    if (TSZCheckObjectNull(key)) {
        return;
    }
    [[TSZQuickCacheUitil shareCache]removeObjectForKey:key];
}

+ (id)systemMemoryCacheGetValue:(id)key
{
    if (TSZCheckObjectNull(key)) {
        return nil;
    }
    return [[TSZQuickCacheUitil shareCache]objectForKey:key];
}

+ (BOOL)systemMemoryCacheEmptyValue:(id)key
{
    if (TSZCheckObjectNull(key)) {
        return NO;
    }
    return [TSZQuickCacheUitil systemMemoryCacheGetValue:key] == nil;
}

+ (NSFileManager *)fileManager
{
    return [NSFileManager defaultManager];
}

+ (BOOL)fileExist:(NSString*)path
{
    if (TSZStringIsNull(path)) {
        return NO;
    }
    return [[TSZQuickCacheUitil fileManager] fileExistsAtPath:path];
}

+ (BOOL)directoryExist:(NSString*)dirPath
{
    if (TSZStringIsNull(dirPath)) {
        return NO;
    }
    BOOL isDir = YES;
    
    return [[TSZQuickCacheUitil fileManager]fileExistsAtPath:dirPath isDirectory:&isDir];
}

+ (BOOL)createDirectory:(NSString*)dirPath
{
    if (TSZCheckObjectNull(dirPath)) {
        return NO;
    }
    if (TSZFileDirectoryIsExist(dirPath)) {
        return YES;
    }
    return [[TSZQuickCacheUitil fileManager] createDirectoryAtPath:dirPath withIntermediateDirectories:YES attributes:nil error:nil];
}

+ (BOOL)writeFileData:(NSData*)data toPath:(NSString *)path
{
    if (TSZCheckKeyValueHasNull(data, path)) {
        return NO;
    }
    
    return [data writeToFile:path atomically:YES];
}

+ (NSData *)readFromFile:(NSString *)path
{
    if (TSZCheckObjectNull(path)) {
        return nil;
    }
    
    return [NSData dataWithContentsOfFile:path];
}

+ (BOOL)deleteFileAtPath:(NSString *)filePath
{
    if (TSZStringIsNull(filePath)) {
        return NO;
    }
    return [TSZFileManager removeItemAtPath:filePath error:nil];
}

+ (BOOL)deleteDirectoryAtPath:(NSString *)dirPath
{
    if (TSZStringIsNull(dirPath)) {
        return NO;
    }
    return [TSZFileManager removeItemAtPath:dirPath error:nil];
}

+ (BOOL)copyFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath isRemoveOld:(BOOL)isRemove
{
    if (TSZStringIsNull(fromPath) || TSZStringIsNull(toPath) ) {
        return NO;
    }
    if (!TSZFileIsExist(fromPath)) {
        return NO;
    }
    
    BOOL copyResult = [TSZFileManager copyItemAtPath:fromPath toPath:toPath error:nil];
    if (copyResult) {
        
        if (isRemove) {
            return [TSZFileManager removeItemAtPath:fromPath error:nil];
        }
        return YES;
        
    }else{
        return NO;
    }
}

+ (BOOL)archieveObject:(id<NSCoding>)anObject toFilePath:(NSString *)toPath
{
    if (TSZCheckObjectNull(anObject) || TSZStringIsNull(toPath)) {
        return NO;
    }
    NSData *archieveData = [NSKeyedArchiver archivedDataWithRootObject:anObject];
    if (archieveData) {
        
        return TSZFileWrite(archieveData, toPath);
        
    }else{
        return NO;
    }
}

+ (id)unarchieveFromPath:(NSString *)filePath
{
    if (TSZStringIsNull(filePath)) {
        return nil;
    }
    return [NSKeyedUnarchiver unarchiveObjectWithFile:filePath];
}

+ (NSString *)documentDirectory
{
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
}

+ (NSString *)documentDirectoryPath:(NSString *)file
{
    if (TSZStringIsNull(file)) {
        return nil;
    }
    return [[TSZQuickCacheUitil documentDirectory]stringByAppendingPathComponent:file];
}

+ (NSString *)cacheDirectory
{
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
}

+ (NSString *)cacheDirectoryPath:(NSString *)file
{
    if (TSZStringIsNull(file)) {
        return nil;
    }
    return [[TSZQuickCacheUitil cacheDirectory]stringByAppendingPathComponent:file];
}

+ (BOOL)cacheDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file
{
    if (TSZCheckObjectNull(anObject) || TSZStringIsNull(file)) {
        return NO;
    }
    
    return TSZArchieveObject(anObject, [TSZQuickCacheUitil cacheDirectoryPath:file]);
}

+ (BOOL)cacheDirectoryDelete:(NSString *)file
{
    if (TSZStringIsNull(file)) {
        return NO;
    }
    return TSZFileDeleteFile([TSZQuickCacheUitil cacheDirectoryPath:file]);
}


+ (BOOL)documentDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file
{
    if (TSZCheckObjectNull(anObject) || TSZStringIsNull(file)) {
        return NO;
    }
    
    return TSZArchieveObject(anObject, [TSZQuickCacheUitil documentDirectoryPath:file]);
}

+ (BOOL)documentDirectoryDelete:(NSString *)file
{
    if (TSZStringIsNull(file)) {
        return NO;
    }
    return TSZFileDeleteFile([TSZQuickCacheUitil documentDirectoryPath:file]);
}

@end
