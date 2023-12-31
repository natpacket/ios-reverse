//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CContact, InteractionLabel, MMWebImageView;

@interface TLProfileNicknameContainerView : UIView
{
    CDUnknownBlockType _nicknameClickBlock;
    CDUnknownBlockType _textStateClickBlock;
    CContact *_contact;
    InteractionLabel *_nicknameLabel;
    MMWebImageView *_textStateImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *textStateImageView; // @synthesize textStateImageView=_textStateImageView;
@property(retain, nonatomic) InteractionLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) CDUnknownBlockType textStateClickBlock; // @synthesize textStateClickBlock=_textStateClickBlock;
@property(copy, nonatomic) CDUnknownBlockType nicknameClickBlock; // @synthesize nicknameClickBlock=_nicknameClickBlock;
- (void)onClickTextState;
- (void)onClickNickname;
- (id)contactTextStateIcon;
- (void)updateWithContact:(id)arg1;
- (void)layoutSubviews;
- (void)initNicknameLabel;
- (void)initTextStateImageView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;

@end

