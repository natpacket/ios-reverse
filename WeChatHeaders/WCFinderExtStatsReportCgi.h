//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@interface WCFinderExtStatsReportCgi : WCFinderBaseCgi
{
    unsigned long long _commentScene;
}

@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithExtStatsArray:(id)arg1 actionType:(unsigned int)arg2;
- (void)createRequestWithDataItems:(id)arg1;
- (id)initWithExtStatsReddotInfo:(id)arg1 redDotObjectId:(unsigned long long)arg2;
- (id)initWithExtStatsArray:(id)arg1 actionType:(unsigned int)arg2 commentScene:(unsigned long long)arg3;
- (id)initWithDataItems:(id)arg1 commentScene:(unsigned long long)arg2;

@end
