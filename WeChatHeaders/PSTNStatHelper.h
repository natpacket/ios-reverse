//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSTNStatHelper : NSObject
{
}

+ (id)GenPSTNEngineLog:(struct CommonReport_t *)arg1 avQualityLog:(struct tagAVQualityReportInfo *)arg2;
+ (id)GenPSTNChannelLog:(struct CommonReport_t *)arg1 newRelayRepo:(struct NewRelayReport *)arg2;
+ (id)GenPSTNClientLog:(struct CommonReport_t *)arg1 clientRepo:(struct ClientReport_t *)arg2 androidReport:(struct PstnAndroidReport_t *)arg3;

@end

