//
//  TSZQuickUIMacrocDefine.h
//  TSZCommonFoundation
//
//  Created by tang on 14-10-22.
//  Copyright (c) 2016年 mobobox. All rights reserved.
//

/**
 *  UI相关的快速访问工具宏
 */

#import "TSZQuickUIUitil.h"

/**
 *  将0-360的角度转换为圆角度表示
 *
 *  @param degree
 *
 *  @return 真实的角度表示
 */
#define TSZDegreeToRadius(degree) (degree * M_PI / 180)

/**
 *  获取角度对应的NSNumber对象
 */
#define TSZDegreeToRadiusValue(degree) @(TSZDegreeToRadius(degree))

/**
 *  快速得到RGB颜色
 */
#define TSZQuickRGBColor(redValue,greenValue,blueValue) [TSZQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue]

/**
 *  获取带alpha值的RGB颜色
 */
#define TSZQuickRGBColorAlpha(redValue,greenValue,blueValue,alpha) [TSZQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue withAlpha:alpha]

/**
 *  从16进制字符中得到颜色
 */
#define TSZQuickHexColor(hexString) [TSZQuickUIUitil colorFromHexString:hexString]

/**
 *  从一个View获取翻转的文本绘制的图形上下文CGContextRef
 */
#define TSZContextRefTextMatrixFromView(aView) [TSZQuickUIUitil getTextCTMContextRefFromView:aView]

/**
 *  快速获取图片
 */
#define TSZQuickImage(imageName) [TSZQuickUIUitil imageWithName:imageName]

/**
 *  修正图片方向
 *
 */
#define TSZFixOretationImage(aImage) [TSZQuickUIUitil fixOretationImage:aImage]

/**
 *  创建圆角图片
 */
#define TSZRoundCornerImage(aImage,cornerSize,boardSize) [TSZQuickUIUitil createRoundCornerImage:aImage withCornerSize:cornerSize withBoardSize:boardSize]

/**
 *  组合图片
 */
#define TSZQuickCombineImage(backgroundImage,maskImage) [TSZQuickUIUitil combineImage:backgroundImage withMaskImage:maskImage]

/**
 *  返回圆形图片,默认用白色作为遮挡颜色
 */
#define TSZCycleImage(aImage) [TSZQuickUIUitil roundImage:aImage]

/**
 *  截取Rect部分的图片
 */
#define TSZPartImage(aImage,rect) [TSZQuickUIUitil partImage:aImage withRect:rect]

/**
 *  返回纠正方向后得图片
 */
#define TSZCorrectOrientationImage(aImage) [TSZQuickUIUitil correctImageOrientation:aImage]

/**
 *  返回一个纠正了方向并且进行了scale倍数缩放的图片
 */
#define TSZCorrectOrientationImageWithScale(aImage,scale) [TSZQuickUIUitil correctImageOrientation:aImage withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后并且进行了scale倍数缩放的fullResolutionImage图片
 */
#define TSZCorrectOrientationALAssetFullResolutionImageWithScale(aALAsset,scale) [TSZQuickUIUitil  correctFullSolutionImageFromALAsset:aALAsset withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后的fullResolutionImage图片
 */
#define TSZCorrectOrientationALAssetFullResolutionImage(aALAsset) [TSZQuickUIUitil correctFullSolutionImageFromALAsset:aALAsset]

/**
 *  获取一个View的截图
 */
#define TSZScreenShotFromView(aView) [TSZQuickUIUitil viewScreenShot:aView]

/**
 *  获取一个Layer的截图
 */
#define TSZScreenShotFromLayer(aLayer) [TSZQuickUIUitil layerScreenShot:aLayer]

/**
 *  按照aColor颜色创建一张size大小的图片
 *
 */
#define TSZQuickImageByColorWithSize(aColor,size) [TSZQuickUIUitil imageForColor:aColor withSize:size]

/**
 *  创建一个线性渐变图片
 *
 *  @param colors    按顺序渐变颜色数组
 *  @param size      需要创建的图片的大小
 *
 *  最大只支持三种颜色，起始位置颜色，中间颜色，结束颜色
 *  依次位置为 0,0.5,1.0
 *  超过3种颜色也只取前三种颜色为渐变色
 *
 *  @return 返回渐变颜色图片
 */
