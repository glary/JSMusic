//
//  JSCommon.h
//  JSMusic
//
//  Created by Precious on 15/5/29.
//  Copyright (c) 2015年 JS. All rights reserved.
//



#if DEBUG
#define DebugLog( s, ... ) \
fprintf(stderr, "%s\n", [[NSString stringWithFormat:@"<%@%@:(%d)> %@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], \
[NSString stringWithUTF8String:__PRETTY_FUNCTION__], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__]] UTF8String]);
#else //DEBUG
#define DebugLog( s, ... )
#endif //DEBUG

//获取版本号
#define JSBundleVersion   ((NSString *)[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"])
//获取组织名字
#define JSFileName(originalName)  ([GinTongBundleVersion stringByAppendingString:originalName])

#if DEBUG
#define JSAssert assert
#else /* DEBUG */
#define JSAssert(a)     {if (!(a)) NSLog(@"ASSERT on "__FILE__" line=%d", __LINE__);}
#endif /* DEBUG */

//判断iOS7、8
#define IOS7 [[[UIDevice currentDevice] systemVersion] floatValue]>=7.0
#define IOS8 [[[UIDevice currentDevice] systemVersion] floatValue]>=8.0

//隐藏返回按钮
#define GTW_IO7_HIDE_BACKBUTTON(VC_PTR) \
if (IOS7) { \
VC_PTR.navigationItem.backBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"" style:UIBarButtonItemStyleDone target:nil action:nil]; \
} else { \
}

#define GTW_IO7_BACKBUTTON  GTW_IO7_HIDE_BACKBUTTON(self)

//主屏幕宽度、高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define WIDTH(view) view.frame.size.width
#define HEIGHT(view) view.frame.size.height
#define X(view) view.frame.origin.x
#define Y(view) view.frame.origin.y
#define LEFT(view) view.frame.origin.x
#define TOP(view) view.frame.origin.y
#define BOTTOM(view) (view.frame.origin.y + view.frame.size.height)
#define RIGHT(view) (view.frame.origin.x + view.frame.size.width)




// example usage: UIColorFromHex(0x9daa76)
#define UIColorFromHexWithAlpha(hexValue,a) [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 green:((float)((hexValue & 0xFF00) >> 8))/255.0 blue:((float)(hexValue & 0xFF))/255.0 alpha:a]
#define UIColorFromHex(hexValue)            UIColorFromHexWithAlpha(hexValue,1.0)
#define UIColorFromRGBA(r,g,b,a)            [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define UIColorFromRGB(r,g,b)               UIColorFromRGBA(r,g,b,1.0)