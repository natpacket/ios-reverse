//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCAdPullCompareInfo : NSObject
{
    _Bool _timelinePullResponseFlag;
    _Bool _adPullResponseFlag;
    unsigned long long _requestTime;
    WCDataItem *_timelinePullDataItem;
    WCDataItem *_adPullDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *adPullDataItem; // @synthesize adPullDataItem=_adPullDataItem;
@property(nonatomic) _Bool adPullResponseFlag; // @synthesize adPullResponseFlag=_adPullResponseFlag;
@property(retain, nonatomic) WCDataItem *timelinePullDataItem; // @synthesize timelinePullDataItem=_timelinePullDataItem;
@property(nonatomic) _Bool timelinePullResponseFlag; // @synthesize timelinePullResponseFlag=_timelinePullResponseFlag;
@property(nonatomic) unsigned long long requestTime; // @synthesize requestTime=_requestTime;

@end
