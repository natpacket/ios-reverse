//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMListenCategoryItem, UIView, WCFinderProfilePlaylistCell;

@protocol WCFinderProfilePlaylistCellDataSource <NSObject>
- (void)playListCell:(WCFinderProfilePlaylistCell *)arg1 itemCell:(UIView *)arg2 afterBindAlbum:(MMListenCategoryItem *)arg3;
- (void)playListCell:(WCFinderProfilePlaylistCell *)arg1 onClickCellAtIndex:(long long)arg2;
- (MMListenCategoryItem *)playListCell:(WCFinderProfilePlaylistCell *)arg1 categoryAtIndex:(long long)arg2;
- (long long)numberOfPlayListCell:(WCFinderProfilePlaylistCell *)arg1;
@end

