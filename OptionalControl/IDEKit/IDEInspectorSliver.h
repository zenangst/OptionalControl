/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorLayoutGroup.h>

@class NSTextField, NSValue;

@interface IDEInspectorSliver : IDEInspectorLayoutGroup
{
    NSTextField *titleView;
    IDEInspectorLayoutGroup *rightSubgroup;
    id titleOriginBlock;
    NSValue *fixedTitleOrigin;
}

+ (id)sliverForXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)sliverWithProperties:(id)arg1 title:(id)arg2 fullWidth:(BOOL)arg3;
+ (id)labelWithTitle:(id)arg1;
- (void).cxx_destruct;
- (void)pushFrameOriginsToViews;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (void)uninstallFromInspectorContentView;
- (void)installIntoInspectorContentView:(id)arg1;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)primitiveInvalidate;
- (id)initWithTitle:(id)arg1 rightSubgroup:(id)arg2 rightSubgroupInset:(CDStruct_d2b197d1)arg3 fixedTitleOrigin:(id)arg4;
- (id)initWithTitle:(id)arg1 titleOrigin:(struct CGPoint)arg2 rightSubgroup:(id)arg3 rightSubgroupInset:(CDStruct_d2b197d1)arg4;

@end

