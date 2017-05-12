//
//  HTTPService.m
//  DevslopesTutorials
//
//  Created by Shin Park on 5/12/17.
//  Copyright © 2017 shinDev. All rights reserved.
//

#import "HTTPService.h"

@implementation HTTPService

+ (id) instance {
    static HTTPService *sharedInstance = nil;
    
    @synchronized (self) {
        if (sharedInstance == nil)
            sharedInstance = [[self alloc]init];
    }
    
    return sharedInstance;
}

@end
