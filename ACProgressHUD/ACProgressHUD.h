//
//  ACProgressHUD.h
//  ACProgressHUD
//
//  Created by Achilles on 16/8/1.
//  Copyright © 2016年 Achilles. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ACProgressHUD : NSObject

/**
 *  显示成功信息
 *
 *  @param message 成功提示信息,默认前面有成功图标
 */
+ (void)showScuess:(NSString *)message;

/**
 *  显示错误信息
 *
 *  @param message 错误提示信息,默认前面有X图标
 */
+ (void)showError:(NSString *)message;

/**
 *  显示加载信息
 *
 *  @param message 需要提示用户正在加载的信息
 */
+ (void)showLoading;

/**
 *  显示保存
 *
 *  @param message 需要提示用户正在保存的信息
 */
+ (void)showSaving;

/**
 *  显示正在加载
 *
 *  @param message 用户自定义信息
 */
+ (void)showLoadingWithCustomMessage:(NSString *)message;

/**
 *  显示信息
 *
 *  @param message message 显示普通信息前面没有图标
 */
+ (void)showMessage:(NSString *)message;

/**
 *  显示自定义的信息
 *
 *  @param message 提示用户的文字
 *  @param image   用户自定义的图标
 */
+ (void)showMessage:(NSString *)message withImage:(UIImage *)image;

/**
 *  隐藏提示框
 */
+ (void)hide;

@end
