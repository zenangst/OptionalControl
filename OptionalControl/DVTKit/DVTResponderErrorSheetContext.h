/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError;

@interface DVTResponderErrorSheetContext : NSObject
{
    id _outerCompletionDelegate;
    SEL _outerCompletionSelector;
    void *_outerContext;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property void *outerContext; // @synthesize outerContext=_outerContext;
@property SEL outerCompletionSelector; // @synthesize outerCompletionSelector=_outerCompletionSelector;
@property(retain) id outerCompletionDelegate; // @synthesize outerCompletionDelegate=_outerCompletionDelegate;
- (void).cxx_destruct;

@end

