//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol WCFinderFeedCollectionViewCellProtocol <NSObject>
- (_Bool)finderFeedCellIsCurrentMediaMute;
- (NSString *)finderFeedCellPlayerMeidaWrapIdentifier;
- (NSString *)finderFeedCellUnSupportMinimizePlayToast;
- (_Bool)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (_Bool)finderFeedCellIsCurrentMediaPlaying;

@optional
- (void)finderFeedCellRestoreMinimizeContentView:(UIView *)arg1 forPlay:(_Bool)arg2;
- (UIView *)finderFeedCellMinimizeContentView:(_Bool)arg1;
@end

