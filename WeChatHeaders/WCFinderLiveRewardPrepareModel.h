//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveGiftRandomCtx, NSData;

@interface WCFinderLiveRewardPrepareModel : NSObject
{
    NSData *_prepareBuf;
    NSData *_ctxBuf;
    FinderLiveGiftRandomCtx *_ctx;
}

+ (id)genFinderLiveRewardPrepareRsp:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGiftRandomCtx *ctx; // @synthesize ctx=_ctx;
@property(retain, nonatomic) NSData *ctxBuf; // @synthesize ctxBuf=_ctxBuf;
@property(retain, nonatomic) NSData *prepareBuf; // @synthesize prepareBuf=_prepareBuf;

@end

