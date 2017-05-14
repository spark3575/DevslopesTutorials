//
//  HTTPService.h
//  DevslopesTutorials
//
//  Created by Shin Park on 5/12/17.
//  Copyright © 2017 shinDev. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSArray * __nullable dataArray, NSString * __nullable errMessage);

@interface HTTPService : NSObject

+ (nullable id) instance;
- (void) getTutorials:(nullable onComplete)completionHandler;

@end
