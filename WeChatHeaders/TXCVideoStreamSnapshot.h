//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCVideoBindableObject.h"

@class NSMutableArray, TXCDispatchQueue;

@interface TXCVideoStreamSnapshot : TXCVideoBindableObject
{
    TXCDispatchQueue *_queue;
    NSMutableArray *_snapshotBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *snapshotBlocks; // @synthesize snapshotBlocks=_snapshotBlocks;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)callbackSnapshotIfNeeded:(struct __CVBuffer *)arg1;
- (void)callbackNilOnTimeout:(CDUnknownBlockType)arg1;
- (void)addSnapshotBlocks:(CDUnknownBlockType)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;

@end

