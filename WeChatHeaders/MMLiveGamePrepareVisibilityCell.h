//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveGamePrepareOptionCell.h"

@class NSArray;

@interface MMLiveGamePrepareVisibilityCell : MMLiveGamePrepareOptionCell
{
    int _liveMode;
    long long _lastSelectMode;
    NSArray *_visibleRoomIds;
    NSArray *_visibleUserNames;
}

- (void).cxx_destruct;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) NSArray *visibleUserNames; // @synthesize visibleUserNames=_visibleUserNames;
@property(retain, nonatomic) NSArray *visibleRoomIds; // @synthesize visibleRoomIds=_visibleRoomIds;
@property(nonatomic) long long lastSelectMode; // @synthesize lastSelectMode=_lastSelectMode;
- (void)updateWithVisibleRoomIds:(id)arg1 visibleUserNames:(id)arg2 firstVisibleUserName:(id)arg3 selectMode:(long long)arg4 liveMode:(int)arg5;

@end

