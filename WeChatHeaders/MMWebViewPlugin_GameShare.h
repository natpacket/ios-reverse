//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "MMScrollActionSheetDelegate-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"

@class MMScrollActionSheet, NSMutableDictionary, NSString;

@interface MMWebViewPlugin_GameShare : MMWebViewPluginBase <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>
{
    _Bool _needUploadFirst;
    NSMutableDictionary *_dictShareDataForSendAppMessage;
    NSMutableDictionary *_dictShareDataForShareTimeline;
    MMScrollActionSheet *_pluginShareActionSheet;
}

+ (id)shareDataParamsFromShareData:(id)arg1;
+ (_Bool)needForceToPortraitWithShareType:(id)arg1;
+ (id)shareDataFromShareDataParams:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUploadFirst; // @synthesize needUploadFirst=_needUploadFirst;
@property(retain, nonatomic) MMScrollActionSheet *pluginShareActionSheet; // @synthesize pluginShareActionSheet=_pluginShareActionSheet;
@property(retain, nonatomic) NSMutableDictionary *dictShareDataForShareTimeline; // @synthesize dictShareDataForShareTimeline=_dictShareDataForShareTimeline;
@property(retain, nonatomic) NSMutableDictionary *dictShareDataForSendAppMessage; // @synthesize dictShareDataForSendAppMessage=_dictShareDataForSendAppMessage;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)reportGameCenterData:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)doShareWithActionSheetItem:(id)arg1 andShareData:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 andCustomOpButtonData:(id)arg4 needUpdateFirst:(_Bool)arg5 enableQuickSend:(_Bool)arg6 errorMsg:(id *)arg7;
- (_Bool)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 needUpdateFirst:(_Bool)arg4 enableQuickSend:(_Bool)arg5 errorMsg:(id *)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
