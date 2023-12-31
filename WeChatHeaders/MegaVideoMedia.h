//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderHalfRect, FinderHdrMediaSpecList, FinderHlsMediaSpecList, FinderMediaSpecList, NSMutableArray, NSString, ScalingInfo;

@interface MegaVideoMedia : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int bitrate; // @dynamic bitrate;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *coverUrlToken; // @dynamic coverUrlToken;
@property(retain, nonatomic) NSString *decodeKey; // @dynamic decodeKey;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *fullCoverUrl; // @dynamic fullCoverUrl;
@property(retain, nonatomic) NSString *fullThumbUrl; // @dynamic fullThumbUrl;
@property(retain, nonatomic) NSString *fullThumbUrlToken; // @dynamic fullThumbUrlToken;
@property(retain, nonatomic) FinderHalfRect *halfRect; // @dynamic halfRect;
@property(retain, nonatomic) FinderHdrMediaSpecList *hdrSpec; // @dynamic hdrSpec;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) FinderHlsMediaSpecList *hlsSpec; // @dynamic hlsSpec;
@property(nonatomic) unsigned int hotFlag; // @dynamic hotFlag;
@property(retain, nonatomic) NSString *md5Sum; // @dynamic md5Sum;
@property(retain, nonatomic) FinderMediaSpecList *mediaSpec; // @dynamic mediaSpec;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) ScalingInfo *scalingInfo; // @dynamic scalingInfo;
@property(retain, nonatomic) NSMutableArray *spec; // @dynamic spec;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *thumbUrlToken; // @dynamic thumbUrlToken;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *urlToken; // @dynamic urlToken;
@property(nonatomic) unsigned int videoPlayLen; // @dynamic videoPlayLen;
@property(nonatomic) unsigned long long videoPlayLenMs; // @dynamic videoPlayLenMs;
@property(nonatomic) float width; // @dynamic width;

@end

