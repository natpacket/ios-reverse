//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderJumpInfoProtocol-Protocol.h"

@class NSString;

@interface WCFinderJumpInfoBaseModel : NSObject <WCFinderJumpInfoProtocol>
{
}

- (void)jumpToLiteApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToTemplateSearchPage:(id)arg1 fromVC:(id)arg2;
- (void)jumpToMJTemplateCollectionPage:(id)arg1 fromVC:(id)arg2;
- (void)jumpToAppStoreWithAppStoreParams:(id)arg1 screenType:(int)arg2 fromVC:(id)arg3;
- (void)jumpToSchema:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToNative:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToH5:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpFromVC:(id)arg1 withInfo:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

