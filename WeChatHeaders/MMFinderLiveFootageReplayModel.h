//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveFootageReplayModel : NSObject
{
    _Bool _rotationEnabled;
    unsigned int _startOffset;
    unsigned int _endOffset;
    NSString *_replayUri;
    unsigned long long _replayLiveId;
    NSString *_replayFinderUsername;
    unsigned long long _replayObjectId;
    NSString *_replayObjectNonceId;
    NSString *_reportSongId;
    NSString *_reportSongName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportSongName; // @synthesize reportSongName=_reportSongName;
@property(retain, nonatomic) NSString *reportSongId; // @synthesize reportSongId=_reportSongId;
@property(retain, nonatomic) NSString *replayObjectNonceId; // @synthesize replayObjectNonceId=_replayObjectNonceId;
@property(nonatomic) unsigned long long replayObjectId; // @synthesize replayObjectId=_replayObjectId;
@property(retain, nonatomic) NSString *replayFinderUsername; // @synthesize replayFinderUsername=_replayFinderUsername;
@property(nonatomic) unsigned long long replayLiveId; // @synthesize replayLiveId=_replayLiveId;
@property(nonatomic) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) NSString *replayUri; // @synthesize replayUri=_replayUri;

@end

