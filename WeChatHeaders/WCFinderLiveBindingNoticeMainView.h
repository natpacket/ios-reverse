//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeInfo, MMUILabel, MMUIView, UIImageView;

@interface WCFinderLiveBindingNoticeMainView : UIView
{
    FinderLiveNoticeInfo *_noticeInfo;
    MMUIView *_topLineView;
    MMUIView *_bottomLineView;
    UIImageView *_arrowImageView;
    MMUILabel *_timeLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_reserveLabel;
}

+ (id)getReserveString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *reserveLabel; // @synthesize reserveLabel=_reserveLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) MMUIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

