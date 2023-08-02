//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"

@class CContact, NSString, RichTextView, UIImageView;
@protocol ChatRoomInvitationCellQuitRoomInfoViewDelegate;

@interface ChatRoomInvitationCellQuitRoomInfoView : MMUIView <ILinkEventExt>
{
    id <ChatRoomInvitationCellQuitRoomInfoViewDelegate> _delegate;
    CContact *_contact;
    NSString *_quitRoomInfo;
    UIImageView *_iconView;
    RichTextView *_quitRoomInfoLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *quitRoomInfoLabel; // @synthesize quitRoomInfoLabel=_quitRoomInfoLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *quitRoomInfo; // @synthesize quitRoomInfo=_quitRoomInfo;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <ChatRoomInvitationCellQuitRoomInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setupLayout;
- (void)initView;
- (id)initWithContact:(id)arg1 quitRoomInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

