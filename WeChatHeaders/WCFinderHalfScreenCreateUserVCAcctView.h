//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, RichTextView, UIImageView;

@interface WCFinderHalfScreenCreateUserVCAcctView : UIView
{
    UIView *_topView;
    UIView *_bottomView;
    UIImageView *_headerImageView;
    RichTextView *_nickNameLabel;
    MMUIButton *_editBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) RichTextView *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void)layoutSubviews;
- (id)createSeparateLine;
- (void)setupLayout;
- (void)setNickName:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

