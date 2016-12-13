//
//  TSZDateUitilMacrocDefine.h
//  TSZCommonFoundation
//
//  Created by tang on 14-10-22.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

/**
 *  日期相关工具宏
 */

#import "TSZDateUitil.h"

/**
 *  获取当前日历
 */
#define TSZDateCurrentCalendar [TSZDateUitil sharedCalendar]

/**
 *  获取单例格式化器
 */
#define TSZDateShareFormatter [TSZDateUitil sharedDateFormatter]

/**
 *  相对现在日期得间隔天数
 */
#define TSZDateDaysAgo(aDate) [TSZDateUitil daysAgoFromNow:aDate]

/**
 *  不以午夜为基准计算天数之前
 */
#define TSZDateDaysAgoAgainstMidNight(aDate) [TSZDateUitil daysAgoAgainstMidnight:aDate]

/**
 *  获取一个时间与当前时间间隔详情字符串
 */
#define TSZDateTimeAgoString(aDate) [TSZDateUitil detailTimeAgoString:aDate]

/**
 *  获取一个时间戳与当前时间的间隔详情字符串
 */
#define TSZDateTimeAgoStringByTimeInterval(timeInterval) [TSZDateUitil detailTimeAgoStringByInterval:timeInterval]

/**
 *  天数间隔文本字符串
 */
#define TSZDateStringDaysAgo(aDate) [TSZDateUitil stringDaysAgo:aDate]

/**
 *  这个日期是星期几
 */
#define TSZDateGetWeekDay(aDate) [TSZDateUitil weekDay:aDate]

/**
 *  返回这个日期是星期几字符串
 */
#define  TSZDateGetWeekDayString(aDate) [TSZDateUitil weekDayString:aDate]

/**
 *  返回这个日期在全年中是第多少周字符串
 */
#define  TSZDateGetWeekNumString(aDate) [TSZDateUitil weekNumberString:aDate]

/**
 *  在全年中是第多少周
 */
#define TSZDateGetWeekNum(aDate) [TSZDateUitil weekNumber:aDate]

/**
 *  获取日期中得年份
 */
#define TSZDateGetYear(aDate) [TSZDateUitil year:aDate]

/**
 *  获取日期中得月份
 */
#define TSZDateGetMonth(aDate) [TSZDateUitil month:aDate]

/**
 *  获取日期中的日
 */
#define TSZDateGetDay(aDate) [TSZDateUitil day:aDate]

/**
 *  获取日期中得小时
 */
#define TSZDateGetHour(aDate) [TSZDateUitil hour:aDate]

/**
 *  获取日期中的分钟
 */
#define TSZDateGetMinute(aDate) [TSZDateUitil minute:aDate]

/**
 *  日期转字符串
 */
#define TSZDateToString(aDate) [TSZDateUitil stringFromDate:aDate]

/**
 *  字符串转日期
 */
#define TSZDateFromString(aString) [TSZDateUitil dateFromString:aString]

/**
 *  字符串转日期详细时间
 */
#define TSZDateTimeFromString(aString) [TSZDateUitil dateTimeFromString:aString]

/**
 *  将时间戳转成日期
 */
#define TSZDateFromTimeInterval(timeInterval) [TSZDateUitil dateFromTimeInterval:timeInterval]

/**
 *  按照某个格式将日期转成字符串
 */
#define TSZDateToStringByFormat(aDate,format) [TSZDateUitil stringFromDate:aDate withFormat:format]

/**
 *  按照某个格式将字符串转成日期
 */
#define TSZDateFromStringByFormat(aString,format) [TSZDateUitil dateFromString:aString withFormat:format]

/**
 *  这个日期所在周的起始日期
 */
#define TSZDateBeginningOfWeek(aDate) [TSZDateUitil beginningOfWeek:aDate]

/**
 *  这个日期的起始时间
 */
#define TSZDateBeginningOfDay(aDate) [TSZDateUitil beginningOfDay:aDate]

/**
 *  这个日期所在周的结束日期
 */
#define TSZDateEndOfWeek(aDate) [TSZDateUitil endOfWeek:aDate]

/**
 *  普通日期格式字符串
 */
#define TSZDateFormatString [TSZDateUitil dateFormatString]

/**
 *  普通时间格式字符串
 */
#define TSZDateTimeFormatString [TSZDateUitil timeFormatString]

/**
 *  时间戳格式字符串
 */
#define TSZDateTimeStampFormatString [TSZDateUitil timestampFormatString]

/**
 *  数据库存储格式字符串
 */
#define TSZDateDataBaseFormatString [TSZDateUitil dbFormatString]

/**
 *  生日转年龄
 */
#define TSZDateBirthDayToAge(date) [TSZDateUitil birthdayToAge:date]

/**
 *  生日转年龄
 */
#define TSZDateBirthDayToAgeByTimeInterval(timeInterval) [TSZDateUitil birthdayToAgeByTimeInterval:timeInterval]

/**
 *  日期转星座
 */
#define TSZDateToConstellation(date) [TSZDateUitil dateToConstellation:date]

/**
 *  时间戳转星座
 */
#define TSZDateToConstellationByTimeInterval(timeInterval) [TSZDateUitil dateToConstellationByTimeInterval:timeInterval]



