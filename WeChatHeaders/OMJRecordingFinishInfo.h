//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJRecordingFinishInfo : NSObject
{
    NSString *_outputFilePath;
    NSString *_originalImageSeqDirPath;
    CDStruct_1b6d18a9 _recordingDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *originalImageSeqDirPath; // @synthesize originalImageSeqDirPath=_originalImageSeqDirPath;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(readonly, nonatomic) NSString *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
- (id)initWithOutputFilePath:(id)arg1 recordingDuration:(CDStruct_1b6d18a9)arg2 originalImageSeqDirPath:(id)arg3;

@end

