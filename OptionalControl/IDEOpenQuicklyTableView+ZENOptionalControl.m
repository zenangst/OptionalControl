//
//  IDEOpenQuicklyTableView+ZENOptionalControl.m
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 27/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import "IDEOpenQuicklyTableView+ZENOptionalControl.h"
#import "NSObject+ZENSwizzle.h"

@implementation IDEOpenQuicklyTableView (ZENOptionalControl)

+ (void)load
{
    [self zen_sizzleInstanceMethod:@selector(keyDown:) withNewMethod:@selector(zen_optionalControl_keyDown:)];
}

- (void)zen_optionalControl_keyDown:(NSEvent *)theEvent
{
    BOOL letsNavigate = NO;
    NSUInteger targetRow = 0;
    BOOL optionKeyPressed = (theEvent.modifierFlags & NSAlternateKeyMask) != 0;
    
    NSNumber *keyCode = [NSNumber numberWithUnsignedShort:theEvent.keyCode];
    NSArray *upKeys   = @[@13, @35];
    NSArray *downKeys = @[@1, @41];
    
    if (optionKeyPressed && [upKeys containsObject:keyCode]) {
        targetRow = (self.selectedRow == 0) ? 0 : self.selectedRow - 1;
        letsNavigate = YES;
    } else if (optionKeyPressed && [downKeys containsObject:keyCode]) {
        targetRow = (self.selectedRow == self.numberOfRows - 1) ?
        self.selectedRow : self.selectedRow + 1;
        letsNavigate = YES;
    }
    
    if (letsNavigate) {
        NSIndexSet *rowIndexes = [NSIndexSet indexSetWithIndex:targetRow];
        [self selectRowIndexes:rowIndexes byExtendingSelection:NO];
        [self scrollRowToVisible:targetRow];
    } else {
        [self zen_optionalControl_keyDown:theEvent];
    }
}

@end
