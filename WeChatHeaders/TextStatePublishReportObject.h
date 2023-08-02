//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface TextStatePublishReportObject : NSObject <PBCoding>
{
    _Bool _hasEditedSourceDescription;
    _Bool _hasEditedSourceIcon;
    _Bool _hasEditedSourceMedia;
    _Bool _hasSelectPosition;
    _Bool _hasSelectBlur;
    _Bool _hasShownGuide;
    _Bool _hasTapGuideKnowButton;
    _Bool _enterPositionAuthorized;
    _Bool _exitPositionAuthorized;
    unsigned int _enterScene;
    unsigned int _serverScene;
    unsigned int _exitScene;
    unsigned int _mediaSource;
    unsigned int _exceedMaxLengthToastCount;
    unsigned int _emptyDescriptionToastCount;
    unsigned int _customIconDescriptionExceedMaxLengthToastCount;
    unsigned int _selectIconCount;
    unsigned int _tapTopicButtonCount;
    unsigned int _tapTakeSightButtonCount;
    unsigned int _tapMediaDeleteActionCount;
    unsigned int _tapMediaChangeActionCount;
    unsigned int _tapMediaTakeSightActionCount;
    unsigned int _tapMediaSelectFromAlbumActionCount;
    unsigned int _tapPositionButtonCount;
    unsigned int _tapPositionLabelCount;
    unsigned int _tapPrivacyButtonCount;
    unsigned int _selectBlurCount;
    unsigned int _deselectBlurCount;
    unsigned int _selectCustomIconCount;
    unsigned int _tapEmoticonBoardOrSearchEmoticonCount;
    unsigned int _tapEmoticonDeleteButtonCount;
    unsigned int _tapEmoticonSearchTabItemCount;
    unsigned int _showCannotAddEmoticonAlertCount;
    unsigned int _showCannotAddTextEmojiAlertCount;
    unsigned int _enterInterfaceOrientation;
    unsigned int _exitInterfaceOrientation;
    unsigned int _focusStatusOption;
    unsigned int _qrCodeScene;
    unsigned int _descriptionLength;
    unsigned int _privacyOption;
    unsigned int _strictMode;
    unsigned int _style;
    unsigned int _tapCustomIconCount;
    unsigned int _tapCustomIconSwitchCount;
    unsigned int _visibility;
    NSString *_sessionId;
    NSString *_passthroughIconId;
    long long _enterTime;
    NSMutableArray *_iconIdList;
    long long _exitTime;
    NSString *_topicId;
    NSString *_textStateId;
    long long _videoOriginLength;
    long long _videoCroppedLength;
    long long _mediaSize;
    NSString *_sourceId;
    NSString *_sourceActivityId;
    NSString *_sourceName;
    NSString *_sourceIconURL;
    long long _originMediaSize;
    NSString *_originMediaMd5;
    NSMutableArray *_finderPickerSessionIdList;
    NSString *_weRunInfo;
    NSString *_payInfo;
    NSMutableArray *_selectedIconReportItemList;
    NSString *_selectedEmoticonMd5;
    NSString *_referenceUsername;
    NSString *_referenceTextStateId;
    NSString *_publishId;
    NSString *_customIconDescription;
    NSString *_recentUseIconListReportString;
}

