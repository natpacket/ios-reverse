//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HistoryMsgUploadTaskDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol HistoryMsgUploadMgrDelegate;

@interface HistoryMsgUploadMgr : NSObject <HistoryMsgUploadTaskDelegate>
{
    id <HistoryMsgUploadMgrDelegate> _delegate;
    NSString *_taskId;
    NSString *_taskID;
    NSString *_roomID;
    NSArray *_msgList;
    NSMutableArray *_arrReadyAddMsg;
    NSMutableArray *_arrUploadTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUploadTask; // @synthesize arrUploadTask=_arrUploadTask;
@property(retain, nonatomic) NSMutableArray *arrReadyAddMsg; // @synthesize arrReadyAddMsg=_arrReadyAddMsg;
@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <HistoryMsgUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUploadTaskFailWithMsg:(id)arg1 uploadTask:(id)arg2;
- (void)onUploadTaskSuccessWithMsg:(id)arg1 uploadTask:(id)arg2;
- (void)uploadHistoryMsgList:(id)arg1;
- (void)onAllTaskFinish;
- (void)stopUpload;
- (void)startUpload;
- (void)generateUploadTask;
- (id)initWithMsgList:(id)arg1 roomID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

