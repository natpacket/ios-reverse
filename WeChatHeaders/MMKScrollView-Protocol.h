//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKViewLayout-Protocol.h"

@class MMKPoint, MMKScrollViewOnScrollCallback;
@protocol MMKView;

@protocol MMKScrollView <MMKViewLayout>
- (void)setOnScrollCallback:(MMKScrollViewOnScrollCallback *)arg1;
- (_Bool)getScrollToDimissKeyboardEnabled;
- (void)setScrollToDimissKeyboardEnabled:(_Bool)arg1;
- (_Bool)getScrollWhenViewSizeEnough;
- (void)setScrollWhenViewSizeEnough:(_Bool)arg1;
- (_Bool)getShowScrollBar;
- (void)setShowScrollBar:(_Bool)arg1;
- (void)setContentOffset:(MMKPoint *)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(MMKPoint *)arg1;
- (MMKPoint *)getContentOffset;
- (void)setContentInsect:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)setContent:(id <MMKView>)arg1;
- (void)scrollTo:(id <MMKView>)arg1 xOffset:(float)arg2 yOffset:(float)arg3 animated:(_Bool)arg4;
@end

