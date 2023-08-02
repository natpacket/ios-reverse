//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMLiveControlItemDelegate-Protocol.h"

@class MMLiveControlItem, NSString, UIImageView, UILabel;
@protocol WCFinderLiveControlItemCellDelegate;

@interface WCFinderLiveControlItemCell : UIView <MMLiveControlItemDelegate>
{
    _Bool _isActionDisabled;
    _Bool _isImageMirrored;
    MMLiveControlItem *_controlItem;
    UIView *_itemCell;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    id <WCFinderLiveControlItemCellDelegate> _cellDelegate;
    NSString *_redDotPath;
    UIView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(nonatomic) _Bool isImageMirrored; // @synthesize isImageMirrored=_isImageMirrored;
@property(nonatomic) _Bool isActionDisabled; // @synthesize isActionDisabled=_isActionDisabled;
@property(nonatomic) __weak id <WCFinderLiveControlItemCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *itemCell; // @synthesize itemCell=_itemCell;
@property(retain, nonatomic) MMLiveControlItem *controlItem; // @synthesize controlItem=_controlItem;
- (void)onBadgeEnablementChangedForItem:(id)arg1;
- (void)onClickToControlItem;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 MMLiveControlItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

