//
//  ASNavigationController.h
//  AsyncDisplayKit
//
//  Created by Garrett Moon on 4/27/16.
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//

#import <UIKit/UIKit.h>

#import "ASVisibilityProtocols.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * ASNavigationController
 *
 * @discussion ASNavigationController is a drop in replacement for UINavigationController
 * which implements the memory efficiency improving @c ASManagesChildVisibilityDepth protocol.
 *
 * @see ASManagesChildVisibilityDepth
 */
@interface ASNavigationController : UINavigationController <ASManagesChildVisibilityDepth>

@end

NS_ASSUME_NONNULL_END