#define TSZLinearGradientImageByColorsWithSize(colors,size) [TSZQuickUIUitil gradientLinearImageFromColors:colors withImageSize:size]

/**
 *  创建线性渐变图片
 *
 *  @param fromColor 起始发颜色
 *  @param toColor   中间颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define TSZLinearGradientImageFromColorToColor(fromColor,toColor,size) [TSZQuickUIUitil gradientLinearImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param fromColor 中心颜色
 *  @param toColor   外层颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define TSZRadialGradientImageFromColorToColor(fromColor,toColor,size) [TSZQuickUIUitil gradientRadialImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param colors 颜色值数组
 *  @param size 图片大小
 *
 *  @return 渐变图片
 */
#define TSZRadialGradientImageByColorsWithSize(colors,size) [TSZQuickUIUitil gradientRadialImageFromColors:colors withImageSize:size]

/**
 *  创建网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define TSZGridImageByLineGapAndColorWithSize(lineGap,color,size) [TSZQuickUIUitil gridImageByHoriLineGap:lineGap withVerticalLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建水平网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define TSZGridImageHorizByLineGapAndColorWithSize(lineGap,color,size) [TSZQuickUIUitil gridImageHorizonByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建垂直网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define TSZGridImageVerticalByLineGapAndColorWithSize(lineGap,color,size) [TSZQuickUIUitil gridImageVerticalByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  快速从文件夹读取图片
 */
#define TSZQuickImageByFilePath(filePath) [TSZQuickUIUitil imageWithFilePath:filePath]

/**
 *  快速从归档路径读取图片
 */
#define TSZQuickUnArchievedImage(filePath) [TSZQuickUIUitil imageUnArchievedFromFilePath:filePath]

/**
 *  获取拉伸的图片
 *
 *  @param image      原图片
 *  @param leftOffset 左边起始位置
 *  @param topOffset  顶部起始位置
 *
 *  @return 返回拉伸后的图片
 */
#define TSZImageStrecth(image,leftOffset,topOffset) [TSZQuickUIUitil stretchImage:image withTopOffset:topOffset withLeftOffset:leftOffset]

/**
 *  获取重设大小拉伸后的图片
 *
 *  @param image  原图片
 *  @param top    顶部起始位置
 *  @param bottom 底部起始位置
 *  @param left   左边起始位置
 *  @param right  右边起始位置
 *
 *  @return 重设大小拉伸后后的图片
 */
#define TSZImageResize(image,top,bottom,left,right) [TSZQuickUIUitil resizeImage:image withEdgeTop:top withEdgeBottom:bottom withEdgeLeft:left withEdgeRight:right]

/**
 *  以duration持续时间执行一个UIView动画block
 */
#define TSZAnimationWithDuration(duration,block) [TSZQuickUIUitil animationDuration:duration action:block]

/**
 *  延迟second秒，以duration持续时间执行一个UIView动画block
 */
#define TSZAnimationDelayWithDuration(second,duration,block) [TSZQuickUIUitil animationDelay:second animationDuration:duration action:block]

/**
 *  默认隐藏显示视图动画
 */
#define TSZAnimationHiddenShowView(view) [TSZQuickUIUitil defaultHiddenShowView:view]

/**
 *  指定duration时长隐藏显示动画
 */
#define TSZAnimationHiddenShowViewDuration(view,duration) [TSZQuickUIUitil hiddenShowView:view withDuration:duration]

/**
 *  默认显示隐藏视图动画
 */
#define TSZAnimationShowHiddenView(view) [TSZQuickUIUitil defaultShowHiddenView:view]

/**
 *  指定duration时长显示隐藏动画
 */
#define TSZAnimationShowHiddenViewDuration(view,duration) [TSZQuickUIUitil showHiddenView:view withDuration:duration]

/**
 *  默认隐藏视图动画
 */
#define TSZAnimationHiddenView(view) [TSZQuickUIUitil defaultHiddenView:view]

/**
 *  指定duration时长隐藏动画
 */
