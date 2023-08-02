//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenFinderBaseHandler.h"

@class NSString;

@interface FinderChannelStartLiveHandler : OpenFinderBaseHandler
{
    NSString *_liveJsonInfo;
    NSString *_openId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *liveJsonInfo; // @synthesize liveJsonInfo=_liveJsonInfo;
- (void)showFailErrorMsg:(id)arg1 title:(id)arg2 respErrMsg:(id)arg3 respErrCode:(int)arg4;
- (void)sendStartChannelLiveResp:(id)arg1;
- (void)onAuthDidCancel;
- (void)onAuthDidFail;
- (void)onAuthDidSuccess;
- (void)createOpenUrl;

@end

