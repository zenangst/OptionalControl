/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTPlistNode.h>

@class NSString;

@interface DVTPlistStringNode : DVTPlistNode
{
    NSString *_value;
}

- (void).cxx_destruct;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (void)setValueFromPlist:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

