//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMLiveCommentDataItem, MMLiveTaskId, NSArray;

@protocol MMLiveCommentExt <NSObject>

@optional
- (void)onAppendCommentDataItemList:(NSArray *)arg1 forTaskId:(MMLiveTaskId *)arg2 boxId:(FinderLiveBoxId *)arg3 preAppend:(_Bool)arg4;
- (void)onAppendCommentDataItem:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2 boxId:(FinderLiveBoxId *)arg3;
- (void)onAppendCommentDataItem:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2 isPublic:(_Bool)arg3;
- (void)onAppendCommentDataItem:(MMLiveCommentDataItem *)arg1 forTaskId:(MMLiveTaskId *)arg2;
@end

