/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSDraggingSource-Protocol.h"

@class DVTComparisonDocumentLocation, DVTFilePath, IDEWorkspace, IDEWorkspaceTabController, NSArray;

@interface IDEPatchDraggingController : NSObject <NSDraggingSource>
{
    DVTFilePath *_droppingDestination;
    NSArray *_diffDescriptors;
    DVTComparisonDocumentLocation *_comparisonLocation;
    IDEWorkspaceTabController *_tabController;
    IDEWorkspace *_workspace;
}

+ (id)patchExtension;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDEWorkspaceTabController *tabController; // @synthesize tabController=_tabController;
@property(readonly) DVTComparisonDocumentLocation *comparisonLocation; // @synthesize comparisonLocation=_comparisonLocation;
@property(readonly) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
- (void).cxx_destruct;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)initWithDiffDescriptors:(id)arg1 comparisonDocumentLocation:(id)arg2 inWorkspace:(id)arg3;

@end

