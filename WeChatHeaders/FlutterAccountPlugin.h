//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterAccountHost-Protocol.h"
#import "IHeadImageExt-Protocol.h"
#import "MMFlutterPlugin-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FlutterAccountPlugin : NSObject <IHeadImageExt, MessageObserverDelegate, MMFlutterPlugin, FlutterAccountHost>
{
    NSMutableDictionary *_m_map;
    NSMutableDictionary *_m_user_name_map;
    NSMutableDictionary *_headImgDownloadMap;
    NSMutableArray *_m_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_contacts; // @synthesize m_contacts=_m_contacts;
@property(retain, nonatomic) NSMutableDictionary *headImgDownloadMap; // @synthesize headImgDownloadMap=_headImgDownloadMap;
@property(readonly, nonatomic) NSMutableDictionary *m_user_name_map; // @synthesize m_user_name_map=_m_user_name_map;
@property(readonly, nonatomic) NSMutableDictionary *m_map; // @synthesize m_map=_m_map;
- (void)onHeadImageChange:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)getRecentForwardUserInfoMaxCount:(id)arg1 ignoreChatRoom:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeForwardUserInfo:(id)arg1 error:(id *)arg2;
- (void)getAvatarPathUsername:(id)arg1 hd:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getUinWithError:(id *)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

