//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WCFinderProfileRedPacketBanner : UIView
{
    NSString *_linkUrl;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIImageView *_tailCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *tailCoverView; // @synthesize tailCoverView=_tailCoverView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

