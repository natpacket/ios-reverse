//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveGift_MultiAnimationItem, MMFinderLiveRewardAppMsgInfo, MMFinderLiveRewardGiftItem, NSString;

@interface MMFinderLiveGiftPlayItem : NSObject
{
    _Bool _sentByMe;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMFinderLiveRewardAppMsgInfo *_rewardAppMsgInfo;
    NSString *_comboId;
    NSString *_animationId;
    FinderLiveGift_MultiAnimationItem *_multiAnimationItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGift_MultiAnimationItem *multiAnimationItem; // @synthesize multiAnimationItem=_multiAnimationItem;
@property(retain, nonatomic) NSString *animationId; // @synthesize animationId=_animationId;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;
@property(nonatomic) _Bool sentByMe; // @synthesize sentByMe=_sentByMe;
@property(retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo; // @synthesize rewardAppMsgInfo=_rewardAppMsgInfo;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
- (void)updateWithResourceUrl:(id)arg1 animationId:(id)arg2;
- (id)initWithGiftItem:(id)arg1 rewardAppMsgInfo:(id)arg2 comboId:(id)arg3 sentByMe:(_Bool)arg4;

@end

