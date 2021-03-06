/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ReactABI35_0_0/ABI35_0_0RCTShadowView.h>

#import "ABI35_0_0RCTTextAttributes.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const ABI35_0_0RCTBaseTextShadowViewEmbeddedShadowViewAttributeName;

@interface ABI35_0_0RCTBaseTextShadowView : ABI35_0_0RCTShadowView

@property (nonatomic, strong) ABI35_0_0RCTTextAttributes *textAttributes;

- (NSAttributedString *)attributedTextWithBaseTextAttributes:(nullable ABI35_0_0RCTTextAttributes *)baseTextAttributes;

@end

NS_ASSUME_NONNULL_END
