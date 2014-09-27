#ifndef OpenQuicklyCtrlNP_DVTTableView_h
#define OpenQuicklyCtrlNP_DVTTableView_h

#import <Cocoa/Cocoa.h>

@protocol DVTProgressIndicatorProvidingView <NSObject>
- (NSProgressIndicator *)progressIndicatorForItem:(id)arg1
                                createIfNecessary:(BOOL)arg2
                           progressIndicatorStyle:(unsigned long long)arg3;

@optional
- (void)clearProgressIndicators;
@end

@interface DVTTableView : NSTableView <DVTProgressIndicatorProvidingView>
{
    int _emptyContentStringStyle;
    NSString *_emptyContentString;
    NSTextField *_emptyContentTextField;
    unsigned long long _dvt_groupRowStyle;
    NSIndexSet *_draggedRows;
    NSEvent *_event;
    id _progressIndicatorsByItem;
    struct {
        unsigned int allowsSizingShorterThanClipView:1;
        unsigned int reserved:7;
    } _dvtTVFlags;
    BOOL _showAlternatingRowBackgroundColorsWithContents;
    unsigned long long _gridLineStyleBeforeEmptyContentStringShown;
    BOOL _skipGridLinesOnLastRow;
}

@property BOOL skipGridLinesOnLastRow; // @synthesize skipGridLinesOnLastRow=_skipGridLinesOnLastRow;
@property int emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
@property(retain) NSEvent *event; // @synthesize event=_event;
@property(copy) NSIndexSet *draggedRows; // @synthesize draggedRows=_draggedRows;
@property unsigned long long dvt_groupRowStyle; // @synthesize dvt_groupRowStyle=_dvt_groupRowStyle;
//- (void).cxx_destruct;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)_drawBackgroundForGroupRow:(long long)arg1 clipRect:(struct CGRect)arg2 isButtedUpRow:(BOOL)arg3;
- (id)progressIndicatorForItem:(id)arg1 createIfNecessary:(BOOL)arg2 progressIndicatorStyle:(unsigned long long)arg3;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
@property(readonly) NSIndexSet *contextMenuSelectedRowIndexes;
- (id)clickedRowIndexes;
- (void)viewWillDraw;
- (void)_showEmptyContentString;
- (void)_hideEmptyContentString;
- (struct CGSize)_adjustFrameSizeToFitSuperview:(struct CGSize)arg1;
@property BOOL allowsSizingShorterThanClipView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dvt_commonInit;

@end

#endif
