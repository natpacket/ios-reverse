//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLivePromotePubbleContentView.h"

#import "MagicLiveCardServiceExt-Protocol.h"

@class GameDynamicBubbleContent, MMUIView, MagicSclFrameSetView, NSString;

@interface MMFinderLiveGameCardPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MagicLiveCardServiceExt>
{
    MMUIView *_dynamicCardContainer;
    GameDynamicBubbleContent *_gamePlayTogetherDynamicContent;
    NSString *_dynamicCardRootId;
    MagicSclFrameSetView *_frameSetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(retain, nonatomic) NSString *dynamicCardRootId; // @synthesize dynamicCardRootId=_dynamicCardRootId;
@property(retain, nonatomic) GameDynamicBubbleContent *gamePlayTogetherDynamicContent; // @synthesize gamePlayTogetherDynamicContent=_gamePlayTogetherDynamicContent;
@property(retain, nonatomic) MMUIView *dynamicCardContainer; // @synthesize dynamicCardContainer=_dynamicCardContainer;
- (void)onClosePlayTogetherActionSheet:(id)arg1;
- (void)layoutDynamicCard;
- (void)layoutDynamicCardContainer;
- (_Bool)disableTapGesture;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)currentPromoteItem;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)onDismissed;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)setupDynamicCardEnv;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

