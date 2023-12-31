//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;
@protocol WCFinderLiveCompleteLiveVideoContentViewDelegate;

@interface WCFinderLiveCompleteLiveVideoContentView : UIView
{
    _Bool _isLayoutFeeds;
    id <WCFinderLiveCompleteLiveVideoContentViewDelegate> _delegate;
    double _containerViewHeight;
    UIView *_videoContainerView;
    MMUILabel *_titleLabel;
    MMUILabel *_timeLabel;
    MMUIButton *_actionButton;
    double _itemBottom;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLayoutFeeds; // @synthesize isLayoutFeeds=_isLayoutFeeds;
@property(nonatomic) double itemBottom; // @synthesize itemBottom=_itemBottom;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(nonatomic) double containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) __weak id <WCFinderLiveCompleteLiveVideoContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionButtonClick:(id)arg1;
- (void)updateVideoContainerViewHeight;
- (void)layoutCardItem:(id)arg1;
- (double)videoContainerViewPadding;
- (double)itemMargin;
- (double)widthAndHeightScale;
- (void)layoutSubviews;
- (id)init;

@end

