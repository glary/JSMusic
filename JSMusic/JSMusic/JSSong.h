//
//  JSSong.h
//  JSMusic
//
//  Created by Precious on 15/5/29.
//  Copyright (c) 2015年 JS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JSSong : NSObject
//歌手头像
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *songName;
@property (nonatomic, copy) NSString *singerName;
@property (nonatomic, strong) UIButton *playButton;
@property (nonatomic, strong) UIButton *menuButton;
@end
