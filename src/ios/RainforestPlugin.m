//
//  RainforestPlugin.m
//

#import "RainforestPlugin.h"
#import <Rainforest/Rainforest.h>

@interface RainforestPlugin () {}
@end

@implementation RainforestPlugin

- (void)pluginInitialize {
    NSLog(@"Starting Rainforest plugin");

    [[NSNotificationCenter defaultCenter] addObserver:self
                                          selector:@selector(applicationDidFinishLaunching:)
                                          name:UIApplicationDidFinishLaunchingNotification object:nil];
}

- (void) applicationDidFinishLaunching:(NSNotification *) notification {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [[Rainforest shared] bootstrap];
    });
}

@end
