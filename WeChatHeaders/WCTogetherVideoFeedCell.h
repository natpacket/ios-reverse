//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTogetherBaseFeedCell.h"

#import "WCSNSNodeVideoViewDelegate-Protocol.h"

@class NSString, WCSNSNodeVideoView;

@interface WCTogetherVideoFeedCell : WCTogetherBaseFeedCell <WCSNSNodeVideoViewDelegate>
{
    WCSNSNodeVideoView *_videoView;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSNSNodeVideoView *videoView; // @synthesize videoView=_videoView;
- (void)onWillFullPlay:(_Bool *)arg1 sightView:(id)arg2;
- (void)onClickWCSight:(id)arg1;
- (void)stopPlaying;
- (void)startPlaying;
- (void)resetPlayingWithViewItem:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutItemContentView;
- (void)loadItemContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
