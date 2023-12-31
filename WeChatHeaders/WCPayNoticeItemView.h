//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NoticeItem, UIButton, UIImageView, UILabel, WCPayWebImageView;

@interface WCPayNoticeItemView : UIView
{
    NoticeItem *_noticeItem;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    WCPayWebImageView *_leftIconImageView;
    UIImageView *_rightArrowImageView;
    UIButton *_jumpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) WCPayWebImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NoticeItem *noticeItem; // @synthesize noticeItem=_noticeItem;
- (void)updateView;
- (void)jumpToNoticeUrl;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)updateViewWithItem:(id)arg1;

@end