#define TSZAnimationHiddenViewDuration(view,duration) [TSZQuickUIUitil hiddenView:view withDuration:duration]

/**
 *  默认显示视图动画
 */
#define TSZAnimationShowView(view) [TSZQuickUIUitil defaultShowView:view]

/**
 *  指定duration时长显示视图动画
 */
#define TSZAnimationShowViewDuration(view,duration) [TSZQuickUIUitil showView:view withDuration:duration]

/**
 *  指定duration时间长度，从当前视图alpha到目标alpha
 */
#define TSZAnimationShowAlphaViewDuration(view,alpha,duration) [TSZQuickUIUitil showView:view finalAlpha:alpha withDuration:duration]

/**
 *  移动当前视图到指定rect的动画,不支持便捷写法的CGRect  CGRect{20,20,20,20} 这种写法是不支持的需要使用CGRectMake
 */
#define TSZAnimationMoveViewRect(view,rect,duration) [TSZQuickUIUitil moveView:view newRect:rect withDuration:duration]

/**
 *  x轴增量移动动画
 */
#define TSZAnimationMoveViewX(view,xDetal,duration) [TSZQuickUIUitil moveViewX:view originXDetal:xDetal withDuration:duration]

/**
 *  y轴增量移动动画
 */
#define TSZAnimationMoveViewY(view,yDetal,duration) [TSZQuickUIUitil moveViewY:view originYDetal:yDetal withDuration:duration]

/**
 *  width增量变化动画
 */
#define TSZAnimationMoveViewWidth(view,detal,duration) [TSZQuickUIUitil moveViewWidth:view widthDetal:detal withDuration:duration]

/**
 *  height增量变化动画
 */
#define TSZAnimationMoveViewHeight(view,detal,duration) [TSZQuickUIUitil moveViewHeight:view heightDetal:detal withDuration:duration]

/**
 *  移动到指定x轴点动画
 */
#define TSZAnimationMoveViewToX(view,toX,duration) [TSZQuickUIUitil moveViewToX:view toOriginX:toX withDuration:duration]

/**
 *  移动到指定y轴点动画
 */
#define TSZAnimationMoveViewToY(view,toY,duration) [TSZQuickUIUitil moveViewToY:view toOriginY:toY withDuration:duration]

/**
 *  指定视图width到目标宽度的动画
 */
#define TSZAnimationMoveViewToWidth(view,width,duration) [TSZQuickUIUitil moveViewToWidth:view toWidth:width withDuration:duration]

/**
 *  指定视图height到目标高度的动画
 */
#define TSZAnimationMoveViewToHeight(view,height,duration) [TSZQuickUIUitil moveViewToHeight:view toHeight:height withDuration:duration]

/**
 *  移动视图中心动画 不支持便捷写法的CGPoint  (CGPoint){20,20} 这种写法是不支持的需要使用CGPointMake
 */
#define TSZAnimationMoveViewCenter(view,center,duration) [TSZQuickUIUitil moveViewCenter:view newCenter:center withDuration:duration]

/**
 *  缩放视图大小动画,不支持便捷写法的CGSize  (CGSize){20,20} 这种写法是不支持的,需要使用CGSizeMake
 */
#define TSZAnimationMoveViewSize(view,size,duration) [TSZQuickUIUitil moveViewSize:view newSize:size withDuration:duration]

/**
 *  从左开始翻转视图动画
 */
#define TSZAnimationLeftFlipView(view,duration,block,completion) [TSZQuickUIUitil flipViewFromLeft:view withDuration:duration action:block completionBlock:completion]

/**
 *  从右开始翻转视图动画
 */
#define TSZAnimationRightFlipView(view,duration,block,completion) [TSZQuickUIUitil flipViewFromRight:view withDuration:duration action:block completionBlock:completion]

/**
 *  从顶部开始翻转视图动画
 */
#define TSZAnimationTopFlipView(view,duration,block,completion) [TSZQuickUIUitil flipViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  从底部开始翻转视图动画
 */
#define TSZAnimationBottomFlipView(view,duration,block,completion) [TSZQuickUIUitil flipViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向上翻页动画
 */
