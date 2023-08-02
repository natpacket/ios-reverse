//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSData, NSString;

@interface ScanBookMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    unsigned int _scanBookId;
    unsigned int _sessionId;
    unsigned int _opCode;
    NSData *_dataToSend;
    unsigned int _totalLen;
    unsigned int _offset;
    unsigned int _lastPackLen;
    int _imageType;
    int _uploadAction;
    _Bool _isUploading;
    MMTimer *_uploadTimer;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)saveProductItem:(id)arg1;
- (id)getLocalProductItemById:(id)arg1;
- (void)checkUpload;
- (void)stop;
- (void)start;
- (id)getProductItemById:(id)arg1 Scence:(unsigned int)arg2 QRCodeUrl:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
