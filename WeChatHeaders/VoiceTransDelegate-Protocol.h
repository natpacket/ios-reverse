//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, VoiceTransRes;

@protocol VoiceTransDelegate <NSObject>
- (void)onVoiceTransBegin:(NSString *)arg1;
- (void)onVoiceTransFail:(NSString *)arg1;
- (void)onVoiceTransEnd:(NSString *)arg1 FromCache:(_Bool)arg2;
- (void)onVoiceTransVoiceID:(NSString *)arg1 transResult:(VoiceTransRes *)arg2;
@end

