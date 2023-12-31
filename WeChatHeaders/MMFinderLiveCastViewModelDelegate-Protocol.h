//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCastViewModel, MMLiveCastDeviceViewItem, NSError;

@protocol MMFinderLiveCastViewModelDelegate <NSObject>

@optional
- (void)liveCastViewModel:(MMFinderLiveCastViewModel *)arg1 castingDeviceViewItemDidChange:(MMLiveCastDeviceViewItem *)arg2;
- (void)liveCastViewModel:(MMFinderLiveCastViewModel *)arg1 didFailToCastDeviceViewItem:(MMLiveCastDeviceViewItem *)arg2 withError:(NSError *)arg3;
- (void)liveCastViewModel:(MMFinderLiveCastViewModel *)arg1 didCastDeviceViewItem:(MMLiveCastDeviceViewItem *)arg2;
- (void)liveCastViewModelDidReloadViewItems:(MMFinderLiveCastViewModel *)arg1;
@end

