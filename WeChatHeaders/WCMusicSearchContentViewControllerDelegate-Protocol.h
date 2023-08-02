//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, MusicLiveSearchRespInfo, NSData, NSIndexPath, UIScrollView, WCMusicSearchContentViewController;

@protocol WCMusicSearchContentViewControllerDelegate <NSObject>
- (void)musicSearchContentViewController:(WCMusicSearchContentViewController *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)musicSearchContentViewController:(WCMusicSearchContentViewController *)arg1 didClickSendWithMusicInfo:(MMMusicInfo *)arg2 coverImageData:(NSData *)arg3 responseInfo:(MusicLiveSearchRespInfo *)arg4;
- (void)musicSearchContentViewController:(WCMusicSearchContentViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2 musicInfo:(MMMusicInfo *)arg3 responseInfo:(MusicLiveSearchRespInfo *)arg4;
@end

