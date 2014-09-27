//
//  NSObject+ZENSwizzle.m
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 27/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import <objc/runtime.h>
#import "NSObject+ZENSwizzle.h"

@implementation NSObject (ZENSwizzle)

+ (void)zen_sizzleInstanceMethod:(SEL)originalSelector withNewMethod:(SEL)newSelector
{
    Method originalMethod = class_getInstanceMethod(self, originalSelector);
    Method newMethod = class_getInstanceMethod(self, newSelector);
    
    IMP originalImplementation = class_getMethodImplementation(self, originalSelector);
    IMP newImplementation = class_getMethodImplementation(self, newSelector);
    
    class_addMethod(self, newSelector, newImplementation, method_getTypeEncoding(newMethod));
    
    if (class_addMethod(self, originalSelector, newImplementation, method_getTypeEncoding(newMethod))) {
        class_replaceMethod(self, newSelector, originalImplementation, method_getTypeEncoding(originalMethod));
    } else {
        method_exchangeImplementations(originalMethod, newMethod);
    }
    
}

@end
