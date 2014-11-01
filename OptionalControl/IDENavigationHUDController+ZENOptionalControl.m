//
//  IDENavigationHUDController+ZENOptionalControl.m
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 28/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//
#import "IDENavigationHUDController+ZENOptionalControl.h"

@implementation IDENavigationHUDController (ZENOptionalControl)

+ (void)load
{
    [self zen_sizzleInstanceMethod:@selector(keyDown:) withNewMethod:@selector(zen_optionalControl_keyDown:)];
}

- (void)zen_optionalControl_keyDown:(NSEvent *)theEvent
{
    [self zen_optionalControl_keyDown:theEvent];
}

@end
