//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesCDNInfo, FavoritesItem, FavoritesItemDataField, NSMutableArray;

@protocol FavoritesUploadProccessorDelegate <NSObject>
- (_Bool)needDownloadMsgOfData:(FavoritesItemDataField *)arg1 inItem:(FavoritesItem *)arg2;
- (void)updateFavoritesItemCDNInfo:(NSMutableArray *)arg1 inItem:(FavoritesItem *)arg2;
- (_Bool)needUploadData:(FavoritesItemDataField *)arg1 ofType:(int)arg2 inItem:(FavoritesItem *)arg3;
- (_Bool)updateCdnInfo:(FavoritesCDNInfo *)arg1;
- (void)reUploadFavItem:(FavoritesItem *)arg1;
- (void)updateCdnInfoInItem:(FavoritesItem *)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (FavoritesCDNInfo *)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)saveCdnInfoInData:(FavoritesItemDataField *)arg1 forItem:(FavoritesItem *)arg2 isThumb:(_Bool)arg3 withState:(int)arg4;
- (void)onProccessItem:(FavoritesItem *)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
@end
