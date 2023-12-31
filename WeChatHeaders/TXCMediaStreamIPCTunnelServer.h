//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXCIPCTunnelTransportDelegate-Protocol.h"

@class NSString, TXCIPCTunnelTransport;
@protocol TXCMediaStreamIPCTunnelServerDelegate;

@interface TXCMediaStreamIPCTunnelServer : NSObject <TXCIPCTunnelTransportDelegate>
{
    _Bool _isAccept;
    id <TXCMediaStreamIPCTunnelServerDelegate> _delegate;
    TXCIPCTunnelTransport *_transport;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCIPCTunnelTransport *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <TXCMediaStreamIPCTunnelServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAccept; // @synthesize isAccept=_isAccept;
- (void)onDisconnect;
- (void)onAccept;
- (void)onConnect;
- (void)onReceivePacket:(int)arg1 data:(id)arg2;
- (void)updateEncoderParams:(struct EncodeParamsTypeHeader)arg1;
- (void)sendTime;
- (void)sendVersion;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)requestIFrame;
- (void)sendSamplePacketWithCmd:(unsigned int)arg1;
- (void)startListen;
- (id)initWithAppGroup:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

