//
//  NSObject+ZENSwizzle.h
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 27/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ZENSwizzle)

+ (void)zen_sizzleInstanceMethod:(SEL)originalSelector withNewMethod:(SEL)newSelector;

@end
