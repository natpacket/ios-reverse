//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WCMomentsMenuActionReportForwardInfo, WCMomentsMenuActionReportSnsInfo;

@interface WCMomentsMenuActionReportSession : MMObject
{
    long long _scene;
    WCMomentsMenuActionReportSnsInfo *_snsInfo;
    long long _actionType;
    WCMomentsMenuActionReportForwardInfo *_forwardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsMenuActionReportForwardInfo *forwardInfo; // @synthesize forwardInfo=_forwardInfo;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) WCMomentsMenuActionReportSnsInfo *snsInfo; // @synthesize snsInfo=_snsInfo;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)generateForwardInfoString;
- (id)generateSnsInfoString;
- (id)generateReportString;
- (void)report;

@end

