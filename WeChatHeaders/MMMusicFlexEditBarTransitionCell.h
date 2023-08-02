//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImage, UIImageView, UIView;
@protocol MMMusicFlexEditBarTransitionCellDelegate;

@interface MMMusicFlexEditBarTransitionCell : MMUIView
{
    id <MMMusicFlexEditBarTransitionCellDelegate> _delegate;
    unsigned long long _preIndex;
    unsigned long long _nextIndex;
    UIView *_transitionImgContainerView;
    UIImageView *_transitionImgView;
    UIImage *_transitionImgForModify;
    UIImage *_transitionImgForNotModify;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *transitionImgForNotModify; // @synthesize transitionImgForNotModify=_transitionImgForNotModify;
@property(retain, nonatomic) UIImage *transitionImgForModify; // @synthesize transitionImgForModify=_transitionImgForModify;
@property(retain, nonatomic) UIImageView *transitionImgView; // @synthesize transitionImgView=_transitionImgView;
@property(retain, nonatomic) UIView *transitionImgContainerView; // @synthesize transitionImgContainerView=_transitionImgContainerView;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) unsigned long long preIndex; // @synthesize preIndex=_preIndex;
@property(nonatomic) __weak id <MMMusicFlexEditBarTransitionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapGes:(id)arg1;
- (void)layoutSubviews;
- (void)setTransitionIconHidden:(_Bool)arg1;
- (void)updateWithPreIndex:(unsigned long long)arg1 nextIndex:(unsigned long long)arg2 isModify:(_Bool)arg3;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

