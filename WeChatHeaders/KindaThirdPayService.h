//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKThirdPayService-Protocol.h"
#import "ThirdPayExt-Protocol.h"

@class MMVoidITransmitKvDataCallback, NSString;

@interface KindaThirdPayService : NSObject <ThirdPayExt, MMKThirdPayService>
{
    MMVoidITransmitKvDataCallback *_resultCallback;
    NSString *_dcepOrderNo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dcepOrderNo; // @synthesize dcepOrderNo=_dcepOrderNo;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *resultCallback; // @synthesize resultCallback=_resultCallback;
- (void)ThirdPayCallback:(id)arg1;
- (void)handleApplicationNotification:(id)arg1;
- (_Bool)isDcepAppInstalled;
- (void)startDcepPayImpl:(id)arg1 requestUrl:(id)arg2 extra:(id)arg3 resultCallback:(id)arg4;
- (_Bool)isYunShanFuAppInstalled;
- (void)startYunShanFuPayImpl:(id)arg1 resultCallback:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

