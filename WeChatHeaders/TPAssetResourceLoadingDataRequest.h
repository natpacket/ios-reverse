//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, TPWorkerQueue;
@protocol TPAssetResourceLoadingDataRequestDelegate;

@interface TPAssetResourceLoadingDataRequest : NSObject
{
    _Bool _requestsAllDataToEndOfResource;
    int _requestNum;
    int _taskId;
    long long _requestedOffset;
    long long _requestedLength;
    NSRecursiveLock *_recursiveLock;
    NSString *_nsDataWritePath;
    NSString *_fileName;
    unsigned long long _fileLen;
    long long _currentOffset;
    long long _realOffset;
    TPWorkerQueue *_dataWriteQueue;
    id <TPAssetResourceLoadingDataRequestDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TPAssetResourceLoadingDataRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TPWorkerQueue *dataWriteQueue; // @synthesize dataWriteQueue=_dataWriteQueue;
@property(nonatomic) long long realOffset; // @synthesize realOffset=_realOffset;
@property(nonatomic) long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int requestNum; // @synthesize requestNum=_requestNum;
@property(nonatomic) unsigned long long fileLen; // @synthesize fileLen=_fileLen;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *nsDataWritePath; // @synthesize nsDataWritePath=_nsDataWritePath;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(readonly, nonatomic) _Bool requestsAllDataToEndOfResource; // @synthesize requestsAllDataToEndOfResource=_requestsAllDataToEndOfResource;
@property(readonly, nonatomic) long long requestedLength; // @synthesize requestedLength=_requestedLength;
@property(readonly, nonatomic) long long requestedOffset; // @synthesize requestedOffset=_requestedOffset;
- (id)description;
- (void)notifyDataReady:(long long)arg1 length:(unsigned long long)arg2;
- (void)respondWithData:(id)arg1;
- (void)setRequestedLength:(long long)arg1;
- (void)setDataRequestDelegate:(id)arg1;
- (id)getFileName;
- (void)setDataRequestNum:(int)arg1;
- (void)setDataWritePath:(id)arg1;
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 endOfResource:(_Bool)arg3;

@end
