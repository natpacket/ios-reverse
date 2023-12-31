//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;
@protocol TingPlayTaskClient, TingPlayTaskService;

@protocol TingPlayTaskService <NSObject>
+ (id <TingPlayTaskService>)createWithExistedSource:(id <TingPlayTaskService>)arg1;
+ (id <TingPlayTaskService>)createWithTapeInfoAndTingListSource:(NSData *)arg1 context:(NSData *)arg2;
+ (id <TingPlayTaskService>)createWithCategoryAndTingListSource:(NSData *)arg1 context:(NSData *)arg2;
+ (id <TingPlayTaskService>)createWithCategoryAndInitialItem:(NSData *)arg1 itemList:(NSArray *)arg2 mergeWithBaseListenId:(_Bool)arg3 sessionBuffer:(NSData *)arg4;
+ (id <TingPlayTaskService>)createWithCategoryAndItemList:(NSData *)arg1 itemList:(NSArray *)arg2;
+ (id <TingPlayTaskService>)createWithListenIdList:(NSArray *)arg1;
+ (id <TingPlayTaskService>)createWithTingItems:(NSArray *)arg1;
+ (id <TingPlayTaskService>)createWithItem:(NSData *)arg1;
+ (id <TingPlayTaskService>)createEmpty;
- (void)insert:(NSData *)arg1 index:(int)arg2;
- (void)edit:(NSArray *)arg1;
- (_Bool)isLoadingWithDirection:(int)arg1;
- (_Bool)hasMoreWithDirection:(int)arg1;
- (void)loadMoreWithDirection:(int)arg1 canSwitchRange:(_Bool)arg2;
- (NSData *)generateTapeItem;
- (NSArray *)getItems;
- (void)checkUpdateListenItem:(NSData *)arg1;
- (void)clearPlayTaskClient;
- (void)removePlayTaskClient:(id <TingPlayTaskClient>)arg1;
- (void)addPlayTaskClient:(id <TingPlayTaskClient>)arg1;
- (NSData *)toTapeItem;
- (NSData *)getItemInfoWithId:(NSString *)arg1;
- (NSData *)getItemInfo:(int)arg1;
- (int)getScene;
- (void)setScene:(int)arg1;
- (_Bool)isLoading;
- (int)count;
- (_Bool)hasMore;
- (void)loadMore:(int)arg1;
- (void)load:(int)arg1;
@end

