//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BizDynamicCardMrg : NSObject
{
    struct BizDynamicCardMrgCallbackBridge *callback_;
}

+ (id)shareInstance;
- (_Bool)deleteDynamicCard:(unsigned long long)arg1 dynamicCardType:(int)arg2;
- (_Bool)setAdCardRequestInfo:(unsigned long long)arg1 adInfo:(id)arg2;
- (_Bool)setAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (id)getAllDynamicCardInfo:(int)arg1;
- (void)callOnDynamicCardInfo:(int)arg1 msgId:(unsigned long long)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
- (void)callOnAdServerInfo:(id)arg1;
- (void)mockInsertCanvas:(int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (struct BizDynamicCardMrgBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

