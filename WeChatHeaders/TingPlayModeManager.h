//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TingPlayModeManager : NSObject
{
    struct TingPlayModeManagerCallbackBridge *callback_;
}

+ (id)shareInstance;
- (_Bool)getRandomPlaylist;
- (void)setRandomPlaylistAsync:(int)arg1 random:(_Bool)arg2;
- (struct TingPlayModeManagerBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

