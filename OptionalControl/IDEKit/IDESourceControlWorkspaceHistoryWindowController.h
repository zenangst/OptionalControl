/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTReplacementViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class DVTBindingToken, DVTBorderedView, DVTObservingToken, DVTReplacementView, DVTSplitView, DVTStackBacktrace, IDESourceControlWorkingTree, IDESourceControlWorkspaceConfigNavigator, IDEWorkspace, NSArray, NSButton, NSSearchField, NSString, NSTabView, NSTextField, NSTimer, NSView;

@interface IDESourceControlWorkspaceHistoryWindowController : NSWindowController <DVTInvalidation, DVTReplacementViewDelegate, NSWindowDelegate>
{
    IDEWorkspace *_workspace;
    NSTextField *_titleField;
    DVTReplacementView *_logReplacementView;
    NSView *_sourceListView;
    IDESourceControlWorkspaceConfigNavigator *_navigator;
    NSTabView *_tabView;
    DVTBorderedView *_detailBorderedView;
    NSButton *_doneButton;
    NSSearchField *_searchField;
    DVTSplitView *_splitView;
    BOOL _hidesSourceList;
    DVTBindingToken *_logSourceTreeItemsBindingToken;
    id _didScanToken;
    NSTimer *_searchTimer;
    DVTObservingToken *_outlineViewSelectionToken;
    int _searchType;
    BOOL _isScanningForWorkingCopies;
    NSArray *_workingTrees;
    NSArray *_selectedWorkingTrees;
    IDESourceControlWorkingTree *_selectedWorkingTree;
    NSString *_startingSearchRevision;
    NSString *_endingSearchRevision;
}

+ (void)initialize;
@property(copy) NSString *endingSearchRevision; // @synthesize endingSearchRevision=_endingSearchRevision;
@property(copy) NSString *startingSearchRevision; // @synthesize startingSearchRevision=_startingSearchRevision;
@property(retain) IDESourceControlWorkingTree *selectedWorkingTree; // @synthesize selectedWorkingTree=_selectedWorkingTree;
@property(retain) NSArray *selectedWorkingTrees; // @synthesize selectedWorkingTrees=_selectedWorkingTrees;
@property(retain) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;
@property BOOL isScanningForWorkingCopies; // @synthesize isScanningForWorkingCopies=_isScanningForWorkingCopies;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateSearchForRevision;
- (void)updateSearchMenuState;
@property int searchType;
- (void)updateSearchPlaceholderString;
- (void)selectSearchType:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)_scheduleSearchWithString:(id)arg1;
- (void)_updateToolbarSearchResultsWithSearchString:(id)arg1;
- (id)logViewController;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)done:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (void)_waitForWorkspaceScan;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)_loadWorkingTrees;
- (void)loadWindow;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

