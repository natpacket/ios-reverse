//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJCamMusicDesc : NSObject
{
    _Bool _isMusicEnabled;
    int _loopCount;
    NSString *_musicID;
    NSString *_musicKey;
    NSString *_musicName;
    NSString *_singerNames;
    NSString *_musicFilePath;
    CDStruct_1b6d18a9 _startTimeOfMusic;
    CDStruct_1b6d18a9 _startTimeOfCamScene;
}

- (void).cxx_destruct;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) CDStruct_1b6d18a9 startTimeOfCamScene; // @synthesize startTimeOfCamScene=_startTimeOfCamScene;
@property(nonatomic) CDStruct_1b6d18a9 startTimeOfMusic; // @synthesize startTimeOfMusic=_startTimeOfMusic;
@property(retain, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(retain, nonatomic) NSString *singerNames; // @synthesize singerNames=_singerNames;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
@property(retain, nonatomic) NSString *musicKey; // @synthesize musicKey=_musicKey;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(nonatomic) _Bool isMusicEnabled; // @synthesize isMusicEnabled=_isMusicEnabled;
- (id)init;

@end

