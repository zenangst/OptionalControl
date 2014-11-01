/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTOutlineViewDelegate-Protocol.h"
#import "IDEFilterControlBarTarget-Protocol.h"
#import "IDEKeyBindingFieldCellDelegate-Protocol.h"

@class DVTBorderedView, DVTImageAndTextCell, DVTObservingToken, DVTOutlineView, DVTPreferenceSetManager, DVTReplacementView, IDEFilterControlBar, NSArray, NSButton, NSMenu, NSString, NSTextField, NSTreeController;

@interface IDEKeyBindingsPrefsPaneController : IDEViewController <DVTOutlineViewDelegate, IDEKeyBindingFieldCellDelegate, IDEFilterControlBarTarget>
{
    NSArray *_keyBindingItems;
    NSString *_searchString;
    int _displayScope;
    int _searchScope;
    NSString *_statusText;
    NSArray *_conflictStatusItemCells;
    NSArray *_conflictWithHotKeyStatusItemCells;
    DVTObservingToken *_currentPreferenceSetObservingToken;
    DVTObservingToken *_contentNeedsSavingObservingToken;
    unsigned long long _lastLockedModifierMask;
    unsigned long long _lastUnlockedModifierMask;
    id _windowDidBecomeMainNotificationObserver;
    id _activeTabControllerNotificationObserver;
    NSButton *_displayAllScopeButton;
    NSButton *_displayMenuScopeButton;
    NSButton *_displayTextScopeButton;
    NSButton *_displayModifiedScopeButton;
    NSButton *_displayConflictsScopeButton;
    IDEFilterControlBar *_filterControlBar;
    NSMenu *_searchFieldMenu;
    DVTBorderedView *_containerBorderedView;
    DVTBorderedView *_scopeBarBorderedView;
    DVTBorderedView *_keyBindingsBorderedView;
    DVTReplacementView *_preferenceSetReplacementView;
    DVTOutlineView *_keyBindingsOutlineView;
    NSTreeController *_keyBindingsController;
    DVTImageAndTextCell *_titleCell;
    NSTextField *_statusTextField;
}

+ (id)keyPathsForValuesAffectingSearchWords;
@property(copy) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) int searchScope; // @synthesize searchScope=_searchScope;
@property(nonatomic) int displayScope; // @synthesize displayScope=_displayScope;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *keyBindingItems; // @synthesize keyBindingItems=_keyBindingItems;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)_subtitleForKeyBindingItem:(id)arg1;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)keyBindingFieldCellWillReturnAttributedString:(id)arg1;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_findResultAttributes;
- (void)keyBindingFieldCellWillRemoveKeyboardShortcut:(id)arg1;
- (void)keyBindingCellFieldDidEndEditing:(id)arg1;
- (void)_userUpdateAlternateKeyBindingsForKeyBinding:(id)arg1;
- (void)_updateAlternateKeyBindingsForKeyBinding:(id)arg1;
- (id)keyBindingFieldCell:(id)arg1 validatedKeyboardShortcut:(id)arg2;
- (id)keyBindingFieldCell:(id)arg1 alternateKeyBindingsForKeyBinding:(id)arg2;
- (BOOL)keyBindingFieldCellAllowsMultipleKeyboardShortcut:(id)arg1;
- (BOOL)keyBindingFieldCell:(id)arg1 keyboardShortcutIsPrefix:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_conflictStatusButtonCellAction:(id)arg1;
- (void)_searchScopeMenuItemAction:(id)arg1;
- (void)_displayScopeButtonAction:(id)arg1;
- (void)_showConflictedKeyBindingsAndUpdateScopeButtons;
- (void)_showConflictedKeyBindings;
- (void)_updateScopeButtons;
- (void)_showConflictedKeyBindingsStatusForKeyBinding:(id)arg1;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
@property(readonly) NSArray *searchWords;
- (void)updateKeyBindingsItems;
- (BOOL)_keyBindingOutlineViewNeedsGroupItem;
- (id)_keyBindingItemForItem:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
@property(readonly) DVTPreferenceSetManager *preferenceSetManager;

@end

