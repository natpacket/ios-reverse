//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, NSString, SimpleImgInfo, UIImage;

@protocol FavFullScreenImageViewControllerDelegate <NSObject>

@optional
- (_Bool)isVideoNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownloadVideoWith:(SimpleImgInfo *)arg1;
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(NSString *)arg6;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(UIImage *)arg2;
@end
