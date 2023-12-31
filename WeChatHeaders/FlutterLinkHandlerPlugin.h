//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LinkHandlerApi-Protocol.h"
#import "MMFlutterPlugin-Protocol.h"

@class NSString, WAAppIdToUsernameTransfer;

@interface FlutterLinkHandlerPlugin : NSObject <MMFlutterPlugin, LinkHandlerApi>
{
    WAAppIdToUsernameTransfer *_appIdTransfer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppIdToUsernameTransfer *appIdTransfer; // @synthesize appIdTransfer=_appIdTransfer;
- (void)openWeAppLinkLinkWrap:(id)arg1 error:(id *)arg2;
- (void)openLinkUrl:(id)arg1 error:(id *)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

