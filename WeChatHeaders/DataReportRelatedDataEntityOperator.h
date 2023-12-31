//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DataReportRelatedDataEntityOperator : NSObject
{
}

+ (id)getRelatedTargetByModel:(id)arg1;
+ (id)getRelatedModelByTarget:(id)arg1;
+ (void)relateTarget:(id)arg1 toModel:(id)arg2;
+ (id)getViewDataEntity:(id)arg1 needCreate:(_Bool)arg2;
+ (id)getPageDataEntity:(id)arg1 needCreate:(_Bool)arg2;
+ (void)removeDynamicParamsBlock:(id)arg1;
+ (void)setDynamicParamsBlock:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)getParams:(id)arg1;
+ (void)resetParams:(id)arg1;
+ (void)removeParams:(id)arg1;
+ (void)removeParam:(id)arg1 key:(id)arg2;
+ (void)setParams:(id)arg1 params:(id)arg2;
+ (void)setParam:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (unsigned long long)getReportPolicy:(id)arg1;
+ (void)setReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeRule:(unsigned long long)arg3 isRtReport:(_Bool)arg4;
+ (void)setViewExposeMinRate:(id)arg1 rate:(double)arg2;
+ (void)setViewExposeMinTime:(id)arg1 timeMills:(unsigned long long)arg2;
+ (id)getViewId:(id)arg1;
+ (void)setViewId:(id)arg1 viewId:(id)arg2;
+ (unsigned long long)getBizGroupId:(id)arg1;
+ (void)setBizGroupId:(id)arg1 bizGroupId:(unsigned long long)arg2;
+ (id)getPageName:(id)arg1;
+ (void)setPageName:(id)arg1 pageName:(id)arg2;
+ (unsigned long long)getPageId:(id)arg1;
+ (void)setPageId:(id)arg1 pageId:(unsigned long long)arg2;

@end

