//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol DownloadVoiceDelegate <NSObject>

@optional
- (void)onCDNDownloadFail:(NSString *)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(NSString *)arg5;
- (void)OnRecvData:(NSString *)arg1 MesLocalID:(unsigned int)arg2 n64MesSvrID:(long long)arg3 CreateTime:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 Offset:(unsigned int)arg6 Len:(unsigned int)arg7 Data:(NSData *)arg8 EndFlag:(unsigned int)arg9 ErrNo:(unsigned int)arg10;
@end
