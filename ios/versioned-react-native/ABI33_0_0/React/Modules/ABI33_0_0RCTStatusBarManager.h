/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ReactABI33_0_0/ABI33_0_0RCTConvert.h>
#import <ReactABI33_0_0/ABI33_0_0RCTEventEmitter.h>

@interface ABI33_0_0RCTConvert (UIStatusBar)

#if !TARGET_OS_TV
+ (UIStatusBarStyle)UIStatusBarStyle:(id)json;
+ (UIStatusBarAnimation)UIStatusBarAnimation:(id)json;
#endif

@end

@interface ABI33_0_0RCTStatusBarManager : ABI33_0_0RCTEventEmitter

@end
