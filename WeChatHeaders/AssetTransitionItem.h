//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, UIView;

@interface AssetTransitionItem : NSObject
{
    UIView *_originView;
    NSIndexPath *_indexPath;
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) struct CGRect finalFrame; // @synthesize finalFrame=_finalFrame;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;

@end

