//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAReportPrams, NSError, NSString;

@interface WCFinderSyncComposeResModel : NSObject
{
    _Bool _bResult;
    NSError *_error;
    NSString *_outputFile;
    ABAReportPrams *_videoScoreParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABAReportPrams *videoScoreParams; // @synthesize videoScoreParams=_videoScoreParams;
@property(copy, nonatomic) NSString *outputFile; // @synthesize outputFile=_outputFile;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool bResult; // @synthesize bResult=_bResult;

@end

