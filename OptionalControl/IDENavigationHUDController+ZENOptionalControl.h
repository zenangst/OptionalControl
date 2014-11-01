//
//  IDENavigationHUDController+ZENOptionalControl.h
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 28/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSObject+ZENSwizzle.h"

@interface IDENavigationHUDController : NSObject
- (void)keyDown:(NSEvent *)event;
@end

@interface IDENavigationHUDController (ZENOptionalControl)

@end
