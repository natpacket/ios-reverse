//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJTemplateSessionBaseOperation.h"

@interface MJTemplateSessionStopAssetClippingOperation : MJTemplateSessionBaseOperation
{
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
- (void)_updateStatus:(long long)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stopAssetClippingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)boundTemplateId;
- (long long)currentStatus;
- (void)start;
- (void)dealloc;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

