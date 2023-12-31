//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, UnAuthFinder, WCFinderHeadImageView;

@interface WCFinderPersonalCenterUnAuthorTableViewCell : UICollectionViewCell
{
    WCFinderHeadImageView *_headerView;
    UILabel *_nicknameLabel;
    UILabel *_fansLabel;
    UIImageView *_arrowIconView;
    UIView *_redDot;
    UnAuthFinder *_authInfo;
}

+ (id)cellID;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UnAuthFinder *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headerView; // @synthesize headerView=_headerView;
- (void)layoutSubviews;
- (void)updateUnAuthFinder:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

