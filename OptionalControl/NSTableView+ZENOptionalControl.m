//
//  IDEOpenQuicklyTableView+ZENOptionalControl.m
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 27/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import "NSTableView+ZENOptionalControl.h"
#import "NSObject+ZENSwizzle.h"

@implementation NSTableView (ZENOptionalControl)

+ (void)load
{
    [self zen_sizzleInstanceMethod:@selector(keyDown:) withNewMethod:@selector(zen_optionalControl_keyDown:)];
}

- (void)zen_optionalControl_keyDown:(NSEvent *)theEvent
{
    BOOL optionKeyPressed = (theEvent.modifierFlags & NSAlternateKeyMask) != 0;
    NSNumber *keyCode = [NSNumber numberWithUnsignedShort:theEvent.keyCode];
    NSArray *upKeys   = @[@13, @35];
    NSArray *downKeys = @[@1, @41];
    NSArray *leftKeys = @[@0,@37];
    NSArray *rightKeys = @[@2,@39];
    
    if (optionKeyPressed && [upKeys containsObject:keyCode]) {
        CGEventRef event = CGEventCreateKeyboardEvent(NULL, 126, true);
        CGEventSetFlags(event, 0);
        CGEventPost(kCGHIDEventTap, event);
        CFRelease(event);
        return;
    } else if (optionKeyPressed && [downKeys containsObject:keyCode]) {
        CGEventRef event = CGEventCreateKeyboardEvent(NULL, 125, true);
        CGEventSetFlags(event, 0);
        CGEventPost(kCGHIDEventTap, event);
        CFRelease(event);
        return;
    } else if (optionKeyPressed && [leftKeys containsObject:keyCode]) {
        CGEventRef event = CGEventCreateKeyboardEvent(NULL, 123, true);
        CGEventSetFlags(event, 0);
        CGEventPost(kCGHIDEventTap, event);
        CFRelease(event);
        return;
    } else if (optionKeyPressed && [rightKeys containsObject:keyCode]) {
        CGEventRef event = CGEventCreateKeyboardEvent(NULL, 124, true);
        CGEventSetFlags(event, 0);
        CGEventPost(kCGHIDEventTap, event);
        CFRelease(event);
        return;
    }
    
    [self zen_optionalControl_keyDown:theEvent];
}

@end
