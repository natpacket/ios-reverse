//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoEncodeTask.h"

@class SWTranscoding;

@interface MMVideoSWEncodeTask : VideoEncodeTask
{
    SWTranscoding *_softExportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SWTranscoding *softExportSession; // @synthesize softExportSession=_softExportSession;
- (void)stopExport;
- (void)cleanExportSession;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
