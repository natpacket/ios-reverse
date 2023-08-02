//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingFlowSessionProtocol-Protocol.h"

@class NSString, TingTapeItem;
@protocol OS_dispatch_queue, TingPlayTaskService;

@interface TingListBaseSession : NSObject <TingFlowSessionProtocol>
{
    _Bool _enabled;
    TingTapeItem *_tapeItem;
    id <TingPlayTaskService> _taskService;
    NSObject<OS_dispatch_queue> *_dataProcessQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataProcessQueue; // @synthesize dataProcessQueue=_dataProcessQueue;
@property(retain, nonatomic) id <TingPlayTaskService> taskService; // @synthesize taskService=_taskService;
@property(retain, nonatomic) TingTapeItem *tapeItem; // @synthesize tapeItem=_tapeItem;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setPresetItems:(id)arg1 needMergeOnUpdate:(_Bool)arg2;
- (_Bool)isLoadingPrevious;
- (_Bool)isLoadingMore;
- (_Bool)hasPrevious;
- (_Bool)loadPrevious;
- (_Bool)loadMore;
- (_Bool)reload;
- (unsigned long long)itemCount;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)isLoading;
- (_Bool)hasMore;
- (void)copyPropertiesToSession:(id)arg1;
- (void)cancelFetching;
- (id)allFetchedItems;
- (id)allDisplayItems;
- (void)parseTingItemList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)parseTingItemList:(id)arg1;
- (void)onPlayListLoadMoreItems:(id)arg1 direction:(int)arg2;
- (void)onPlayListReloadItems:(id)arg1;
- (void)processLoadMoreItems:(id)arg1 direction:(int)arg2;
- (void)reloadItemsWithData:(id)arg1;
- (void)reloadItemsWithData:(id)arg1 performOnBackground:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onPlaylistChanged;
- (void)onPlayListTapeItemUpdated:(id)arg1;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (id)sessionBuffer;
- (void)reloadTapeItemWithData:(id)arg1;
- (void)loadTingTapeItem;
- (void)loadTaskService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

