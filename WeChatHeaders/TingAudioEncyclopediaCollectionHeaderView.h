//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMImageLoaderObserver-Protocol.h"

@class MMUIButton, MMUILabel, NSString, TingTitleLabel, UIView;
@protocol TingAudioEncyclopediaCollectionHeaderViewDelegate;

@interface TingAudioEncyclopediaCollectionHeaderView : MMUIView <MMImageLoaderObserver>
{
    id <TingAudioEncyclopediaCollectionHeaderViewDelegate> _delegate;
    UIView *_containerTopView;
    UIView *_containerView;
    TingTitleLabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUIButton *_likeButton;
    NSString *_imageUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) TingTitleLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *containerTopView; // @synthesize containerTopView=_containerTopView;
@property(nonatomic) __weak id <TingAudioEncyclopediaCollectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)likeButtonClicked:(id)arg1;
- (void)updateContainerViewBackgroundColor:(id)arg1;
- (id)coverDefaultColor;
- (id)likedImage;
- (id)likeImage;
- (id)buttonBackgroundColor;
- (void)adjustContentHeight;
- (void)configureLayout;
- (double)topMargin;
- (id)headerBgColor;
- (void)updateWithTitle:(id)arg1 coverUrl:(id)arg2 isLiked:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

