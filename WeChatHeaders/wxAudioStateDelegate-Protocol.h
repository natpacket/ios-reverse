//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol wxAudioStateDelegate <NSObject>
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(void (^)(_Bool))arg2;
@end
