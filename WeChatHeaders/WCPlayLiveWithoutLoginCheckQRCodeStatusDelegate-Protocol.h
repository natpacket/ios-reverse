//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveContact, FinderLiveInfo, WCPlayLiveWithoutLoginCheckQRCodeStatusCGI;

@protocol WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate <NSObject>
- (void)onCheckQRCodeStatusFail;
- (void)onCheckQRCodeStatusSuccuss:(WCPlayLiveWithoutLoginCheckQRCodeStatusCGI *)arg1 nextPollingTs:(double)arg2 liveContact:(FinderLiveContact *)arg3 liveInfo:(FinderLiveInfo *)arg4;
@end

