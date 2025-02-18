/*
 * AlibcWebViewServiceImpl.h 
 *
 * 阿里百川电商
 * 项目名称：阿里巴巴电商 AlibcTradeBiz 
 * 版本号：4.0.0.2
 * 发布时间：2019-09-15
 * 开发团队：阿里巴巴商家服务引擎团队
 * 阿里巴巴电商SDK答疑群号：1488705339  2071154343(阿里旺旺)
 * Copyright (c) 2016-2020 阿里巴巴-淘宝-百川. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import "AlibcWebViewService.h"
#import "AlibcURLBus.h"

#ifndef AlibcWebViewServiceImpl_h
#define AlibcWebViewServiceImpl_h

@interface AlibcWebViewServiceImpl : NSObject <AlibcWebViewService>
+ (instancetype)sharedInstance;

- (void)bindWebviewService:(UIWebView *)webview sourceViewController:(UIViewController *)sourceViewController;

- (void)bindWebviewService:(UIWebView *)webview context:(AlibcURLBusContext *)context;

- (AlibcURLBusContext *)getContextByWebview:(UIWebView *)webview;
@end

#endif
