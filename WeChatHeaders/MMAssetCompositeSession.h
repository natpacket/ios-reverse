//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAReportPrams, NSString;

@interface MMAssetCompositeSession : NSObject
{
    NSString *_sessionId;
    NSString *_outputFilePath;
    ABAReportPrams *_reportParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABAReportPrams *reportParams; // @synthesize reportParams=_reportParams;
@property(retain, nonatomic) NSString *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)initWithSessionId:(id)arg1;

@end

