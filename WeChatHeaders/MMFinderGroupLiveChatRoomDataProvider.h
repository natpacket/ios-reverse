//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSArray, NSMutableArray, WCFinderGroupLiveChatSaveToLocalFileHandler;

@interface MMFinderGroupLiveChatRoomDataProvider : NSObject
{
    NSArray *_chatRoomItemCache;
    MMFinderLiveTaskId *_liveTaskId;
    WCFinderGroupLiveChatSaveToLocalFileHandler *_fileHandler;
    NSMutableArray *_mutaChatRoomItemCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutaChatRoomItemCache; // @synthesize mutaChatRoomItemCache=_mutaChatRoomItemCache;
@property(retain, nonatomic) WCFinderGroupLiveChatSaveToLocalFileHandler *fileHandler; // @synthesize fileHandler=_fileHandler;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSArray *chatRoomItemCache; // @synthesize chatRoomItemCache=_chatRoomItemCache;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (id)loadRoomBoxIdList;
- (void)saveToLocal;
- (_Bool)isContainChatRoomItemInCache:(id)arg1;
- (void)clearChatRoomItems;
- (void)addChatRoomItemList:(id)arg1;
- (void)setup;
- (id)initWithLiveId:(id)arg1;

@end

