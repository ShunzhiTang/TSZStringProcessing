//
//  UIView+TSZViewAdaptor.m
//  TSZCommonFoundation
//
//  Created by tang on 14-10-24.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

#import "UIView+TSZViewFrameUitil.h"

@implementation UIView (TSZViewFrameUitil)

/////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_left {
    return self.frame.origin.x;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_left:(CGFloat)tsz_left {
    CGRect frame = self.frame;
    frame.origin.x = tsz_left;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_top {
    return self.frame.origin.y;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_top:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_right {
    return self.frame.origin.x + self.frame.size.width;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_right:(CGFloat)right {
    CGRect frame = self.frame;
    frame.origin.x = right - frame.size.width;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_bottom {
    return self.frame.origin.y + self.frame.size.height;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_bottom:(CGFloat)bottom {
    CGRect frame = self.frame;
    frame.origin.y = bottom - frame.size.height;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)centerX {
    return self.center.x;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setCenterX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)centerY {
    return self.center.y;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setCenterY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_width {
    return self.frame.size.width;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_width:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_height {
    return self.frame.size.height;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_height:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)tsz_origin {
    return self.frame.origin;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_origin:(CGPoint)origin {
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGSize)tsz_size {
    return self.frame.size;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_centerX {
    return self.center.x;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_centerX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGFloat)tsz_centerY {
    return self.center.y;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_centerY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_size:(CGSize)size {
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)tsz_topRight
{
    return CGPointMake(self.frame.origin.x+self.frame.size.width,self.frame.origin.y);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_topRight:(CGPoint)tsz_topRight
{
    CGRect frame = self.frame;
    
    CGFloat xdetal = tsz_topRight.x - frame.origin.x - frame.size.width;
    frame.origin.x = frame.origin.x + xdetal;
    
    frame.origin.y = tsz_topRight.y;
    
    self.frame = frame;
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)tsz_bottomLeft
{
    return CGPointMake(self.frame.origin.x,self.frame.origin.y+self.frame.size.height);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_bottomLeft:(CGPoint)tsz_bottomLeft
{
    CGRect frame = self.frame;
    
    CGFloat ydetal = tsz_bottomLeft.y - frame.origin.y - frame.size.height;
    frame.origin.y = frame.origin.y + ydetal;
    
    frame.origin.x = tsz_bottomLeft.x;
    
    self.frame = frame;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (CGPoint)tsz_bottomRight
{
    return CGPointMake(self.frame.origin.x+self.frame.size.width,self.frame.origin.y+self.frame.size.height);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setTsz_bottomRight:(CGPoint)tsz_bottomRight
{
    CGRect frame = self.frame;
    
    CGFloat xdetal = tsz_bottomRight.x - frame.origin.x - frame.size.width;
    frame.origin.x = frame.origin.x + xdetal;
    
    CGFloat ydetal = tsz_bottomRight.y - frame.origin.y - frame.size.height;
    frame.origin.y = frame.origin.y + ydetal;
    
    self.frame = frame;
}

- (CGFloat)tsz_rightToSuper
{
    return self.superview.bounds.size.width - self.frame.size.width - self.frame.origin.x;
}

- (void)setTsz_rightToSuper:(CGFloat)rightToSuper
{
    CGRect frame = self.frame;
    
    frame.origin.x =  self.superview.bounds.size.width - self.frame.size.width  - rightToSuper,
    self.frame = frame;
}

- (CGFloat)tsz_bottomToSuper
{
    return self.superview.bounds.size.height - self.frame.size.height - self.frame.origin.y;
}

- (void)setTsz_bottomToSuper:(CGFloat)bottomToSuper
{
    CGRect frame = self.frame;
    
    frame.origin.y =  self.superview.bounds.size.height - self.frame.size.height  - bottomToSuper,
    self.frame = frame;
}


@end
