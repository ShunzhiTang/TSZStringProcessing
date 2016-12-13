//
//  TSZStringMacrocDefine.h
//  TSZCommonFoundation
//
//  Created by tangon 16-01-12.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

/**
 *  文件描述
 * 
 *  这个工具宏封装了大部分字符串常用的便捷方法
 */

#import "TSZStringUitil.h"

/**
 *  字符串是否为空
 */
#define TSZStringIsNull(string) [TSZStringUitil stringIsNull:string]

/**
 *  字符串是否全为空格
 */
#define TSZStringIsAllWhiteSpace(string) [TSZStringUitil stringIsAllWhiteSpace:string]

/**
 *  字符串转NSInteger
 */
#define TSZStringToInt(string) [TSZStringUitil stringToInt:string]

/**
 *  字符串转CGFloat
 */
#define TSZStringToFloat(string) [TSZStringUitil stringToFloat:string]

/**
 *  字符串转double
 */
#define TSZStringToDouble(string) [TSZStringUitil stringToDouble:string]

/**
 *  字符串转Bool
 */
#define TSZStringToBool(string) [TSZStringUitil stringToBool:string]

/**
 *  int转字符串
 */
#define TSZStringFromInt(int) [TSZStringUitil intToString:int]

/**
 *  float转字符串
 */
#define TSZStringFromFloat(float) [TSZStringUitil floatToString:float]

/**
 *  double转字符串
 */
#define TSZStringFromDouble(double) [TSZStringUitil doubleToString:double]

/**
 *  bool转字符串
 */
#define TSZStringFromBool(bool) [TSZStringUitil boolToString:bool]

/**
 *  字符串是否合法邮箱
 */
#define TSZStringIsEmail(string) [TSZStringUitil stringIsValidateEmailAddress:string]

/**
 *  字符串是否合法手机号码
 */
#define TSZStringIsMobilePhone(string) [TSZStringUitil stringISValidateMobilePhone:string]

/**
 *  字符串是否合法url
 */
#define TSZStringIsUrl(string) [TSZStringUitil stringIsValidateUrl:string]

/**
 *  字符串是否合法座机
 */
#define TSZStringIsPhone(string) [TSZStringUitil stringIsValidatePhone:string]

/**
 *  字符串是否合法邮政编码
 */
#define TSZStringIsMailCode(string) [TSZStringUitil stringIsValidateMailCode:string]

/**
 *  字符串是否合法身份证号
 */
#define TSZStringIsPersonCardNumber(string) [TSZStringUitil stringISValidatePersonCardNumber:string]

/**
 *  字符串是否合法车牌号
 */
#define TSZStringIsCarNumber(string) [TSZStringUitil stringISValidateCarNumber:string]

/**
 *  字符串是否只有中文字符
 */
#define TSZStringChineseOnly(string) [TSZStringUitil stringIsAllChineseWord:string]

/**
 *  字符串是否只有英文字符
 */
#define TSZStringCharNumOnly(string) [TSZStringUitil stringJustHasNumberAndCharacter:string]

/**
 *  字符串是否只包含字符，中文，数字
 */
#define TSZStringCharNumChineseOnly(string) [TSZStringUitil stringChineseNumberCharacterOnly:string]

/**
 *  字符串是否纯数字
 */
#define TSZStringNumOnly(string) [TSZStringUitil stringJustHasNumber:string]

/**
 *  从文件中读取出字符串
 */
#define TSZStringFromFile(path) [TSZStringUitil stringFromFile:path]

/**
 *  从归档路径读取出字符串
 */
#define TSZStringUnArchieve(path) [TSZStringUitil unarchieveFromPath:path]

/**
 *  获取一个当前时间戳字符串
 */
#define TSZStringCurrentTimeStamp [TSZStringUitil currentTimeStampString]

/**
 *  将字符串转为MD5字符串
 */
#define TSZStringToMD5(string) [TSZStringUitil MD5:string]

/**
 *  返回去除字符串首的空格的字符串
 */
#define TSZStringClearLeadingWhiteSpace(string) [TSZStringUitil stringByTrimingLeadingWhiteSpace:string]

/**
 *  返回去除字符串结尾的空格的字符串
 */
#define TSZStringClearTailingWhiteSpace(string) [TSZStringUitil stringByTrimingTailingWhiteSpace:string]

/**
 *  返回去除字符串中所有的空格的字符串
 */
#define TSZStringClearAllWhiteSpace(string) [TSZStringUitil stringByTrimingWhiteSpace:string]

/**
 *  Url编码对象,通常是字符串,返回编码后的字符串
 */
#define TSZStringEncodeString(string) [TSZStringUitil urlEncode:string]

/**
 *  Url编码一个字典,键值对用@链接,返回编码后的字符串
 */
#define TSZStringEncodeDict(aDict) [TSZStringUitil encodeStringFromDict:aDict]

/**
 *  返回字符串范围
 */
#define TSZStringRange(string) [TSZStringUitil stringRange:string]



