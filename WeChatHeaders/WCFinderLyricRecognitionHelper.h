//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLyricRecognitionHelper : NSObject
{
    NSString *_videoPath;
}

+ (id)helperWithVideoPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void)uploadFileThenRecognit:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onExportFinish:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)run:(CDUnknownBlockType)arg1;
- (id)initWithVideoPath:(id)arg1;

@end

