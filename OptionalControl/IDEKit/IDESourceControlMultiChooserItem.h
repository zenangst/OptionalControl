/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTOperation, DVTStackBacktrace, IDESourceControlOperationInfo, IDESourceControlRequest, NSError, NSMenu, NSMenuItem;

@interface IDESourceControlMultiChooserItem : NSObject <DVTInvalidation>
{
    IDESourceControlRequest *_currentRequest;
    DVTOperation *_currentOperation;
    IDESourceControlOperationInfo *_info;
    int _requestType;
    NSMenu *_menu;
    NSMenuItem *_selectedItem;
    NSError *_error;
    BOOL _selected;
    BOOL _enabled;
}

+ (void)initialize;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property int requestType; // @synthesize requestType=_requestType;
@property(copy) NSError *error; // @synthesize error=_error;
@property(retain) NSMenuItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(copy) NSMenu *menu; // @synthesize menu=_menu;
@property BOOL selected; // @synthesize selected=_selected;
@property(retain) IDESourceControlOperationInfo *operationInfo; // @synthesize operationInfo=_info;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithOperationInfo:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

