//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MMLiveCustomTransitionDelegate;

@interface MMLiveCustomTransition : NSObject
{
    id <MMLiveCustomTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveCustomTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getExtendTransitionContainerBackView;
- (struct CGRect)getMaximizeToRect;
- (struct CGRect)getMinimizeFromRect;
- (id)getSnapShotImage;
- (long long)getPreviousOrientation;
- (struct CGRect)getMinimizeLiveFrameInScreen;
- (struct CGRect)getMinimizeFrame;
- (long long)getCurrentTransitionState;

@end

