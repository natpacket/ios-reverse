//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveBattleInfo, NSString;

@interface MMFinderLiveConnectMicJoinLiveBattleInfoWrap : NSObject
{
    unsigned int _receiveBattleInfoTime;
    FinderLiveBattleInfo *_battleInfoFromJoinLive;
    NSString *_micSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *micSessionId; // @synthesize micSessionId=_micSessionId;
@property(nonatomic) unsigned int receiveBattleInfoTime; // @synthesize receiveBattleInfoTime=_receiveBattleInfoTime;
@property(retain, nonatomic) FinderLiveBattleInfo *battleInfoFromJoinLive; // @synthesize battleInfoFromJoinLive=_battleInfoFromJoinLive;

@end

