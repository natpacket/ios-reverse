//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSHalfScreenWebSearchBaseViewController.h"

#import "EmoticonUploaderDelegate-Protocol.h"

@class CEmoticonWrap, EmoticonSearchInMessagePanelReporter, EmoticonUploader, NSDictionary, NSString, StoreEmotionBatchEmojiDownLoadCgi, WCTopicSearchActionLogic;
@protocol EmoticonSearchViewControllerDelegate;

@interface NewEmoticonSearchViewController : WSHalfScreenWebSearchBaseViewController <EmoticonUploaderDelegate>
{
    _Bool _includeCustomEmoji;
    unsigned int _sourceScene;
    id <EmoticonSearchViewControllerDelegate> _delegate;
    NSString *_chatId;
    WCTopicSearchActionLogic *_shareActionLogic;
    CEmoticonWrap *_selectedEmoticon;
    StoreEmotionBatchEmojiDownLoadCgi *_emojiDownloadCgi;
    EmoticonUploader *_emoticonUploader;
    EmoticonSearchInMessagePanelReporter *_reporter;
    unsigned long long _selectEmoticonTimeStamp;
    NSDictionary *_selectEmoticonParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *selectEmoticonParams; // @synthesize selectEmoticonParams=_selectEmoticonParams;
@property(nonatomic) unsigned long long selectEmoticonTimeStamp; // @synthesize selectEmoticonTimeStamp=_selectEmoticonTimeStamp;
@property(retain, nonatomic) EmoticonSearchInMessagePanelReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) EmoticonUploader *emoticonUploader; // @synthesize emoticonUploader=_emoticonUploader;
@property(retain, nonatomic) StoreEmotionBatchEmojiDownLoadCgi *emojiDownloadCgi; // @synthesize emojiDownloadCgi=_emojiDownloadCgi;
@property(retain, nonatomic) CEmoticonWrap *selectedEmoticon; // @synthesize selectedEmoticon=_selectedEmoticon;
@property(nonatomic) _Bool includeCustomEmoji; // @synthesize includeCustomEmoji=_includeCustomEmoji;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic; // @synthesize shareActionLogic=_shareActionLogic;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(nonatomic) __weak id <EmoticonSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportSendEmoticonWithSuccess:(_Bool)arg1;
- (void)onSelectEmoticonFailed;
- (void)onSelectEmoticonFinished;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)startCdnUpload;
- (void)checkAndUploadEmoticon;
- (_Bool)needCheckUpload;
- (void)onEmoticonDownloaded:(id)arg1;
- (void)onSearchVCDisappearAction;
- (void)onSearchVCAppearAction;
- (void)onSetSearchTagResult:(id)arg1;
- (_Bool)shouldMakeTextFieldAutoBecomFirstResponder;
- (_Bool)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (id)initedUrlParams;
- (id)searchBarPlaceholder;
- (id)defaultNavTitle;
- (unsigned long long)localJSBizType;
- (unsigned long long)searchScene;
- (void)onTextFieldChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCurrentTextAndCid:(id)arg1 chatId:(id)arg2 sourceScene:(unsigned int)arg3 includeCustomEmoji:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