+ (_Bool)isCurrentLandscape;
+ (void)initialize;
+ (void)PBArrayAdd_visibility;
+ (void)PBArrayAdd_exitPositionAuthorized;
+ (void)PBArrayAdd_enterPositionAuthorized;
+ (void)PBArrayAdd_serverScene;
+ (void)PBArrayAdd_selectedIconReportItemList;
+ (void)PBArrayAdd_recentUseIconListReportString;
+ (void)PBArrayAdd_tapCustomIconSwitchCount;
+ (void)PBArrayAdd_tapCustomIconCount;
+ (void)PBArrayAdd_style;
+ (void)PBArrayAdd_passthroughIconId;
+ (void)PBArrayAdd_payInfo;
+ (void)PBArrayAdd_focusStatusOption;
+ (void)PBArrayAdd_weRunInfo;
+ (void)PBArrayAdd_finderPickerSessionIdList;
+ (void)PBArrayAdd_exitInterfaceOrientation;
+ (void)PBArrayAdd_enterInterfaceOrientation;
+ (void)PBArrayAdd_showCannotAddTextEmojiAlertCount;
+ (void)PBArrayAdd_showCannotAddEmoticonAlertCount;
+ (void)PBArrayAdd_tapEmoticonSearchTabItemCount;
+ (void)PBArrayAdd_tapEmoticonDeleteButtonCount;
+ (void)PBArrayAdd_tapEmoticonBoardOrSearchEmoticonCount;
+ (void)PBArrayAdd_qrCodeScene;
+ (void)PBArrayAdd_originMediaMd5;
+ (void)PBArrayAdd_originMediaSize;
+ (void)PBArrayAdd_referenceTextStateId;
+ (void)PBArrayAdd_referenceUsername;
+ (void)PBArrayAdd_tapMediaSelectFromAlbumActionCount;
+ (void)PBArrayAdd_tapMediaTakeSightActionCount;
+ (void)PBArrayAdd_strictMode;
+ (void)PBArrayAdd_hasTapGuideKnowButton;
+ (void)PBArrayAdd_hasShownGuide;
+ (void)PBArrayAdd_selectCustomIconCount;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_publishId;
+ (void)PBArrayAdd_hasSelectBlur;
+ (void)PBArrayAdd_privacyOption;
+ (void)PBArrayAdd_hasSelectPosition;
+ (void)PBArrayAdd_hasEditedSourceMedia;
+ (void)PBArrayAdd_hasEditedSourceIcon;
+ (void)PBArrayAdd_hasEditedSourceDescription;
+ (void)PBArrayAdd_descriptionLength;
+ (void)PBArrayAdd_deselectBlurCount;
+ (void)PBArrayAdd_selectBlurCount;
+ (void)PBArrayAdd_tapPrivacyButtonCount;
+ (void)PBArrayAdd_tapPositionLabelCount;
+ (void)PBArrayAdd_tapPositionButtonCount;
+ (void)PBArrayAdd_tapMediaChangeActionCount;
+ (void)PBArrayAdd_tapMediaDeleteActionCount;
+ (void)PBArrayAdd_tapTakeSightButtonCount;
+ (void)PBArrayAdd_tapTopicButtonCount;
+ (void)PBArrayAdd_selectIconCount;
+ (void)PBArrayAdd_emptyDescriptionToastCount;
+ (void)PBArrayAdd_exceedMaxLengthToastCount;
+ (void)PBArrayAdd_sourceIconURL;
+ (void)PBArrayAdd_sourceName;
+ (void)PBArrayAdd_sourceActivityId;
+ (void)PBArrayAdd_sourceId;
+ (void)PBArrayAdd_mediaSource;
+ (void)PBArrayAdd_mediaSize;
+ (void)PBArrayAdd_videoCroppedLength;
+ (void)PBArrayAdd_videoOriginLength;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_exitTime;
+ (void)PBArrayAdd_exitScene;
+ (void)PBArrayAdd_iconIdList;
+ (void)PBArrayAdd_enterTime;
+ (void)PBArrayAdd_enterScene;
+ (void)PBArrayAdd_sessionId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) _Bool exitPositionAuthorized; // @synthesize exitPositionAuthorized=_exitPositionAuthorized;
@property(nonatomic) _Bool enterPositionAuthorized; // @synthesize enterPositionAuthorized=_enterPositionAuthorized;
@property(retain, nonatomic) NSString *recentUseIconListReportString; // @synthesize recentUseIconListReportString=_recentUseIconListReportString;
@property(nonatomic) unsigned int tapCustomIconSwitchCount; // @synthesize tapCustomIconSwitchCount=_tapCustomIconSwitchCount;
@property(nonatomic) unsigned int tapCustomIconCount; // @synthesize tapCustomIconCount=_tapCustomIconCount;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int strictMode; // @synthesize strictMode=_strictMode;
@property(nonatomic) _Bool hasTapGuideKnowButton; // @synthesize hasTapGuideKnowButton=_hasTapGuideKnowButton;
@property(nonatomic) _Bool hasShownGuide; // @synthesize hasShownGuide=_hasShownGuide;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(nonatomic) _Bool hasSelectBlur; // @synthesize hasSelectBlur=_hasSelectBlur;
@property(nonatomic) unsigned int privacyOption; // @synthesize privacyOption=_privacyOption;
@property(nonatomic) _Bool hasSelectPosition; // @synthesize hasSelectPosition=_hasSelectPosition;
@property(retain, nonatomic) NSString *referenceTextStateId; // @synthesize referenceTextStateId=_referenceTextStateId;
@property(retain, nonatomic) NSString *referenceUsername; // @synthesize referenceUsername=_referenceUsername;
@property(retain, nonatomic) NSString *selectedEmoticonMd5; // @synthesize selectedEmoticonMd5=_selectedEmoticonMd5;
@property(retain, nonatomic) NSMutableArray *selectedIconReportItemList; // @synthesize selectedIconReportItemList=_selectedIconReportItemList;
@property(nonatomic) _Bool hasEditedSourceMedia; // @synthesize hasEditedSourceMedia=_hasEditedSourceMedia;
@property(nonatomic) _Bool hasEditedSourceIcon; // @synthesize hasEditedSourceIcon=_hasEditedSourceIcon;
@property(nonatomic) _Bool hasEditedSourceDescription; // @synthesize hasEditedSourceDescription=_hasEditedSourceDescription;
@property(nonatomic) unsigned int descriptionLength; // @synthesize descriptionLength=_descriptionLength;
@property(retain, nonatomic) NSString *payInfo; // @synthesize payInfo=_payInfo;
@property(retain, nonatomic) NSString *weRunInfo; // @synthesize weRunInfo=_weRunInfo;
@property(nonatomic) unsigned int qrCodeScene; // @synthesize qrCodeScene=_qrCodeScene;
@property(nonatomic) unsigned int focusStatusOption; // @synthesize focusStatusOption=_focusStatusOption;
@property(nonatomic) unsigned int exitInterfaceOrientation; // @synthesize exitInterfaceOrientation=_exitInterfaceOrientation;
@property(nonatomic) unsigned int enterInterfaceOrientation; // @synthesize enterInterfaceOrientation=_enterInterfaceOrientation;
@property(nonatomic) unsigned int showCannotAddTextEmojiAlertCount; // @synthesize showCannotAddTextEmojiAlertCount=_showCannotAddTextEmojiAlertCount;
@property(nonatomic) unsigned int showCannotAddEmoticonAlertCount; // @synthesize showCannotAddEmoticonAlertCount=_showCannotAddEmoticonAlertCount;
@property(nonatomic) unsigned int tapEmoticonSearchTabItemCount; // @synthesize tapEmoticonSearchTabItemCount=_tapEmoticonSearchTabItemCount;
@property(nonatomic) unsigned int tapEmoticonDeleteButtonCount; // @synthesize tapEmoticonDeleteButtonCount=_tapEmoticonDeleteButtonCount;
@property(nonatomic) unsigned int tapEmoticonBoardOrSearchEmoticonCount; // @synthesize tapEmoticonBoardOrSearchEmoticonCount=_tapEmoticonBoardOrSearchEmoticonCount;
@property(retain, nonatomic) NSMutableArray *finderPickerSessionIdList; // @synthesize finderPickerSessionIdList=_finderPickerSessionIdList;
@property(retain, nonatomic) NSString *originMediaMd5; // @synthesize originMediaMd5=_originMediaMd5;
@property(nonatomic) long long originMediaSize; // @synthesize originMediaSize=_originMediaSize;
@property(nonatomic) unsigned int selectCustomIconCount; // @synthesize selectCustomIconCount=_selectCustomIconCount;
@property(nonatomic) unsigned int deselectBlurCount; // @synthesize deselectBlurCount=_deselectBlurCount;
@property(nonatomic) unsigned int selectBlurCount; // @synthesize selectBlurCount=_selectBlurCount;
@property(nonatomic) unsigned int tapPrivacyButtonCount; // @synthesize tapPrivacyButtonCount=_tapPrivacyButtonCount;
@property(nonatomic) unsigned int tapPositionLabelCount; // @synthesize tapPositionLabelCount=_tapPositionLabelCount;
@property(nonatomic) unsigned int tapPositionButtonCount; // @synthesize tapPositionButtonCount=_tapPositionButtonCount;
@property(nonatomic) unsigned int tapMediaSelectFromAlbumActionCount; // @synthesize tapMediaSelectFromAlbumActionCount=_tapMediaSelectFromAlbumActionCount;
@property(nonatomic) unsigned int tapMediaTakeSightActionCount; // @synthesize tapMediaTakeSightActionCount=_tapMediaTakeSightActionCount;
@property(nonatomic) unsigned int tapMediaChangeActionCount; // @synthesize tapMediaChangeActionCount=_tapMediaChangeActionCount;
@property(nonatomic) unsigned int tapMediaDeleteActionCount; // @synthesize tapMediaDeleteActionCount=_tapMediaDeleteActionCount;
@property(nonatomic) unsigned int tapTakeSightButtonCount; // @synthesize tapTakeSightButtonCount=_tapTakeSightButtonCount;
@property(nonatomic) unsigned int tapTopicButtonCount; // @synthesize tapTopicButtonCount=_tapTopicButtonCount;
@property(nonatomic) unsigned int selectIconCount; // @synthesize selectIconCount=_selectIconCount;
@property(nonatomic) unsigned int customIconDescriptionExceedMaxLengthToastCount; // @synthesize customIconDescriptionExceedMaxLengthToastCount=_customIconDescriptionExceedMaxLengthToastCount;
@property(nonatomic) unsigned int emptyDescriptionToastCount; // @synthesize emptyDescriptionToastCount=_emptyDescriptionToastCount;
@property(nonatomic) unsigned int exceedMaxLengthToastCount; // @synthesize exceedMaxLengthToastCount=_exceedMaxLengthToastCount;
@property(retain, nonatomic) NSString *sourceIconURL; // @synthesize sourceIconURL=_sourceIconURL;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceActivityId; // @synthesize sourceActivityId=_sourceActivityId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int mediaSource; // @synthesize mediaSource=_mediaSource;
@property(nonatomic) long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) long long videoCroppedLength; // @synthesize videoCroppedLength=_videoCroppedLength;
@property(nonatomic) long long videoOriginLength; // @synthesize videoOriginLength=_videoOriginLength;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) unsigned int exitScene; // @synthesize exitScene=_exitScene;
@property(retain, nonatomic) NSMutableArray *iconIdList; // @synthesize iconIdList=_iconIdList;
@property(nonatomic) long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) unsigned int serverScene; // @synthesize serverScene=_serverScene;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *passthroughIconId; // @synthesize passthroughIconId=_passthroughIconId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)report;
- (void)exitWithScene:(unsigned int)arg1;
- (void)setRecentUseIconList:(id)arg1;
- (void)tapCustomIconSwitch;
- (void)tapCustomIcon;
- (void)setFinderPickerSessionId:(id)arg1;
- (void)setExitInterfaceOrientation;
- (void)selectCustomIcon;
- (void)serverReturnWithId:(id)arg1 topicId:(id)arg2;
- (void)showCannotAddTextEmojiAlert;
- (void)showCannotAddEmoticonAlert;
- (void)tapEmoticonSearchTabItem;
- (void)tapEmoticonDeleteButton;
- (void)tapEmoticonBoardOrSearchEmoticon;
- (void)deselectBlur;
- (void)selectBlur;
- (void)tapPrivacyButton;
- (void)tapPositionLabel;
- (void)tapPositionButton;
- (void)tapMediaSelectFromAlbumAction;
- (void)tapMediaTakeSightAction;
- (void)tapMediaChangeAction;
- (void)tapMediaDeleteAction;
- (void)tapTakeSightButton;
- (void)tapTopicButton;
- (void)selectIcon:(id)arg1 isFromRecentUse:(_Bool)arg2;
- (void)tapSelectIconButton;
- (void)showCustomIconDescriptionExceedMaxLengthToast;
- (void)showEmptyDescriptionToast;
- (void)showExceedMaxLengthToast;
- (void)setSourceInfo:(id)arg1;
- (void)setOriginMediaSize:(long long)arg1 originMediaMd5:(id)arg2;
- (void)setMediaSize:(long long)arg1 mediaSource:(unsigned int)arg2;
- (void)setVideoOriginLength:(long long)arg1 videoCroppedLength:(long long)arg2;
- (void)enterWithScene:(unsigned int)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
