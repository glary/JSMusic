//
//  JSMusicBar.h
//  JSMusic
//
//  Created by Precious on 15/5/29.
//  Copyright (c) 2015年 JS. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JSSong;
@interface JSMusicBar : UIView
@property (nonatomic, strong) JSSong *song;

+ (JSMusicBar *)sharedMusicBar;
@end
