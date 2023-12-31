//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLoadMoreCollectionView.h"

@class CADisplayLink;

@interface EmoticonCustomManageCollectionView : MMLoadMoreCollectionView
{
    unsigned long long _autoScrollType;
    double _speedPercent;
    CADisplayLink *_scrollDisplayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *scrollDisplayLink; // @synthesize scrollDisplayLink=_scrollDisplayLink;
@property(nonatomic) double speedPercent; // @synthesize speedPercent=_speedPercent;
@property(nonatomic) unsigned long long autoScrollType; // @synthesize autoScrollType=_autoScrollType;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, nonatomic) _Bool canAutoScroll;
- (double)scrollSpeed;
- (void)autoScrollDown;
- (void)autoScrollUp;
- (void)cleanCurrentDisplayLink;

@end

