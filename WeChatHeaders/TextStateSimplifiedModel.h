//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TextStateSimplifiedIcon;

@interface TextStateSimplifiedModel : NSObject
{
    _Bool _isLiked;
    unsigned int _createTime;
    unsigned int _mediaType;
    int _mediaWidth;
    int _mediaHeight;
    NSString *_textStateId;
    NSString *_username;
    NSString *_nickname;
    NSString *_headImageUrl;
    NSString *_desc;
    NSString *_mediaThumbURL;
    NSString *_backgroundImageId;
    TextStateSimplifiedIcon *_icon;
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceIconURL;
    unsigned long long _option;
    NSString *_clusterId;
    TextStateSimplifiedIcon *_clusterIcon;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) TextStateSimplifiedIcon *clusterIcon; // @synthesize clusterIcon=_clusterIcon;
@property(retain, nonatomic) NSString *clusterId; // @synthesize clusterId=_clusterId;
@property(nonatomic) unsigned long long option; // @synthesize option=_option;
@property(retain, nonatomic) NSString *sourceIconURL; // @synthesize sourceIconURL=_sourceIconURL;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) TextStateSimplifiedIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *backgroundImageId; // @synthesize backgroundImageId=_backgroundImageId;
@property(nonatomic) int mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(nonatomic) int mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(retain, nonatomic) NSString *mediaThumbURL; // @synthesize mediaThumbURL=_mediaThumbURL;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (id)initWithTextState:(id)arg1;

@end

