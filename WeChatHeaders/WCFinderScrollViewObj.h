//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface WCFinderScrollViewObj : NSObject
{
    UIView *_scrollView;
    double _marginBottomInputView;
    double _initialBottom;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _getBottomCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getBottomCallback; // @synthesize getBottomCallback=_getBottomCallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) double initialBottom; // @synthesize initialBottom=_initialBottom;
@property(nonatomic) double marginBottomInputView; // @synthesize marginBottomInputView=_marginBottomInputView;
@property(retain, nonatomic) UIView *scrollView; // @synthesize scrollView=_scrollView;

@end

