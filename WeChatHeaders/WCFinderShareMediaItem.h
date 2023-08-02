//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCFinderShareMediaItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString *_mediaType;
    NSString *_url;
    NSString *_thumbUrl;
    NSString *_width;
    NSString *_height;
    NSString *_coverUrl;
    NSString *_fullCoverUrl;
    NSString *_fullClipInset;
    NSString *_videoPlayDuration;
}

+ (void)initialize;
+ (void)PBArrayAdd_fullClipInset;
+ (void)PBArrayAdd_fullCoverUrl;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_mediaType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoPlayDuration; // @synthesize videoPlayDuration=_videoPlayDuration;
@property(copy, nonatomic) NSString *fullClipInset; // @synthesize fullClipInset=_fullClipInset;
@property(copy, nonatomic) NSString *fullCoverUrl; // @synthesize fullCoverUrl=_fullCoverUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (id)toXMLV2;
- (id)toXML;
- (void)fromBrandXML:(struct XmlReaderNode_t *)arg1;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

