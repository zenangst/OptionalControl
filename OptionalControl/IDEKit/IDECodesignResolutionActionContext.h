/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDevice, NSError, NSWindow;

@interface IDECodesignResolutionActionContext : NSObject
{
    BOOL _cancellable;
    NSError *_codesignError;
    NSWindow *_window;
    id <IDECapabilitiesContextProviding> _capabilitiesContextProvider;
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    id <IDECodesigningInfoDelegate> _codesigningInfoDelegate;
    DVTDevice *_targetDevice;
    id _recoveryStartedBlock;
    id _recoveryCompletedBlock;
}

@property(getter=isCancellable) BOOL cancellable; // @synthesize cancellable=_cancellable;
@property(copy) id recoveryCompletedBlock; // @synthesize recoveryCompletedBlock=_recoveryCompletedBlock;
@property(copy) id recoveryStartedBlock; // @synthesize recoveryStartedBlock=_recoveryStartedBlock;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) id <IDECodesigningInfoDelegate> codesigningInfoDelegate; // @synthesize codesigningInfoDelegate=_codesigningInfoDelegate;
@property(retain) id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
@property(retain) id <IDECapabilitiesContextProviding> capabilitiesContextProvider; // @synthesize capabilitiesContextProvider=_capabilitiesContextProvider;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSError *codesignError; // @synthesize codesignError=_codesignError;
- (void).cxx_destruct;

@end

