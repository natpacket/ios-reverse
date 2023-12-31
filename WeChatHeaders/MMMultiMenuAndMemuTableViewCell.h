//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class UIView;
@protocol MMMultiMenuAndMemuTableViewCellDelegate;

@interface MMMultiMenuAndMemuTableViewCell : MMMultiMenuTableViewCell
{
    UIView *coverView;
    _Bool m_selected;
    id <MMMultiMenuAndMemuTableViewCellDelegate> _delegate;
    long long _buttonTitleLabelNumberOfLines;
    UIView *_m_bkgCardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_bkgCardView; // @synthesize m_bkgCardView=_m_bkgCardView;
@property(nonatomic) long long buttonTitleLabelNumberOfLines; // @synthesize buttonTitleLabelNumberOfLines=_buttonTitleLabelNumberOfLines;
@property(nonatomic) __weak id <MMMultiMenuAndMemuTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getButtonTitleLabelTextAlignment;
- (long long)getButtonTitleLabelNumberOfLines;
- (void)deleteAction:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (id)getArrMemuItemForRowAtIndexPath:(id)arg1;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCoverView:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

