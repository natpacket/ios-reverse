//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BizRecentReadNoMoreDataLabel, MMUIImageView;

@interface BizRecentReadFooter : UIView
{
    BizRecentReadNoMoreDataLabel *_noMoreDataView;
    MMUIImageView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) BizRecentReadNoMoreDataLabel *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
- (void)setState:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)init;

@end

