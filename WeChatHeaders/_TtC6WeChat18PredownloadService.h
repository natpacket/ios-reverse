//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

@interface _TtC6WeChat18PredownloadService : MMUserService
{
    // Error parsing type: , name: C2C
}

- (void).cxx_destruct;
- (id)init;
- (void)onUserClickRequestFile:(id)arg1;
- (void)onUserClickFile:(id)arg1;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(_Bool)arg2;
- (void)onUserClickImage:(id)arg1 byChangePage:(_Bool)arg2;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnBeginDownloadImage:(id)arg1 HD:(_Bool)arg2 autoDownload:(_Bool)arg3;
- (_Bool)isC2CImageEnabledWithIsChatRoom:(_Bool)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

@end

