//
//  OptionalControl.m
//  OptionalControl
//
//  Created by Christoffer Winterkvist on 27/09/14.
//    Copyright (c) 2014 zenangst. All rights reserved.
//

#import "NSObject+ZENSwizzle.h"
#import "OptionalControl.h"

static OptionalControl *sharedPlugin;

@interface OptionalControl()

@property (nonatomic, strong, readwrite) NSBundle *bundle;
@end

@implementation OptionalControl

+ (void)pluginDidLoad:(NSBundle *)plugin
{
    static dispatch_once_t onceToken;
    NSString *currentApplicationName = [[NSBundle mainBundle] infoDictionary][@"CFBundleName"];
    if ([currentApplicationName isEqual:@"Xcode"]) {
        dispatch_once(&onceToken, ^{
            sharedPlugin = [[self alloc] initWithBundle:plugin];
        });
    }
}

+ (instancetype)sharedPlugin
{
    return sharedPlugin;
}

- (id)initWithBundle:(NSBundle *)plugin
{
    self = [super init];
    if (!self) return nil;

    self.bundle = plugin;

    return self;
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
