//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCMessageViewModelProtocol-Protocol.h"

@class GCMessageViewModel, NSString;

@protocol GCMultiMessageViewModelProtocol <GCMessageViewModelProtocol>
- (void)selectChannelId:(long long)arg1;
- (GCMessageViewModel *)viewModelOfChannelId:(long long)arg1;
- (void)showBtmTipWithText:(NSString *)arg1 handleBlock:(void (^)(id))arg2;
@end

