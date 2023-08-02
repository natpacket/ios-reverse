//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class UILabel, UIView, WCFinderAuthInfoIconView, WCFinderContact, WCFinderHeadImageView, WCFinderLiveNowView;
@protocol WCFinderContactListCellDelegate;

@interface WCFinderContactListCell : MMMultiMenuTableViewCell
{
    id <WCFinderContactListCellDelegate> _delegate;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nickName;
    WCFinderAuthInfoIconView *_authIconView;
    WCFinderLiveNowView *_liveView;
    UILabel *_descLabel;
    UIView *_separator;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderLiveNowView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WCFinderContactListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeSeparator;
- (void)drawNormalSeparator;
- (void)updateWithContact:(id)arg1;
- (void)setupMenu;
- (void)onRemoveAllMenu;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

