//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@interface SharePreConfirmViewController : MMUIViewController
{
    _Bool _willRotateToPreviousOrientation;
    CDUnknownBlockType _didTransitionToNewSizeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didTransitionToNewSizeBlock; // @synthesize didTransitionToNewSizeBlock=_didTransitionToNewSizeBlock;
@property(nonatomic) _Bool willRotateToPreviousOrientation; // @synthesize willRotateToPreviousOrientation=_willRotateToPreviousOrientation;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;

@end

