//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WCTopicUtil : MMObject
{
}

+ (id)topicContentWithoutTag:(id)arg1;
+ (_Bool)isContentMayContainTopic:(id)arg1;
+ (id)topicQueryInfoFromText:(id)arg1;
+ (id)doPushSearchResultromScene:(unsigned long long)arg1 query:(id)arg2 tagCtrlInfo:(id)arg3;
+ (id)pushTimeLineTopicSearchResultFromScene:(unsigned long long)arg1 query:(id)arg2 dataItem:(id)arg3 commentItem:(id)arg4;
+ (id)pushChatTopicSearchResultFromScene:(unsigned long long)arg1 query:(id)arg2;
+ (void)showTopicSearchControllerInHalfScreen:(id)arg1 inViewController:(id)arg2;
+ (id)topicSearchViewControllerWithDelegate:(id)arg1 context:(id)arg2;
+ (id)topicStringArrWithNsContent:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)topicRangeArrWithNsContent:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)topicSearchRegex;
+ (id)searchTagInfoFromWCDataItem:(id)arg1 commentItem:(id)arg2;

@end

