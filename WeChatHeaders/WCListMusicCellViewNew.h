//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCListBaseCellView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class NSString, TingItem, TingSharePlayButton, UIView;

@interface WCListMusicCellViewNew : WCListBaseCellView <MMWebImageViewDelegate>
{
    UIView *m_tailView;
    TingItem *_tingItem;
    TingSharePlayButton *_playButton;
}

+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSharePlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
- (void)onClickEvent;
- (void)initView;
- (void)initTailView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
