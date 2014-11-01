/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEStructureEditingDraggingSource-Protocol.h"

@interface IDEContainerItemPasteboardManager : NSObject <IDEStructureEditingDraggingSource>
{
}

+ (id)sharedPasteboardManager;
- (id)fileURLsForDraggingInfo:(id)arg1;
- (void)containerItems:(id *)arg1 orFileURLs:(id *)arg2 forDraggingInfo:(id)arg3;
- (BOOL)structureEditingWriteItems:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)writeItems:(id)arg1 toPasteboard:(id)arg2;

@end

