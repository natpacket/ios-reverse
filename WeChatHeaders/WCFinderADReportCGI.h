//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@interface WCFinderADReportCGI : WCFinderBaseCgi
{
    unsigned long long _actionType;
}

@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithTid:(id)arg1 scene:(unsigned long long)arg2 actionType:(unsigned long long)arg3 reportData:(id)arg4;

@end

