//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderHalfRect, FinderHdrMediaSpecList, FinderHlsMediaSpecList, FinderLiveMediaSpec, FinderMediaCodecInfo, FinderObjectScalingInfo, NSMutableArray, NSString;

@interface FinderMedia : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioSpec; // @dynamic audioSpec;
@property(nonatomic) int bitrate; // @dynamic bitrate;
@property(nonatomic) unsigned int cardShowStyle; // @dynamic cardShowStyle;
@property(retain, nonatomic) FinderMediaCodecInfo *codecInfo; // @dynamic codecInfo;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *coverUrlToken; // @dynamic coverUrlToken;
@property(retain, nonatomic) NSString *decodeKey; // @dynamic decodeKey;
@property(nonatomic) unsigned long long duplicateFileSize; // @dynamic duplicateFileSize;
@property(nonatomic) unsigned int dynamicRangeType; // @dynamic dynamicRangeType;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(nonatomic) int fullBitrate; // @dynamic fullBitrate;
@property(retain, nonatomic) NSString *fullCoverUrl; // @dynamic fullCoverUrl;
@property(retain, nonatomic) NSString *fullCoverUrlToken; // @dynamic fullCoverUrlToken;
@property(nonatomic) unsigned int fullFileSize; // @dynamic fullFileSize;
@property(nonatomic) float fullHeight; // @dynamic fullHeight;
@property(retain, nonatomic) NSString *fullMd5Sum; // @dynamic fullMd5Sum;
@property(retain, nonatomic) NSString *fullThumbUrl; // @dynamic fullThumbUrl;
@property(retain, nonatomic) NSString *fullThumbUrlToken; // @dynamic fullThumbUrlToken;
@property(retain, nonatomic) NSString *fullUrl; // @dynamic fullUrl;
@property(retain, nonatomic) NSString *fullUrlToken; // @dynamic fullUrlToken;
@property(nonatomic) float fullWidth; // @dynamic fullWidth;
@property(retain, nonatomic) FinderHalfRect *halfRect; // @dynamic halfRect;
@property(retain, nonatomic) FinderHdrMediaSpecList *hdrSpec; // @dynamic hdrSpec;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) FinderHlsMediaSpecList *hlsSpec; // @dynamic hlsSpec;
@property(nonatomic) unsigned int hotFlag; // @dynamic hotFlag;
@property(retain, nonatomic) NSMutableArray *liveCoverImgs; // @dynamic liveCoverImgs;
@property(retain, nonatomic) FinderLiveMediaSpec *liveSpec; // @dynamic liveSpec;
@property(retain, nonatomic) NSString *md5Sum; // @dynamic md5Sum;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) FinderObjectScalingInfo *scalingInfo; // @dynamic scalingInfo;
@property(retain, nonatomic) NSMutableArray *spec; // @dynamic spec;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *thumbUrlToken; // @dynamic thumbUrlToken;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *urlToken; // @dynamic urlToken;
@property(nonatomic) unsigned int videoPlayLen; // @dynamic videoPlayLen;
@property(nonatomic) unsigned int videoType; // @dynamic videoType;
@property(nonatomic) float width; // @dynamic width;

@end

