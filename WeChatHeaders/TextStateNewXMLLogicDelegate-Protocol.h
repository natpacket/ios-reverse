//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ModTextStatusDataItem, StatusCommentDataItem, StatusDeleteDataItem, TextStatusLikeDataItem;

@protocol TextStateNewXMLLogicDelegate <NSObject>
- (unsigned int)activeMessageChannel;
- (void)onGetStatusDeleteDataItem:(StatusDeleteDataItem *)arg1;
- (void)onShouldRefreshIconConfig;
- (void)onGetTextStatusCommentDataItem:(StatusCommentDataItem *)arg1;
- (void)onGetTextStatusLikeDataItem:(TextStatusLikeDataItem *)arg1;
- (void)onGetModTextStatusDataItem:(ModTextStatusDataItem *)arg1;
@end

