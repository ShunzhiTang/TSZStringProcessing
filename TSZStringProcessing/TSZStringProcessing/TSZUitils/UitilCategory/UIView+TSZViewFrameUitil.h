//
//  UIView+TSZViewAdaptor.h
//  TSZCommonFoundation
//
//  Created by tang on 14-10-24.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  为了避免组件库进入其他项目之后使用的同名属性被其他Category方法覆盖修改
 *
 *  我们增加tsz_前缀确保始终进入正确的设置流程
 */

@interface UIView (TSZViewFrameUitil)

/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic) CGFloat tsz_left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat tsz_top;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat tsz_right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat tsz_bottom;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic) CGFloat tsz_width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic) CGFloat tsz_height;

/**
 * Shortcut for frame.origin
 */
@property (nonatomic) CGPoint tsz_origin;

/**
 * Shortcut for frame.size
 */
@property (nonatomic) CGSize tsz_size;

/**
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic) CGFloat tsz_centerX;

/**
 *  右上角
 *  self.origin.x+self.size.width,self.origin.y
 */
@property (nonatomic) CGPoint tsz_topRight;

/**
 *  左下角
 *
 *  self.origin.x,self.origin.y+self.size.height
 */
@property (nonatomic) CGPoint tsz_bottomLeft;

/**
 *  右下角
 *
 *  self.origin.x+self.size.width,self.origin.y+self.size.height
 */
@property (nonatomic) CGPoint tsz_bottomRight;

/**
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic) CGFloat tsz_centerY;

/**
 *  Shortcut for right to superview
 *  Sets frame.origin.x = superview.width - rightToSuper -frame.size.width
 */
@property (nonatomic) CGFloat tsz_rightToSuper;

/**
 *  shortcut for bottom to superview
 *  set frame.origin.y = superview.height - bottomToSuper - frame.size.height
 */
@property (nonatomic) CGFloat tsz_bottomToSuper;


@end
