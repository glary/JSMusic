//
//  JSNavigationController.m
//  JSMusic
//
//  Created by Precious on 15/5/29.
//  Copyright (c) 2015年 JS. All rights reserved.
//

#import "JSNavigationController.h"

@interface JSNavigationController ()

@end

@implementation JSNavigationController
- (UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [[UINavigationBar appearance]setBarTintColor:UIColorFromRGB(17, 32, 44)];
    [[UINavigationBar appearance]setTintColor:[UIColor whiteColor]];
    
    
}

@end
