//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class CameraScanGoodsItemViewModel, NSData;
@protocol CameraScanGoodsExtCGITaskDelegate;

@interface CameraScanGoodsExtCGITask : MMObject <PBMessageObserverDelegate>
{
    _Bool _isCancelled;
    _Bool _isNeedPreload;
    unsigned int _taskId;
    CameraScanGoodsItemViewModel *_itemVM;
    id <CameraScanGoodsExtCGITaskDelegate> _delegate;
    unsigned long long _sessionId;
    NSData *_uploadImageData;
    struct CGSize _uploadImageSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize uploadImageSize; // @synthesize uploadImageSize=_uploadImageSize;
@property(retain, nonatomic) NSData *uploadImageData; // @synthesize uploadImageData=_uploadImageData;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isNeedPreload; // @synthesize isNeedPreload=_isNeedPreload;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) __weak id <CameraScanGoodsExtCGITaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CameraScanGoodsItemViewModel *itemVM; // @synthesize itemVM=_itemVM;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleExchanedItemInfoResponse:(id)arg1;
- (void)startExchanedItemInfo;
- (void)__callDelegateTaskUploadDone;
- (void)handleUploadResponse:(id)arg1;
- (void)startUploadItem;
- (unsigned long long)uploadImageEncodeType;
- (void)genUploadImageData;
- (void)end;
- (void)start;
- (void)dealloc;
- (id)initWithItemViewModel:(id)arg1 sessionId:(unsigned long long)arg2;

@end

