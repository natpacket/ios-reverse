//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class EnhanceTranslatingView, NSString;

@interface EnhanceTranslatingAutoTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    EnhanceTranslatingView *_enhanceTranslatingView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak EnhanceTranslatingView *enhanceTranslatingView; // @synthesize enhanceTranslatingView=_enhanceTranslatingView;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

