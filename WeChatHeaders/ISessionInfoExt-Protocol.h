//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, NSMutableArray, NSString;

@protocol ISessionInfoExt <NSObject>

@optional
- (void)onModifyDraft:(CBaseContact *)arg1 draft:(NSString *)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onGetDraft:(CBaseContact *)arg1 draft:(NSMutableArray *)arg2 referMsgSvrId:(long long *)arg3;
@end