#define TSZAnimationPageUpView(view,duration,block,completion) [TSZQuickUIUitil pageUpViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向下翻页动画
 */
#define TSZAnimationPageDownView(view,duration,block,completion) [TSZQuickUIUitil pageDownViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  立体翻转动画
 */
#define TSZAnimationCubeView(view,duration,block,completion) [TSZQuickUIUitil cubeView:view withDuration:duration  action:block completionBlock:completion]

/**
 *  绕X轴倾斜视图degree角度  degree范围:0-360
 */
#define TSZAnimationViewRotateX(view,degree,duration) [TSZQuickUIUitil rotationViewX:view withDegree:degree withDuration:duration]

/**
 *  绕Y轴倾斜视图degree角度  degree范围:0-360
 */
#define TSZAnimationViewRotateY(view,degree,duration) [TSZQuickUIUitil rotationViewY:view withDegree:degree withDuration:duration]

/**
 *  绕Z轴倾斜视图degree角度  degree范围:0-360
 */
#define TSZAnimationViewRotateZ(view,degree,duration) [TSZQuickUIUitil rotationViewZ:view withDegree:degree withDuration:duration]

/**
 *  translationX动画
 */
#define TSZAnimationViewTranslationX(view,originX,duration) [TSZQuickUIUitil translationViewX:view withOriginX:originX withDuration:duration]

/**
 *  translationY动画
 */
#define TSZAnimationViewTranslationY(view,originY,duration) [TSZQuickUIUitil translationViewY:view withOriginY:originY withDuration:duration]

/**
 *  translationZ动画
 */
#define TSZAnimationViewTranslationZ(view,originZ,duration) [TSZQuickUIUitil translationViewZ:view withOriginZ:originZ withDuration:duration]

/**
 *  scaleX动画
 */
#define TSZAnimationViewScaleX(view,size,duration) [TSZQuickUIUitil scaleViewX:view withScaleSize:size withDuration:duration]

/**
 *  scaleY动画
 */
#define TSZAnimationViewScaleY(view,size,duration) [TSZQuickUIUitil scaleViewY:view withScaleSize:size withDuration:duration]

/**
 *  scaleZ动画
 */
#define TSZAnimationViewScaleZ(view,size,duration) [TSZQuickUIUitil scaleViewZ:view withScaleSize:size withDuration:duration]

/**
 *  将视图绕X轴倾斜degree角度，degree范围 -360到360
 */
#define TSZView3DRotateX(view,degree) [TSZQuickUIUitil view3DRotateX:view withDegree:degree]

/**
 *  将视图绕Y轴倾斜degree角度，degree范围 -360到360
 */
#define TSZView3DRotateY(view,degree) [TSZQuickUIUitil view3DRotateY:view withDegree:degree]

/**
 *  将视图绕Z轴倾斜degree角度，degree范围 -360到360
 */
#define TSZView3DRotateZ(view,degree) [TSZQuickUIUitil view3DRotateZ:view withDegree:degree]

/**
 *  X轴变换
 */
#define TSZView3DTranslateX(view,value) [TSZQuickUIUitil view3DTranslateX:view withValue:value]

/**
 *  Y轴变换
 */
#define TSZView3DTranslateY(view,value) [TSZQuickUIUitil view3DTranslateY:view withValue:value]

/**
 *  Z轴变换
 */
#define TSZView3DTranslateZ(view,value) [TSZQuickUIUitil view3DTranslateZ:view withValue:value]

/**
 *  X轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define TSZView3DScaleX(view,value) [TSZQuickUIUitil view3DScaleX:view withValue:value]

/**
 *  Y轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define TSZView3DScaleY(view,value) [TSZQuickUIUitil view3DScaleY:view withValue:value]

/**
 *  Z轴方向缩放,整体比例变换时，也就是m11（sx）== m22（sy）时，若m33（sz）>1，图形整体缩小，若0<1，
 *  图形整体放大，若m33（sz）<0，发生关于原点的对称等比变换
 */
#define TSZView3DScaleZ(view,value) [TSZQuickUIUitil view3DScaleZ:view withValue:value]

/**
 *  重复某个block
 */
