//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPHeadphoneManagerImpl-Protocol.h"

@class NSMutableArray, NSString;

@interface TPIOSHeadphoneManagerImpl : NSObject <ITPHeadphoneManagerImpl>
{
    _Bool _initialized;
    NSMutableArray *_delegateArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMutableArray *delegateArray; // @synthesize delegateArray=_delegateArray;
@property(readonly, nonatomic) _Bool headphoneOn; // @dynamic headphoneOn;
- (void)audioRouteDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)stopInternal;
- (void)startInternal;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

