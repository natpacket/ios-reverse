//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface FavoritesUtil : MMObject
{
}

+ (void)getFavSnackMainTip:(id *)arg1 operationTip:(id *)arg2 withFavItem:(id)arg3;
+ (id)getCapacityString:(unsigned long long)arg1;
+ (id)genFavCheckIdForMessage:(id)arg1 WCDataItem:(id)arg2 FavItem:(id)arg3 FavDataItem:(id)arg4;
+ (id)getContactDisplayName:(id)arg1;
+ (id)getDisplaySourceNameForItem:(id)arg1 delegate:(id)arg2;
+ (id)getNameTailForItem:(id)arg1;
+ (id)getLogoImageForItem:(id)arg1;
+ (void)tryRemoveChatVoiceInDataList:(id)arg1 forUsr:(id)arg2;
+ (void)tryRemoveChatVoiceInContentStorage:(id)arg1;
+ (id)makeTxtTypeItemDataWithDescription:(id)arg1;
+ (id)convertRecordDataListToNoteDataList:(id)arg1;
+ (id)convertDataToNoteData:(id)arg1;
+ (id)ConvertFavItemToNoteFavItem:(id)arg1;
+ (_Bool)canConvertToNoteFavItem:(id)arg1;
+ (int)getConvertWebviewSourceType:(int)arg1;
+ (int)getFavChatSourceTypeOfUsername:(id)arg1;
+ (int)getFavChatSourceTypeOfMes:(id)arg1;
+ (_Bool)addMessageTo:(id)arg1 withSourceDataId:(id)arg2 withFavItem:(id)arg3;
+ (_Bool)noteCanSaveAsImage:(id)arg1;
+ (id)getFavClipMidImagePath:(id)arg1;
+ (id)getFavMidImagePath:(id)arg1;
+ (id)getContactHeadImage:(id)arg1;
+ (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
+ (id)genAppShareItemFromFavURLItem:(id)arg1;
+ (id)genAppShareItemFromFavData:(id)arg1;
+ (id)genAppShareItemFromFavItem:(id)arg1;
+ (id)genMinimizationTaskDataFromFavItem:(id)arg1;
+ (id)getNoteFirstThumbPath:(id)arg1;
+ (unsigned long long)getMaxDataSize:(id)arg1;
+ (void)calFavDataIllegalTypeAndSize:(id)arg1 fromMsg:(id)arg2;
+ (id)getWebpageFavItemUrl:(id)arg1;
+ (id)getFavTextCellText:(id)arg1 needBreakLines:(_Bool)arg2;
+ (id)getFavTextCellText:(id)arg1;
+ (id)getDataSourceId:(id)arg1;
+ (id)ConvertFavItem2FinderDataItem:(id)arg1;
+ (id)ConvertFinderDateItem2FavItem:(id)arg1;
+ (id)ConvertFinderContentVM2FavItem:(id)arg1;
+ (id)ConvertNoteContentObj2WCUploadTask:(id)arg1;
+ (id)ConvertNoteFavItem2WCUploadTask:(id)arg1;
+ (id)ConvertNoteFavItem2WCNoteInfo:(id)arg1;
+ (id)ConvertImg2WCUploadTask:(id)arg1;
+ (id)ConvertImgFavData2WCUploadTask:(id)arg1;
+ (id)ConvertImgFavItem2WCUploadTask:(id)arg1;
+ (id)ConvertSightFavItem2VideoInfo:(id)arg1;
+ (id)ConvertWeAppFavItem2MsgWrap:(id)arg1;
+ (id)ConvertTVFavItem2MsgWrap:(id)arg1;
+ (id)ConvertGoodsFavItem2MsgWrap:(id)arg1;
+ (id)ConvertWSVideoFavItem2MsgWrap:(id)arg1;
+ (id)ConvertWebPageFavItem2MsgWrap:(id)arg1;
+ (id)ConvertMVFavItem2MsgWrap:(id)arg1;
+ (id)ConvertMusicFavItem2MsgWrap:(id)arg1;
+ (id)ConvertTingListFavItem2MsgWrap:(id)arg1;
+ (id)ConvertTingAudioFavItem2MsgWrap:(id)arg1;
+ (id)ConvertLocFavItem2MsgWrap:(id)arg1;
+ (id)ConvertVideoFavItem2VideoInfo:(id)arg1;
+ (id)ConvertVideoFavItem2MsgWrap:(id)arg1;
+ (id)ConvertFileFavItem2MsgWrap:(id)arg1;
+ (id)ConvertImg2MsgWrap:(id)arg1;
+ (id)ConvertImgFavData2MsgWrap:(id)arg1;
+ (id)ConvertImgFavItem2MsgWrap:(id)arg1;
+ (id)ConvertTextFavItem2MsgWrap:(id)arg1;
+ (id)ConvertSNSNoteShare2FavItem:(id)arg1;
+ (id)ConvertWSVideoModel2FavItem:(id)arg1;
+ (id)ConvertMsgList2FavItem:(id)arg1;
+ (id)ConvertAssetMsg2FavItem:(id)arg1;
+ (id)ConvertMultiReaderMsg2FavItem:(id)arg1;
+ (id)ConvertRecordMsg:(id)arg1 toFavDataListWithDataList:(id)arg2 withParentSourceId:(id)arg3;
+ (id)ConvertRecordMsg2FavItem:(id)arg1;
+ (id)ConvertMsgRecordNoteItem:(id)arg1 inMsg:(id)arg2;
+ (id)ConvertTVWC2FavItem:(id)arg1;
+ (id)ConvertTVMsg2FavItem:(id)arg1;
+ (id)ConvertTVDetail2FavItem:(id)arg1 Desc:(id)arg2 ThumbUrl:(id)arg3 TVInfo:(id)arg4 appId:(id)arg5;
+ (id)ConvertProductWC2FavItem:(id)arg1;
+ (id)ConvertProductMsg2FavItem:(id)arg1;
+ (id)ConvertProductDetail2FavItem:(id)arg1 Desc:(id)arg2 ThumbUrl:(id)arg3 ProductInfo:(id)arg4 appId:(id)arg5;
+ (id)ConvertCanvasPage2FavItem:(id)arg1 desc:(id)arg2 WebUrl:(id)arg3 CanvasPageInfo:(id)arg4 FromUser:(id)arg5 EventId:(id)arg6 AppId:(id)arg7 ThumbUrl:(id)arg8 ThumbPath:(id)arg9 SrcCreateTime:(unsigned int)arg10;
+ (id)ConvertCanvasPage2FavItem:(id)arg1 desc:(id)arg2 WebUrl:(id)arg3 CanvasPageInfo:(id)arg4 FromUser:(id)arg5 EventId:(id)arg6 AppId:(id)arg7 ThumbUrl:(id)arg8 SrcCreateTime:(unsigned int)arg9;
+ (id)ConvertStreamVideoMsg2FavItem:(id)arg1;
+ (id)ConvertVideoSNS2FavItem:(id)arg1 desc:(id)arg2 WebUrl:(id)arg3 FromUser:(id)arg4 EventId:(id)arg5 MediaId:(id)arg6 AppId:(id)arg7 ThumbUrl:(id)arg8 SrcCreateTime:(unsigned int)arg9;
+ (id)ConvertWCSightItem2FavItem:(id)arg1 withEventID:(id)arg2 andCreateTime:(unsigned int)arg3 andFromUser:(id)arg4;
+ (id)ConvertSightMsg2FavItem:(id)arg1;
+ (id)ConvertVideoMsg2FavItem:(id)arg1;
+ (id)ConvertFileMail2FavItem:(id)arg1 Attach:(id)arg2;
+ (id)ConvertFileMsg2FavItem:(id)arg1;
+ (id)ConvertVoiceMsg2FavItem:(id)arg1;
+ (id)ConvertLocationMap2FavItem:(id)arg1 Username:(id)arg2 msgId:(id)arg3;
+ (id)ConvertLocationMsg2FavItem:(id)arg1;
+ (id)ConvertFinderMusicInfo2FavoritesItem:(id)arg1;
+ (id)ConvertOpenMVMsg2FavItem:(id)arg1 shareItem:(id)arg2 imageData:(id)arg3 favSourceType:(int)arg4;
+ (id)ConvertMVMsg2FavItem:(id)arg1;
+ (id)ConvertTingList2FavItem:(id)arg1;
+ (id)ConvertTingAudio2FavItem:(id)arg1;
+ (id)ConvertMusicShake2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 ThumbUrl:(id)arg6 Lyric:(id)arg7 AlbumUrl:(id)arg8;
+ (id)ConvertMusicBanner2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 ThumbUrl:(id)arg6 Lyric:(id)arg7 AlbumUrl:(id)arg8;
+ (id)ConvertMVSNS2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 FromUser:(id)arg6 EventId:(id)arg7 MediaId:(id)arg8 AppId:(id)arg9 ThumbUrl:(id)arg10 SrcCreateTime:(unsigned int)arg11 songLyric:(id)arg12 songAlbumUrl:(id)arg13 musicShareItem:(id)arg14;
+ (id)ConvertMusicSNS2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 FromUser:(id)arg6 EventId:(id)arg7 MediaId:(id)arg8 AppId:(id)arg9 ThumbUrl:(id)arg10 SrcCreateTime:(unsigned int)arg11 songLyric:(id)arg12 songAlbumUrl:(id)arg13;
+ (id)ConvertMusicMsg2FavItem:(id)arg1;
+ (id)ConvertTingList2FavItem:(id)arg1 desc:(id)arg2 FromUser:(id)arg3 EventId:(id)arg4 MediaId:(id)arg5 AppId:(id)arg6 ThumbUrl:(id)arg7 SrcCreateTime:(unsigned int)arg8 tingCategoryItem:(id)arg9;
+ (id)ConvertTingAudio2FavItem:(id)arg1 Singer:(id)arg2 WebUrl:(id)arg3 LowUrl:(id)arg4 DataUrl:(id)arg5 FromUser:(id)arg6 EventId:(id)arg7 MediaId:(id)arg8 AppId:(id)arg9 ThumbUrl:(id)arg10 SrcCreateTime:(unsigned int)arg11 songLyric:(id)arg12 songAlbumUrl:(id)arg13 musicShareItem:(id)arg14 tingListenItem:(id)arg15;
+ (id)ConvertImgListPost2FavItem:(id)arg1 ArrThumbPath:(id)arg2;
+ (id)ConvertImgPost2FavItem:(id)arg1 ThumbPath:(id)arg2;
+ (id)ConvertImgSNS2FavItem:(id)arg1 ThumbUrl:(id)arg2 SourceDataPath:(id)arg3 FromUser:(id)arg4 EventId:(id)arg5 mediaId:(id)arg6 AppId:(id)arg7 SrcCreateTime:(unsigned int)arg8;
+ (id)ConvertImgMsg2FavItem:(id)arg1;
+ (id)ConvertWeAppFile2FavItemWithFilePath:(id)arg1 fileName:(id)arg2 fileExt:(id)arg3;
+ (id)ConvertWeAppVideo2FavItem:(id)arg1 ext:(id)arg2;
+ (id)ConvertWeAppSNS2FavItem:(id)arg1;
+ (id)ConvertWeAppMsg2FavItem:(id)arg1;
+ (id)ConvertWeAppUrl2FavItem:(id)arg1 appid:(id)arg2 version:(unsigned int)arg3 Title:(id)arg4 Desc:(id)arg5 iconUrl:(id)arg6 ThumbUrl:(id)arg7 PagePath:(id)arg8 DebugMode:(unsigned int)arg9 sourceType:(unsigned int)arg10 sourceDisplayName:(id)arg11 defaultLink:(id)arg12 disableForward:(_Bool)arg13 messageExtraData:(id)arg14 subType:(unsigned int)arg15;
+ (id)ConvertUrlWeb2FavItem:(id)arg1 Title:(id)arg2 Desc:(id)arg3 ThumbUrl:(id)arg4 AppId:(id)arg5 UserName:(id)arg6 publisherUsername:(id)arg7 PublishId:(id)arg8 appShareItem:(id)arg9;
+ (id)ConvertFinderFeedMsg2FavItem:(id)arg1;
+ (id)ConvertCanvasUrlSNS2FavItem:(id)arg1 Title:(id)arg2 EventId:(id)arg3 FromUser:(id)arg4 AppId:(id)arg5 ThumbUrl:(id)arg6 SrcCreateTime:(unsigned int)arg7 CanvasInfoXml:(id)arg8;
+ (id)ConvertUrlSNS2FavItem:(id)arg1 Title:(id)arg2 EventId:(id)arg3 FromUser:(id)arg4 AppId:(id)arg5 ThumbUrl:(id)arg6 SrcCreateTime:(unsigned int)arg7;
+ (id)ConvertUrlSNS2FavItem:(id)arg1 Desc:(id)arg2 Title:(id)arg3 EventId:(id)arg4 FromUser:(id)arg5 AppId:(id)arg6 ThumbUrl:(id)arg7 SrcCreateTime:(unsigned int)arg8 ThumbPath:(id)arg9 wcDataItem:(id)arg10;
+ (id)ConvertUrlSNS2FavItem:(id)arg1 Title:(id)arg2 EventId:(id)arg3 FromUser:(id)arg4 AppId:(id)arg5 ThumbUrl:(id)arg6 SrcCreateTime:(unsigned int)arg7 ThumbPath:(id)arg8;
+ (id)ConvertUrlReader2FavItem:(id)arg1 Url:(id)arg2;
+ (id)covertFavAppMsgShareItem2CMsgShareItem:(id)arg1;
+ (void)updateFavShareItem:(id)arg1 withAppMsgShareItem:(id)arg2;
+ (id)convertCMsgWrap2FavShareItem:(id)arg1;
+ (id)ConvertUrlMsg2FavItem:(id)arg1;
+ (id)ConvertTextPost2FavItem:(id)arg1;
+ (id)ConvertTextSNS2FavItem:(id)arg1;
+ (id)ConvertTextMsg2FavItem:(id)arg1;
+ (id)ConvertTextMsg2FavItem:(id)arg1 Text:(id)arg2;
+ (id)ConvertNotSupportMsg2FavItem:(id)arg1 Text:(id)arg2;
+ (id)ConvertWebPage2FavItem:(id)arg1 FavSourceId:(id)arg2 FromUrl:(id)arg3;
+ (id)ConvertExcerptsToFavItem:(id)arg1 realUrl:(id)arg2 itemShowType:(unsigned int)arg3 pageKey:(id)arg4 title:(id)arg5 name:(id)arg6 cover:(id)arg7 icon:(id)arg8 userName:(id)arg9;
+ (_Bool)delExcerptFromFavItem:(id)arg1 with:(id)arg2;
+ (id)ConvertMsgToFavItem:(id)arg1;

@end
