//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class ChatLogDataStat, NSMutableArray, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface ChatLogDataMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray *_arrSessionInfo;
    unsigned long long _startLoadDataTime;
    unsigned int _loadDataCostTime;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrImageSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrVideoSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFileSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterImgSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterVideoSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterFileSessionItems;
    NSObject<OS_dispatch_queue> *_removeFileQueue;
    _Bool _loadingData;
    _Bool _loadDataEnd;
    unsigned long long _oneMsgSize;
    _Bool _bGetProgress;
    _Bool _filteringData;
    _Bool _filterDataEnd;
    unsigned int _msgOldestTime;
    unsigned int _msgNewestTime;
    unsigned long long _allSessionSize;
    unsigned long long _allOtherFileSize;
    NSMutableArray *_arrBrandSessionInfo;
    NSRecursiveLock *_detailRecurciveLock;
    ChatLogDataStat *_stat;
    CDUnknownBlockType _chatLogCalCompletion;
    CDUnknownBlockType _chatLogFilterCalCompletion;
    map_0a64c3eb _sizeOfFileType;
}

+ (id)convertSessionItem:(const void *)arg1;
+ (id)convertSessionItemOtherSize:(const void *)arg1;
+ (id)convertSessionItemMsgSize:(const void *)arg1;
+ (_Bool)isCanAddToFileItems:(shared_ptr_2a489de3)arg1;
+ (_Bool)isTmpFile:(id)arg1;
+ (id)getSessionNickName:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType chatLogFilterCalCompletion; // @synthesize chatLogFilterCalCompletion=_chatLogFilterCalCompletion;
@property(copy, nonatomic) CDUnknownBlockType chatLogCalCompletion; // @synthesize chatLogCalCompletion=_chatLogCalCompletion;
@property(retain, nonatomic) ChatLogDataStat *stat; // @synthesize stat=_stat;
@property(retain, nonatomic) NSRecursiveLock *detailRecurciveLock; // @synthesize detailRecurciveLock=_detailRecurciveLock;
@property(nonatomic) unsigned int msgNewestTime; // @synthesize msgNewestTime=_msgNewestTime;
@property(nonatomic) unsigned int msgOldestTime; // @synthesize msgOldestTime=_msgOldestTime;
@property(nonatomic) _Bool filterDataEnd; // @synthesize filterDataEnd=_filterDataEnd;
@property(nonatomic) _Bool filteringData; // @synthesize filteringData=_filteringData;
@property(nonatomic) _Bool bGetProgress; // @synthesize bGetProgress=_bGetProgress;
@property(retain, nonatomic) NSMutableArray *arrBrandSessionInfo; // @synthesize arrBrandSessionInfo=_arrBrandSessionInfo;
@property(readonly, nonatomic) map_0a64c3eb sizeOfFileType; // @synthesize sizeOfFileType=_sizeOfFileType;
@property(readonly, nonatomic) unsigned long long allOtherFileSize; // @synthesize allOtherFileSize=_allOtherFileSize;
@property(readonly, nonatomic) unsigned long long allSessionSize; // @synthesize allSessionSize=_allSessionSize;
- (void)asyncGetChatLogSizeOfSession:(id)arg1 afterTime:(unsigned int)arg2;
- (void)asyncGetBackupChatLogSize;
- (id)getAllBackupSessionItem;
- (unsigned int)getMsgNewestTime;
- (unsigned int)getMsgOldestTime;
- (void)getFilterInfo:(shared_ptr_5102c92c)arg1 oneMsgSize:(unsigned long long)arg2 startTime:(unsigned int)arg3 endTime:(unsigned int)arg4;
- (void)reloadDataStartTime:(unsigned int)arg1 endTime:(unsigned int)arg2;
- (const void *)getFilterFileSessionItem;
- (const void *)getFilterVideoSessionItem;
- (const void *)getFilterImageSessionItem;
- (const void *)getAllFilterSessionItem;
- (void)innerDeleteDataItem:(struct ChatLogDataItem *)arg1;
- (void)p_removeDataItemInFilter:(const void *)arg1;
- (void)p_removeDataItemInFull:(const void *)arg1;
- (void)deleteDataItems:(const void *)arg1;
- (void)deleteFileItems:(const void *)arg1;
- (void)deleteVideoItems:(const void *)arg1;
- (void)deleteImageItems:(const void *)arg1;
- (void)deleteSessionDataItems:(const void *)arg1;
- (void)deleteSessions:(const void *)arg1 filterTime:(unsigned int)arg2 startTime:(unsigned int)arg3;
- (const void *)getFileSessionItem;
- (const void *)getVideoSessionItem;
- (const void *)getImageSessionItem;
- (const void *)getAllSessionItem;
- (shared_ptr_5102c92c)getSessionItemWithUserName:(id)arg1 bFilter:(_Bool)arg2;
- (shared_ptr_5102c92c)getSessionItemOfIndex:(unsigned long long)arg1;
- (unsigned long long)getCountOfSessionItem;
- (void)getDetailInfoForSessionInfo:(shared_ptr_5102c92c)arg1 oneMsgSize:(unsigned long long)arg2;
- (void)onLoadDataWithDBSize:(unsigned long long)arg1;
- (void)completeAfterLoadDataFinish;
- (id)getCacheKeyFromFullPath:(id)arg1;
- (void)g_getFileSizeAndCreateTime:(id)arg1 withDataItem:(shared_ptr_2a489de3)arg2 hasLocalID:(_Bool)arg3;
- (unsigned int)parseMesLocalIdFromPath:(id)arg1;
- (id)getSessionName:(id)arg1;
- (_Bool)isDataLoadEnd;
- (unsigned int)getLoadDataCostTime;
- (void)stopLoadData;
- (void)startLoadDataWithDBSize:(unsigned long long)arg1;
- (void)startLoadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

