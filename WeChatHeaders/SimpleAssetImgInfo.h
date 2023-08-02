//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SimpleImgInfo.h"

@class AssetSetItemDataField, NSString;

@interface SimpleAssetImgInfo : SimpleImgInfo
{
    _Bool _isDownloadingImg;
    _Bool _isPreloadingVideo;
    NSString *_nsAggreateName;
    AssetSetItemDataField *_data;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreloadingVideo; // @synthesize isPreloadingVideo=_isPreloadingVideo;
@property(nonatomic) _Bool isDownloadingImg; // @synthesize isDownloadingImg=_isDownloadingImg;
@property(retain, nonatomic) AssetSetItemDataField *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *nsAggreateName; // @synthesize nsAggreateName=_nsAggreateName;
- (void)startVideoPreload:(unsigned int)arg1;
- (void)startDownloadMidImgIfNeed;
- (id)getThumbPath;
- (long long)getRawFileSize;
- (id)getRawFilePath;
- (_Bool)hasRawFile;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (unsigned int)getVideoTime;
- (_Bool)isAssetSet;
- (id)getSightPath;
- (id)getImgPath;

@end

