//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXLiteAVDecoderFactoryInterface-Protocol.h"

@class NSString;

@interface TXLiveExternalDecoderFactoryWrapper : NSObject <TXLiteAVDecoderFactoryInterface>
{
    id _decoderFactory;
}

- (void).cxx_destruct;
- (void)destoryAVCDecoder:(void *)arg1;
- (void *)createAVCDecoder;
- (void)destroyHEVCDecoder:(void *)arg1;
- (void *)createHEVCDecoder;
- (id)initWithDecoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

