//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface MMFinderLiveConcertTicketViewControllerReportingContext : NSObject
{
    WCFinderDataItem *_dataItem;
    NSString *_commentScene;
    NSString *_activityId;
    unsigned long long _enterScene;
    unsigned long long _enterTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)reportWithActionType:(unsigned long long)arg1 commentScene:(id)arg2 elementId:(id)arg3 eidUdfKv:(id)arg4;
- (void)reportShareToMomentsSucceededWithResourceId:(id)arg1;
- (void)reportShareToChatSucceeded:(id)arg1 isRecentForward:(_Bool)arg2 resourceId:(id)arg3;
- (void)reportSaveImageButtonInvocationWithResourceId:(id)arg1;
- (void)reportNextStyleButtonInvocationWithResourceId:(id)arg1;
- (void)reportShareButtonInvocationWithResourceId:(id)arg1;
- (void)reportSaveImageButtonExposureWithResourceId:(id)arg1;
- (void)reportNextStyleButtonExposureWithResourceId:(id)arg1;
- (void)reportShareButtonExposureWithResourceId:(id)arg1;
- (void)reportLeaving;
- (void)reportEntering;
- (id)initWithActivityId:(id)arg1 commentScene:(id)arg2 enterScene:(unsigned long long)arg3 finderDataItem:(id)arg4;

@end
