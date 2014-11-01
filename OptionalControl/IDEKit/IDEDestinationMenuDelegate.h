/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMenuDelegate-Protocol.h"

@class DVTDelayedInvocation, IDENavigableItem, IDENavigableItemCoordinator, IDERunContextManager;

@interface IDEDestinationMenuDelegate : NSObject <NSMenuDelegate>
{
    IDERunContextManager *_runContextManager;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_schemeNavigable;
    DVTDelayedInvocation *_delayedInvocation;
}

+ (void)_openMoreSimulators:(id)arg1;
+ (void)addDownloadMoreSimulatorsIfNecessaryToMenu:(id)arg1 withRunContextManager:(id)arg2;
+ (void)setSelectedNavigable:(id)arg1 withRunContextManager:(id)arg2;
+ (void)didUpdateRunDestinationMenu:(id)arg1 withRunContextManager:(id)arg2;
+ (id)_currentRunContextManager;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_destinationMenuItemsWithRunContextManager:(id)arg1;
- (id)_menuItemsForRunDestinationNavigable:(id)arg1;
- (void)_setSelectedNavigable:(id)arg1;
- (void)dealloc;
- (id)init;

@end

