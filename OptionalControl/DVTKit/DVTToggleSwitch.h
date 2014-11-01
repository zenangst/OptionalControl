/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class CAGradientLayer, CALayer;

@interface DVTToggleSwitch : NSView
{
    BOOL _enabled;
    BOOL _on;
    BOOL _canDrag;
    BOOL _dragging;
    SEL _action;
    id _target;
    id _onDidChangeBlock;
    CALayer *_rootLayer;
    CALayer *_knobBorderLayer;
    CAGradientLayer *_knobGradientLayer;
    CALayer *_maskLayer;
    CALayer *_trackLayer;
    struct CGPoint _lastDragLocation;
}

@property(nonatomic) struct CGPoint lastDragLocation; // @synthesize lastDragLocation=_lastDragLocation;
@property(nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property(nonatomic) BOOL canDrag; // @synthesize canDrag=_canDrag;
@property(readonly, nonatomic) CALayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(readonly, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(readonly, nonatomic) CAGradientLayer *knobGradientLayer; // @synthesize knobGradientLayer=_knobGradientLayer;
@property(readonly, nonatomic) CALayer *knobBorderLayer; // @synthesize knobBorderLayer=_knobBorderLayer;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(copy, nonatomic) id onDidChangeBlock; // @synthesize onDidChangeBlock=_onDidChangeBlock;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2 sendAction:(BOOL)arg3;
- (void)press;
- (struct CGRect)frameForRect:(struct CGRect)arg1;
- (void)configureAccessibility;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_sRGBColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)_onTextDropShadowColor;
- (id)_offTrackFillColor;
- (id)_onTrackFillColor;
- (id)_offTrackStrokeColor;
- (id)_onTrackStrokeColor;
- (struct CGRect)_knobContentFrameForKnobBorderFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

