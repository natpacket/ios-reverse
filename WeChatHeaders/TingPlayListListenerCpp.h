//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingPlayListListener-Protocol.h"

@class NSString;

@interface TingPlayListListenerCpp : NSObject <TingPlayListListener>
{
}

- (void)onPlayListRecommendListSourceDisabled:(id)arg1;
- (void)onPlayListRecommendListSourceAvailable:(id)arg1 recommendListSource:(id)arg2;
- (void)onPlayListLoadMoreItems:(id)arg1 direction:(int)arg2;
- (void)onPlayListReloadItems:(id)arg1;
- (void)onPlayListTapeItemUpdated:(id)arg1;
- (void)onPlayListLoadMore:(id)arg1;
- (void)onPlayListLoad:(id)arg1;
- (void)onPlaylistChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
