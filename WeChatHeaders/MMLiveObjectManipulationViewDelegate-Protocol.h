//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveObjectManipulationView;

@protocol MMLiveObjectManipulationViewDelegate <NSObject>

@optional
- (void)onManipulationViewRemoveTapped:(MMLiveObjectManipulationView *)arg1;
- (void)onManipulationViewTapped:(MMLiveObjectManipulationView *)arg1;
- (void)onManipulationWillCancelOnView:(MMLiveObjectManipulationView *)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2;
- (void)onManipulationWillEndOnView:(MMLiveObjectManipulationView *)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 toTransformComponents:(struct CGAffineTransformComponents)arg3 overrideTransformComponents:(struct CGAffineTransformComponents *)arg4;
- (void)onManipulationWillChangeOnView:(MMLiveObjectManipulationView *)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 toTransformComponents:(struct CGAffineTransformComponents)arg3 overrideTransformComponents:(struct CGAffineTransformComponents *)arg4;
- (void)onManipulationWillBeginOnView:(MMLiveObjectManipulationView *)arg1;
@end
