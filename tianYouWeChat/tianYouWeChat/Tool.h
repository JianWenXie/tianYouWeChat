//
//  Tool.h
//  tianYouWeChat
//
//  Created by fox on 17/4/15.
//  Copyright © 2017年 fox. All rights reserved.
//

#ifndef Tool_h
#define Tool_h
/**
 *
 *重写NSLog,Debug模式下打印日志和当前行数
 */
#if DEBUG
#define WJLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content:%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define WJLog(FORMAT, ...) nil
#endif

/**
 *
 *Show Alert, brackets is the parameters.       宏定义一个弹窗方法,括号里面是方法的参数 @return Show Alert
 */

#define kshowAlert(title)   UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title message:nil delegate:self cancelButtonTitle:(@"OK")     otherButtonTitles:@""];[alert show];

/** print 打印rect,size,point */
#ifdef DEBUG
#define kLogPoint(point)    NSLog(@"%s = { x:%.4f, y:%.4f }", #point, point.x, point.y)
#define kLogSize(size)      NSLog(@"%s = { w:%.4f, h:%.4f }", #size, size.width, size.height)
#define kLogRect(rect)      NSLog(@"%s = { x:%.4f, y:%.4f, w:%.4f, h:%.4f }", #rect, rect.origin.x, rect.origin.y, rect.size.width, rect.size.height)
#endif

/*********************打印坐标系列************************/
/**
 * 当前屏幕宽
 */
#define kWidth   [UIScreen mainScreen].bounds.size.width
/**
 *  当前屏幕高
 */
#define kheight [UIScreen mainScreen].bounds.size.height
/* 当前设备宽 */
#define kApp_width [[UIScreen mainScreen]applicationFrame].size.width
/* 当前屏幕高 */
#define kApp_height [[UIScreen mainScreen]applicationFrame].size.height



#define kScreenWidth    [UIScreen mainScreen].bounds.size.width
#define kScreenHeight   [UIScreen mainScreen].bounds.size.height
#define kScreenBounds   [UIScreen mainScreen].bounds

#define kSW    [UIScreen mainScreen].bounds.size.width / 375.0
#define kSH   [UIScreen mainScreen].bounds.size.height /667.0

#define kheight 

#endif /* Tool_h */
