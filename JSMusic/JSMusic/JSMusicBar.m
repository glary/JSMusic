//
//  JSMusicBar.m
//  JSMusic
//
//  Created by Precious on 15/5/29.
//  Copyright (c) 2015年 JS. All rights reserved.
//

#import "JSMusicBar.h"
#import "JSSong.h"
@interface JSMusicBar ()

@end

@implementation JSMusicBar
#pragma -mark 单例对象
+ (JSMusicBar *)sharedMusicBar
{
    static dispatch_once_t onceQueue;
    static JSMusicBar *musicBar = nil;
    
    dispatch_once(&onceQueue, ^{
        musicBar = [[self alloc] init];
    });
    return musicBar;
}
- (instancetype)init {
 
    if (self = [super init]) {
        
    }
    return self;
}

- (void)layoutSubviews {



}

@end
