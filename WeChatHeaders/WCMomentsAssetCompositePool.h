//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCSightVideoCompositeTaskDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WCMomentsAssetCompositePool : NSObject <WCSightVideoCompositeTaskDelegate>
{
    NSMutableArray *_srcAssetList;
    NSMutableArray *_completedAssetList;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _sightDraftTaskResultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sightDraftTaskResultBlock; // @synthesize sightDraftTaskResultBlock=_sightDraftTaskResultBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableArray *completedAssetList; // @synthesize completedAssetList=_completedAssetList;
@property(retain, nonatomic) NSMutableArray *srcAssetList; // @synthesize srcAssetList=_srcAssetList;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(_Bool)arg2 withSightDraft:(id)arg3;
- (void)startSightDraftTask:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (void)_startNextCompositeTask;
- (void)startWithResultBlock:(CDUnknownBlockType)arg1;
- (void)addSrcAssetList:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

