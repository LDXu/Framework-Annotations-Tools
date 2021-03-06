/*
 * UITapGestureRecognizer.h
 * 白开水ln（https://github.com/CustomPBWaters）
 *
 * (c) 2008-2015
 * Created by 【Plain Boiled Water ln】 on Elegant programming.
 * Copyright © Unauthorized shall（https://custompbwaters.github.io）not be reproduced.
 *
 * @PBWLN_LICENSE_HEADER_END@
 */

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIGestureRecognizer.h>

NS_ASSUME_NONNULL_BEGIN

// Recognizes: when numberOfTouchesRequired have tapped numberOfTapsRequired times

// Touch Location Behaviors:
//     locationInView:         location of the tap, from the first tap in the sequence if numberOfTapsRequired > 1. this is the centroid if numberOfTouchesRequired > 1
//     locationOfTouch:inView: location of a particular touch, from the first tap in the sequence if numberOfTapsRequired > 1

NS_CLASS_AVAILABLE_IOS(3_2) @interface UITapGestureRecognizer : UIGestureRecognizer

@property (nonatomic) NSUInteger  numberOfTapsRequired;       // Default is 1. The number of taps required to match
@property (nonatomic) NSUInteger  numberOfTouchesRequired __TVOS_PROHIBITED;    // Default is 1. The number of fingers required to match

@end

NS_ASSUME_NONNULL_END
