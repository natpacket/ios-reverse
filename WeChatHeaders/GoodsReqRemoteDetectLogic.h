//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface GoodsReqRemoteDetectLogic : MMObject <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleCallRemoteDetectItemInfoResponse:(id)arg1;
- (void)doReqeustRemoteDetectTask:(id)arg1;
- (void)requestRemoteDetectItemWithReqKey:(id)arg1 andExchangeInfo:(id)arg2;
- (void)dealloc;

@end

