//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAsset.h"

#import "GameHaowanAsset-Protocol.h"

@class NSString;
@protocol GameHaowanAsset;

@interface MMAssetForGameHaowan : MMAsset <GameHaowanAsset>
{
    MMAsset<GameHaowanAsset> *_impl;
}

- (void).cxx_destruct;
- (id)getCreatedDate;
- (struct CGSize)getImageRatioSize;
- (void)stopICloudActivity;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (_Bool)getIsEdited;
- (id)videoDuration;
- (_Bool)isVideo;
- (_Bool)isPicture;
- (_Bool)isGif;
- (id)tipForLoadingUncomplete;
- (id)getThumbnail;
- (id)getThumbImage;
- (id)assetUrl;
- (id)videoItem;
- (_Bool)isOnlineVideo;
- (id)appId;
- (id)gameName;
- (id)subtitle;
- (id)title;
- (id)initWithAssetImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

