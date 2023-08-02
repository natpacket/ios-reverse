//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, WCFinderLiveStreamElementModel;

@protocol WCFinderLiveHomePageCellPlayProtocol <NSObject>
@property(readonly, nonatomic) WCFinderLiveStreamElementModel *elementModel;
- (void)prepareForMorphTransition;
- (void)markTappedByUser;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;

@optional
- (UIImage *)takePlayerViewSnapshot;
- (void)updateAllUIElementsShow:(_Bool)arg1 animate:(_Bool)arg2;
- (void)updateShowVolumeEduView:(_Bool)arg1;
@end

