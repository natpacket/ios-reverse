//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OVCAudioTrack, OVCImageTrack, OVCVideoTrack;

@interface OVCMediaFile : NSObject
{
    NSString *_localIdentifier;
    NSString *_filePath;
    OVCAudioTrack *_audioTrack;
    OVCVideoTrack *_videoTrack;
    OVCImageTrack *_imageTrack;
    SharedPtr_9e2e1e0b _backingMediaFile;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_9e2e1e0b backingMediaFile; // @synthesize backingMediaFile=_backingMediaFile;
@property(readonly, nonatomic) OVCImageTrack *imageTrack; // @synthesize imageTrack=_imageTrack;
@property(readonly, nonatomic) OVCVideoTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
@property(readonly, nonatomic) OVCAudioTrack *audioTrack; // @synthesize audioTrack=_audioTrack;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic) NSString *creationTime;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long containerType;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) _Bool isImage;
- (id)initWithFilePath:(id)arg1 localIdentifier:(id)arg2;
- (id)initWithFilePath:(id)arg1;
- (id)initWithBackingMediaFile:(const void *)arg1 filePath:(id)arg2 localIdentifier:(id)arg3;

@end

