//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class ForwardMsgSpamDb, NSString;

@interface ForwardMsgSpamMgr : MMUserService <MMServiceProtocol>
{
    ForwardMsgSpamDb *_db;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMsgSpamDb *db; // @synthesize db=_db;
- (id)sInt2String:(long long)arg1;
- (void)setUsername:(id)arg1 andScene:(unsigned long long)arg2 andMsgId:(long long)arg3 andOpenStatus:(_Bool)arg4;
- (_Bool)isUnknownMsg:(id)arg1;
- (_Bool)isSpamMsg:(id)arg1;
- (_Bool)isSafeMsg:(id)arg1;
- (void)requestMsgSpam:(id)arg1 commonParams:(id)arg2 startHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

