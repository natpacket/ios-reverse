//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedBubbleView.h"

#import "WCFinderJumpInfoViewProtocol-Protocol.h"

@class FinderLiveNoticeInfo, NSString, UITapGestureRecognizer, WCFinderFeedContentVM, WCFinderJumpInfo, WCFinderLiveNoticeCellViewModel;
@protocol WCFinderJumpInfoViewBaseDelegate;

@interface WCFinderLiveFeedBubbleView : WCFinderFeedBubbleView <WCFinderJumpInfoViewProtocol>
{
    id <WCFinderJumpInfoViewBaseDelegate> _delegate;
    WCFinderJumpInfo *_hotSpotJumpInfo;
    FinderLiveNoticeInfo *_noticeInfo;
    WCFinderLiveNoticeCellViewModel *_liveNoticeVM;
    WCFinderFeedContentVM *_contentVM;
    NSString *_username;
    unsigned long long _operatingType;
    CDUnknownBlockType _onClickNoticeBlock;
    CDUnknownBlockType _onClickNoticeDetailBlock;
    long long _showPosition;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) long long showPosition; // @synthesize showPosition=_showPosition;
@property(copy, nonatomic) CDUnknownBlockType onClickNoticeDetailBlock; // @synthesize onClickNoticeDetailBlock=_onClickNoticeDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickNoticeBlock; // @synthesize onClickNoticeBlock=_onClickNoticeBlock;
@property(nonatomic) unsigned long long operatingType; // @synthesize operatingType=_operatingType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderLiveNoticeCellViewModel *liveNoticeVM; // @synthesize liveNoticeVM=_liveNoticeVM;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) WCFinderJumpInfo *hotSpotJumpInfo; // @synthesize hotSpotJumpInfo=_hotSpotJumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)jumpInfo;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(long long)arg2;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButtonWhenFree;
- (void)feedBubbleViewShowDetail:(id)arg1;
- (void)startExposeAction;
- (void)updateLiveFeedBubbleViewWithUsername:(id)arg1 noticeInfo:(id)arg2;
- (void)onClickActionButton;

@end

