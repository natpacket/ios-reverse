//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QMapNetworkStatProcessor;

@interface QMapNetworkProcessorQueue : NSObject
{
    QMapNetworkStatProcessor *_processor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMapNetworkStatProcessor *processor; // @synthesize processor=_processor;
- (void)onResponse:(id)arg1 error:(id)arg2 request:(id)arg3 data:(id)arg4;
- (void)onRequest:(id)arg1;
- (void)unregisterRules:(id)arg1;
- (void)registerRules:(id)arg1;
- (id)init;

@end

