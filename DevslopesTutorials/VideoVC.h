//
//  VideoVC.h
//  DevslopesTutorials
//
//  Created by Shin Park on 5/13/17.
//  Copyright © 2017 shinDev. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoVC : UIViewController <UIWebViewDelegate>
@property (nonatomic,strong) Video *video;

@end
