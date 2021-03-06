//
//  XFCTConfig.h
//  XFCoverTransitionExample
//
//  Created by Yizzuide on 15/7/26.
//  Copyright © 2015年 yizzuide. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, XFCoverTransitionStyle) {
    // 2D Style
    XFCoverTransitionStyleTop2Bottom,
    XFCoverTransitionStyleBottom2Top,
    XFCoverTransitionStyleLeft2Right,
    XFCoverTransitionStyleRight2Left,
    
    // 3D Style(不支持手势移除）
    XFCoverTransitionStyleFlipY,
    XFCoverTransitionStyleFlipZ
};

@interface XFCTConfig : NSObject
@property (nonatomic, assign) CGRect renderRect;
@property (nonatomic, assign) CGFloat animationDuration;
@property (nonatomic, assign) XFCoverTransitionStyle transitionStyle;
/**
 *  是否用于手势移除modal控制器
 */
@property (nonatomic, assign,getter=isOnlyForModalVCGestureDissmiss) BOOL onlyForModalVCGestureDissmiss;

+ (instancetype)configWithRenderRect:(CGRect)renderRect animationDuration:(CGFloat)animDuration transitionStyle:(XFCoverTransitionStyle)style;
@end