#define TSZRepeatAction(repeatBlock) [TSZQuickUIUitil repeatDoAction:repeatBlock]

/**
 *  延迟second秒开始重复某个动作
 */
#define TSZRepeatActionDelay(second,repeatBlock) [TSZQuickUIUitil repeatDoAction:repeatBlock withDelay:second]

/**
 *  重复某个动作duration时长
 */
#define TSZRepeatActionDuration(duration,repeatBlock) [TSZQuickUIUitil repeatDoAction:repeatBlock withRepeatDuration:duration]

/**
 *  延迟某个动作second秒，并且只执行duration时长
 */
#define TSZRepeatActionDelayDuration(second,duration,repeatBlock) [TSZQuickUIUitil repeatDoAction:repeatBlock withDelay:second withRepeatDuration:duration]

/**
 *  根据blockIdentifier停止某个block重复动作
 */
#define TSZStopRepeatAction(blockIdentifier) [TSZQuickUIUitil stopRepeatAction:blockIdentifier]

/**
 *  X轴上以moveXDetal偏移量一个来回,moveXDetal > 0
 */
#define TSZAnimationViewXCycle(view,moveXDetal,duration) [TSZQuickUIUitil animationViewXCycle:view withXMoveDetal:moveXDetal withDuration:duration]

/**
 *  Y轴上以moveYDetal偏移量一个来回,moveYDetal > 0
 */
#define TSZAnimationViewYCycle(view,moveYDetal,duration) [TSZQuickUIUitil animationViewYCycle:view withYMoveDetal:moveYDetal withDuration:duration]

/**
 *  Z轴上以moveZDetal偏移量一个来回,moveZDetal > 0
 */
#define TSZAnimationViewZCycle(view,moveZDetal,duration) [TSZQuickUIUitil animationViewZCycle:view withZMoveDetal:moveZDetal withDuration:duration]

/**
 *  绕X轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define TSZAnimationViewRotateXCycle(view,degree,duration) [TSZQuickUIUitil animationViewRotateXCycle:view withXRotateDetal:degree withDuration:duration]

/**
 *  绕Y轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define TSZAnimationViewRotateYCycle(view,degree,duration) [TSZQuickUIUitil animationViewRotateYCycle:view withYRotateDetal:degree withDuration:duration]

/**
 *  绕Z轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define TSZAnimationViewRotateZCycle(view,degree,duration) [TSZQuickUIUitil animationViewRotateZCycle:view withZRotateDetal:degree withDuration:duration]

/**
 *  fromValue到toValue的position移动CAAnimation
 *  animationKey 为 @"gjcf_animation_position"
 *
 */
#define TSZCAAnimationPosition(aLayer,fromValue,toValue,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer positionCenterWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount  withDuration:duration]

/**
 *  fromValue到toValue的position.x移动CAAnimation
 *  animationKey 为 @"gjcf_animation_position.x"
 */
#define TSZCAAnimationPositionX(aLayer,fromValue,toValue,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer positionXWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  fromValue到toValue的position.y移动CAAnimation
 *  animationKey 为 @"gjcf_animation_position.y"
 */
#define TSZCAAnimationPositionY(aLayer,fromValue,toValue,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer positionYWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion的CAAnimation
 *  animationKey 为 @"gjcf_animation_by_position"
 */
#define TSZCAAnimationPositionByValue(aLayer,value,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer positionCenterByValue:value  withRepeatCount:repeatCount  withDuration:duration]

/**
 *  按照value移动postion.x的CAAnimation
 *  animationKey 为 @"gjcf_animation_by_position.x"
 */
#define TSZCAAnimationPositionXByValue(aLayer,value,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer positionXByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion.y的CAAnimation
 *  animationKey 为 @"gjcf_animation_by_position.y"
 */
#define TSZCAAnimationPositionYByValue(aLayer,value,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer positionYByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照指定路径做动画
 */
#define TSZAnimationPathByValue(aLayer,aPath,value,repeatCount,duration) [TSZQuickUIUitil animationLayer:aLayer path:aPath ByValue:value  withRepeatCount:repeatCount  withDuration:duration]




