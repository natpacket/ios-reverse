//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdCountdownView.h"

@class WCAdDynamicFeedElementPromotionInfo;

@interface WCAdDynamicCountdownView : WCAdCountdownView
{
    WCAdDynamicFeedElementPromotionInfo *_styleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementPromotionInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)setDynamicMaxWidth:(double)arg1;
- (void)updateDynamicStyle;
- (id)initWithTitle:(id)arg1 endTime:(long long)arg2 maxWidth:(double)arg3 styleInfo:(id)arg4;

@end

