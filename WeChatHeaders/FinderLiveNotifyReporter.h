//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FinderLiveNotifyReporter : NSObject
{
}

+ (id)getReportExtInfoFromMsg:(id)arg1;
+ (void)reportReplaceMsgTipsID:(id)arg1 unReadAndLiveEndCount:(unsigned int)arg2 deleteTipsID:(id)arg3;
+ (void)reportMainFrameClickWithMsg:(id)arg1 rowIndex:(unsigned long long)arg2;
+ (void)reportMainFrameExposeWithMsg:(id)arg1 rowIndex:(unsigned long long)arg2;
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4;

@end

