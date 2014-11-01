/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTViewController.h>

@class DVTLibraryAsset, DVTLibraryDetailController, NSResponder;

@interface DVTLibraryDetailEditorController : DVTViewController
{
    id _didEditHandlerBlock;
    DVTLibraryDetailController *_currentDetailController;
    NSResponder *_initialResponder;
    DVTLibraryAsset *_editedAsset;
}

@property(retain, nonatomic) DVTLibraryAsset *editedAsset; // @synthesize editedAsset=_editedAsset;
@property(retain) NSResponder *initialResponder; // @synthesize initialResponder=_initialResponder;
@property(retain) DVTLibraryDetailController *currentDetailController; // @synthesize currentDetailController=_currentDetailController;
@property(readonly) id didEditHandlerBlock; // @synthesize didEditHandlerBlock=_didEditHandlerBlock;
- (void).cxx_destruct;
- (void)didChangeCurrentDetailController;
- (void)willChangeCurrentDetailController;
- (void)primitiveInvalidate;
- (id)initWithDidEditHandlerBlock:(id)arg1;

@end

