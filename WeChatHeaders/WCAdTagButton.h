//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WCAdTagButtonInfo, WCAdURLImageView, WCDataItem;
@protocol WCAdTagButtonDelegate;

@interface WCAdTagButton : UIView
{
    id <WCAdTagButtonDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdTagButtonInfo *_tagInfo;
    long long _cardType;
    unsigned long long _contentItemScene;
    WCAdURLImageView *_bgImageView;
    UIButton *_topButton;
    WCAdURLImageView *_topButtonIcon;
}

+ (struct CGSize)calcTagButtonSizeForTagInfo:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdURLImageView *topButtonIcon; // @synthesize topButtonIcon=_topButtonIcon;
@property(retain, nonatomic) UIButton *topButton; // @synthesize topButton=_topButton;
@property(retain, nonatomic) WCAdURLImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) WCAdTagButtonInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdTagButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTopButton:(id)arg1;
- (_Bool)hasTitle;
- (_Bool)hasIcon;
- (_Bool)hasBgImageView;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 tagInfo:(id)arg2 cardType:(long long)arg3 contentItemScene:(unsigned long long)arg4;

@end

