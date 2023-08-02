//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditImageScrollView.h"

#import "WCTimeLineEditImageOperationDelegate-Protocol.h"

@class NSString;
@protocol WCTimeLineEditImageOperationDelegate;

@interface WCTimeLineEditImageScrollView : WCEditImageScrollView <WCTimeLineEditImageOperationDelegate>
{
}

- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)setMusicLyricWidgetAlpha:(double)arg1;
- (void)setMusicLyricIsOn:(_Bool)arg1;
- (void)updateMusicLyricsCropTime:(CDStruct_e83c9415)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (_Bool)recoverLyricsWidget;
- (id)getEditImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <WCTimeLineEditImageOperationDelegate> m_delegate;
@property(readonly) Class superclass;

@end
