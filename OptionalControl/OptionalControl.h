//
//  OptionalControl.h
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 27/09/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface OptionalControl : NSObject

+ (instancetype)sharedPlugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;

@end