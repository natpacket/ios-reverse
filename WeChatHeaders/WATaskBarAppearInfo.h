//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WATaskBarAppearInfo : NSObject
{
    NSString *_sessionId;
    unsigned long long _actionType;
    unsigned long long _backgroundStatus;
    unsigned long long _weAppCount;
    unsigned long long _weMyAppCount;
    unsigned long long _brandCount;
    unsigned long long _fileCount;
    unsigned long long _noteCount;
    unsigned long long _mpVideoCount;
    unsigned long long _finderVideoCount;
    unsigned long long _finderLiveCount;
    unsigned long long _musicCount;
    unsigned long long _page;
    unsigned long long _tingCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tingCount; // @synthesize tingCount=_tingCount;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) unsigned long long musicCount; // @synthesize musicCount=_musicCount;
@property(nonatomic) unsigned long long finderLiveCount; // @synthesize finderLiveCount=_finderLiveCount;
@property(nonatomic) unsigned long long finderVideoCount; // @synthesize finderVideoCount=_finderVideoCount;
@property(nonatomic) unsigned long long mpVideoCount; // @synthesize mpVideoCount=_mpVideoCount;
@property(nonatomic) unsigned long long noteCount; // @synthesize noteCount=_noteCount;
@property(nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(nonatomic) unsigned long long brandCount; // @synthesize brandCount=_brandCount;
@property(nonatomic) unsigned long long weMyAppCount; // @synthesize weMyAppCount=_weMyAppCount;
@property(nonatomic) unsigned long long weAppCount; // @synthesize weAppCount=_weAppCount;
@property(nonatomic) unsigned long long backgroundStatus; // @synthesize backgroundStatus=_backgroundStatus;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

