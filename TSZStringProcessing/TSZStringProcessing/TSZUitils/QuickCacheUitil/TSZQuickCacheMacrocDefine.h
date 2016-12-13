//
//  TSZQuickCacheMacrocDefine.h
//  TSZCommonFoundation
//
//  Created by tangon 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏定义封装了对
 *  NSUserDefault,NSCache,NSFileManager
 *  NSKeyedArchieve,NSDocumentDirectory,NSCacheDirectory的便捷操作
 */

#import "TSZQuickCacheUitil.h"

/* 写宏定义的时候，前面变量参数的名字，多参数的时候不能方法名和后面调用方法的参数名字一样 */

/**
 *  检查一个valueObj,keyObj对象是否有一个是空的
 */
#define TSZCheckKeyValueHasNull(keyObj,valueObj) [TSZQuickCacheUitil checkValue:valueObj key:keyObj]

/**
 *  检查一个对象是否为空
 */
#define TSZCheckObjectNull(object) [TSZQuickCacheUitil isNullObject:object]

/**
 *  NSUserDefault 保存键值对 keyObj,valueObj
 */
#define TSZUDFCache(keyObj,valueObj) [TSZQuickCacheUitil userDefaultCache:valueObj key:keyObj]

/**
 *  NSUserDefault 删除键keyObj对应的值
 */
#define TSZUDFRemove(keyObj) [TSZQuickCacheUitil userDefaultRemove:keyObj]

/**
 *  NSUserDefault 获取键keyObj对应的值
 */
#define TSZUDFGetValue(keyObj) [TSZQuickCacheUitil userDefaultGetValue:keyObj]

/**
 *  NSUserDefault 判断键keyObject对应的值是否为空
 */
#define TSZUDFEmptyValue(keyObj) [TSZQuickCacheUitil userDefaultEmptyValue:keyObj]

/**
 *  NSCache 存储键值对 keyObj,valueObj
 */
#define TSZNSCacheSet(keyObj,valueObj) [TSZQuickCacheUitil systemMemoryCacheSet:valueObj key:keyObj]

/**
 *  NSCache 删除键keyObj对应的值
 */
#define TSZNSCacheRemove(keyObj) [TSZQuickCacheUitil systemMemoryCacheRemove:keyObj]

/**
 *  NSCache 获取键keyObj对应的值
 */
#define TSZNSCacheGetValue(keyObj) [TSZQuickCacheUitil systemMemoryCacheGetValue:keyObj]

/**
 *  NSCache 判断键keyObject对应的值是否为空
 */
#define TSZNSCacheEmptyValue(keyObj) [TSZQuickCacheUitil systemMemoryCacheEmptyValue:keyObj]

/**
 *  获取系统默认文件管理
 */
#define TSZFileManager [TSZQuickCacheUitil fileManager]

/**
 *  指定路径pathObj是否存在文件
 */
#define TSZFileIsExist(pathObj) [TSZQuickCacheUitil fileExist:pathObj]

/**
 *  指定路径pathObj是否存在目录
 */
#define TSZFileDirectoryIsExist(pathObj) [TSZQuickCacheUitil directoryExist:pathObj]

/**
 *  读取某个路径的二进制数据，返回 NSData
 */
#define TSZFileRead(pathObj) [TSZQuickCacheUitil readFromFile:pathObj]

/**
 *  将二进制数据写入文件 dataObj:NSData pathObj:NSString
 */
#define TSZFileWrite(dataObj,pathObj) [TSZQuickCacheUitil writeFileData:dataObj toPath:pathObj]

/**
 *  在指定路径创建目录，返回BOOL结果
 */
#define TSZFileDirectoryCreate(pathObj) [TSZQuickCacheUitil createDirectory:pathObj]

/**
 *  删除指定路径文件
 */
#define TSZFileDeleteFile(path) [TSZQuickCacheUitil deleteFileAtPath:path]

/**
 *  删除指定目录
 */
#define TSZFileDeleteDirectory(path) [TSZQuickCacheUitil deleteDirectoryAtPath:path]

/**
 *  从fromFilePath复制文件到toFilePath,shouldRemove标示是否删除复制源文件
 */
#define TSZFileCopyFileIsRemove(fromFilePath,toFilePath,shouldRemove) [TSZQuickCacheUitil copyFileFromPath:fromFilePath toPath:toFilePath isRemoveOld:shouldRemove]

/**
 *  将某个对象归档到指定路径
 */
#define TSZArchieveObject(object,filePath) [TSZQuickCacheUitil archieveObject:object toFilePath:filePath]

/**
 *  从指定路径读取被归档过的对象
 */
#define TSZUnArchieveObject(fromFilePath) [TSZQuickCacheUitil unarchieveFromPath:fromFilePath]

/**
 *  获取NSDocumentDirectory目录
 */
#define TSZAppDocumentDirectory [TSZQuickCacheUitil documentDirectory]

/**
 *  获取NSCacheDirectory目录
 */
#define TSZAppCacheDirectory [TSZQuickCacheUitil cacheDirectory]

/**
 *  返回文件名为fileName在NSDocumentDirectory中的路径
 */
#define TSZAppDoucmentPath(fileName) [TSZQuickCacheUitil documentDirectoryPath:fileName]

/**
 *  返回文件名为fileName在NSCacheDirectory中的路径
 */
#define TSZAppCachePath(fileName) [TSZQuickCacheUitil cacheDirectoryPath:fileName]

/**
 *  将object对象用fileName名字保存到NSDocumentDirectory目录下
 */
#define TSZAppDocumentSave(object,fileName) [TSZQuickCacheUitil documentDirectorySave:object withFileName:fileName]

/**
 *  将object对象用fileName名字保存到NSCacheDirectory目录下
 */
#define TSZAppCacheSave(object,fileName) [TSZQuickCacheUitil cacheDirectorySave:object withFileName:fileName]

/**
 *  删除NSDocumentDirectory目录下名为fileName的文件
 */
#define TSZAppDocumentDelete(fileName)  [TSZQuickCacheUitil documentDirectoryDelete:fileName]

/**
 *  删除NSCacheDirectory目录下名为fileName的文件
 */
#define TSZAppCacheDelete(fileName) [TSZQuickCacheUitil cacheDirectoryDelete:fileName]

