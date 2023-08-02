//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton;
@protocol WCMomentsShareScopeSectionFooterDelegate;

@interface WCMomentsShareScopeSectionFooterView : UICollectionReusableView
{
    id <WCMomentsShareScopeSectionFooterDelegate> _delegate;
    UIButton *_modifyScopeButton;
}

+ (double)footerMarginTopForIsBlank:(_Bool)arg1;
+ (double)footerHeightForIsBlank:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *modifyScopeButton; // @synthesize modifyScopeButton=_modifyScopeButton;
@property(nonatomic) __weak id <WCMomentsShareScopeSectionFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initView;
- (void)_onClickModifyScopeButton:(id)arg1;
- (void)updateViewWithIsBlank:(_Bool)arg1;

@end

