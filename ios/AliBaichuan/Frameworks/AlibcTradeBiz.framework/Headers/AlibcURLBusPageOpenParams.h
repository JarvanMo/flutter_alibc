/*
 * AlibcURLBusPageOpenParams.h 
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
#import "AlibcURLBusRequestContext.h"

/**
 *  打开页面的方式
 */
typedef NS_ENUM(NSUInteger, AlibcOpenPageType) {
    /** h5展示 */
    AlibcOpenPageByTypeH5,
    /** 跳手淘等拉端逻辑 */
    AlibcOpenPageByNative,
    /** 走App内小程序 */
    AlibcOpenPageByMiniApp
   
};

@interface AlibcURLBusPageOpenParams : NSObject

// URL 页面打开方式
@property(nonatomic,assign)AlibcOpenPageType openPageType;

// request上下文
@property(nonatomic,strong)AlibcURLBusRequestContext *context;

@end

