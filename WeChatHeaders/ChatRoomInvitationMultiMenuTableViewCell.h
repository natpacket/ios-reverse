//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

#import "ChatRoomInvitationCellQuitRoomInfoViewDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"

@class ChatRoomInvitationWrap, MMHeadImageView, NSMutableArray, NSString, RichTextView, UIButton, UILabel, UIView;
@protocol ChatRoomInvitationMultiMenuTableViewCellDelegate;

@interface ChatRoomInvitationMultiMenuTableViewCell : MMMultiMenuTableViewCell <ILinkEventExt, ChatRoomInvitationCellQuitRoomInfoViewDelegate>
{
    id <ChatRoomInvitationMultiMenuTableViewCellDelegate> _delegate;
    ChatRoomInvitationWrap *_invitationWrap;
    UIView *_cardView;
    RichTextView *_titleView;
    MMHeadImageView *_inviterHeadImageView;
    UIButton *_approveButton;
    UILabel *_hasApprovedLabel;
    UIView *_separatorLineView;
    NSMutableArray *_reasonViews;
    NSMutableArray *_quitRoomInfoViews;
}

+ (double)estimatedHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *quitRoomInfoViews; // @synthesize quitRoomInfoViews=_quitRoomInfoViews;
@property(retain, nonatomic) NSMutableArray *reasonViews; // @synthesize reasonViews=_reasonViews;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *hasApprovedLabel; // @synthesize hasApprovedLabel=_hasApprovedLabel;
@property(retain, nonatomic) UIButton *approveButton; // @synthesize approveButton=_approveButton;
@property(retain, nonatomic) MMHeadImageView *inviterHeadImageView; // @synthesize inviterHeadImageView=_inviterHeadImageView;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) ChatRoomInvitationWrap *invitationWrap; // @synthesize invitationWrap=_invitationWrap;
@property(nonatomic) __weak id <ChatRoomInvitationMultiMenuTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)getTitleString;
- (void)onTapHeadImage;
- (void)onQuitRoomInfoView:(id)arg1 tapViewMsgHistoryButton:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onApprove;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)makeCellForInvitationWrap:(id)arg1;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)makeQuitRoomInfoViews;
- (void)makeReasonViews;
- (void)initTopView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

