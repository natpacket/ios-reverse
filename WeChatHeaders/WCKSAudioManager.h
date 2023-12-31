//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "KSAudioLogProtocol-Protocol.h"
#import "KSAudioPlayerUserDefineProtocol-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface WCKSAudioManager : MMUserService <KSAudioLogProtocol, MMServiceProtocol, KSAudioPlayerUserDefineProtocol>
{
    _Bool _useCronetDownloader;
}

@property(nonatomic) _Bool useCronetDownloader; // @synthesize useCronetDownloader=_useCronetDownloader;
- (id)limitNetParam;
- (unsigned int)downloadRetryCnt;
- (id)createAudioDownloader;
- (id)createUserAudioProcessor:(id)arg1;
- (_Bool)isNetOk;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
- (void)cleanUpCache;
- (id)cacheRootPath;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

