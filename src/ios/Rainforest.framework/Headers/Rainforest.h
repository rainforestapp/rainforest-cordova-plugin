//
//  Rainforest.h
//  Rainforest
//
//  Created by Dal Rupnik on 17/11/15.
//  Copyright © 2015 Rainforest. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;

@interface Rainforest : NSObject

+ (instancetype)shared;

- (void)bootstrap;

//- (void)sendScreenshot:(UIImage *)image;

@end
