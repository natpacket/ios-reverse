//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveBaseShareView.h"

@class WCFinderLiveIconImageView;

@interface MMFinderLiveStatusIconShareView : MMFinderLiveBaseShareView
{
    WCFinderLiveIconImageView *_statusView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveIconImageView *statusView; // @synthesize statusView=_statusView;
- (void)reloadStatusViewIfNeededWithStyle:(unsigned long long)arg1;
- (void)refreshStatusView;
- (void)refreshSubviews;

@end

