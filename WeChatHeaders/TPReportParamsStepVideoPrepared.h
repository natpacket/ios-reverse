//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPReportParamsStep.h"

@class NSString;

@interface TPReportParamsStepVideoPrepared : TPReportParamsStep
{
    NSString *_url;
    long long _urlindex;
    long long _fileopenedtime;
    long long _firstpacketreadtime;
}

- (void).cxx_destruct;
@property(nonatomic) long long firstpacketreadtime; // @synthesize firstpacketreadtime=_firstpacketreadtime;
@property(nonatomic) long long fileopenedtime; // @synthesize fileopenedtime=_fileopenedtime;
@property(nonatomic) long long urlindex; // @synthesize urlindex=_urlindex;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)init;

@end

