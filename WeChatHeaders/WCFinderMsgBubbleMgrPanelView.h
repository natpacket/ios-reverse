//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderPostingCommentFailBubbleViewDelegate-Protocol.h"
#import "WCFinderTimelinePrivateMsgBubbleViewDelegate-Protocol.h"
#import "WCFinderTimelineUnreadNewMsgBubbleViewProtocol-Protocol.h"

@class NSMutableArray, NSString, WCFinderMsgBubbleShowStateInfo;
@protocol WCFinderMsgBubbleMgrPanelViewDelegate;

@interface WCFinderMsgBubbleMgrPanelView : UIView <WCFinderTimelineUnreadNewMsgBubbleViewProtocol, WCFinderTimelinePrivateMsgBubbleViewDelegate, WCFinderPostingCommentFailBubbleViewDelegate>
{
    id <WCFinderMsgBubbleMgrPanelViewDelegate> _delegate;
    NSMutableArray *_bubbleViewArray;
    WCFinderMsgBubbleShowStateInfo *_bubbleShowStateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgBubbleShowStateInfo *bubbleShowStateInfo; // @synthesize bubbleShowStateInfo=_bubbleShowStateInfo;
@property(retain, nonatomic) NSMutableArray *bubbleViewArray; // @synthesize bubbleViewArray=_bubbleViewArray;
@property(nonatomic) __weak id <WCFinderMsgBubbleMgrPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderPostingCommentFailTableViewCellDidClick:(id)arg1;
- (void)onClickFinderPrivateMsgNotify;
- (void)onClickNotificationMsgBtn;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)createPostingCommentFailBubbleViewWithCommentFailiInfo:(id)arg1;
- (id)createPrivateMsgBubbleView;
- (id)createUnreadNewMsgBubbleViewWithUnreadMsdgCount:(unsigned long long)arg1;
- (void)updateAllBubbleViewLayout;
- (id)getMaxWidthBubbleView;
- (void)updateBubbleMgePanelViewWithBubbleShowStateInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bubbleShowStateInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

