//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdLiveDisplayView.h"

@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicLiveDisplayView : WCAdLiveDisplayView
{
    WCAdDynamicFeedElementRollTextInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)layoutSubviews;
- (void)updateDynamicRollView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 isFullCard:(_Bool)arg3 styleInfo:(id)arg4;

@end

