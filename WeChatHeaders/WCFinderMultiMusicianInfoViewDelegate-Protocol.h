//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderContact, FinderSingerInfo, UIView;

@protocol WCFinderMultiMusicianInfoViewDelegate <NSObject>
- (void)onMultiMusicianCard:(UIView *)arg1 singerInfo:(FinderSingerInfo *)arg2;
- (void)onMultiMusicianClickSingerContact:(FinderContact *)arg1;
@end
