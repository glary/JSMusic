//
//  JSRootController.m
//  JSMusic
//
//  Created by Precious on 15/5/29.
//  Copyright (c) 2015年 JS. All rights reserved.
//

#import "JSRootController.h"

@interface JSRootController ()

@end

@implementation JSRootController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self addNavigationItem];
    self.view.backgroundColor = UIColorFromRGB(21, 41, 55);
}
- (void)addNavigationItem {
    UIBarButtonItem * leftBarItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemSave target:self action:@selector(leftBarButtonItemClick)];
    self.navigationItem.leftBarButtonItem = leftBarItem;
    
    UIBarButtonItem * rightBarItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(rightBarButtonItemClick)];
    self.navigationItem.rightBarButtonItem = rightBarItem;
}
#pragma -mark 菜单栏Item
- (void)leftBarButtonItemClick {
    DebugLog(@"菜单栏被点击了");
}
#pragma -mark 右侧Item
- (void)rightBarButtonItemClick {
    DebugLog(@"菜单栏被点击了");
}

@end
