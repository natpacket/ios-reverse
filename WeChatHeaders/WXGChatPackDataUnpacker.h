//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WXGChatPackDataUnpackerDelegate;

@interface WXGChatPackDataUnpacker : NSObject
{
    _Bool _bDataIsZip;
    _Bool _bUnpacking;
    id <WXGChatPackDataUnpackerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_unpackQueue;
    NSString *_unpackDestination;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *unpackDestination; // @synthesize unpackDestination=_unpackDestination;
@property _Bool bUnpacking; // @synthesize bUnpacking=_bUnpacking;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *unpackQueue; // @synthesize unpackQueue=_unpackQueue;
@property(nonatomic) _Bool bDataIsZip; // @synthesize bDataIsZip=_bDataIsZip;
@property(nonatomic) __weak id <WXGChatPackDataUnpackerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)p_importMsgFromFolder:(id)arg1;
- (void)startUnpackData:(id)arg1;
- (void)stopUnpack;
- (void)mainThreadSyncProgress:(float)arg1;
- (void)mainThreadCallDelegate:(_Bool)arg1;
- (id)init;

@end

