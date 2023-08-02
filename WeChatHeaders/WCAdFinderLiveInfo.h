//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class NSString, WCAdFinderLivePreviewInfo;

@interface WCAdFinderLiveInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString *_finderUsername;
    NSString *_finderLiveId;
    NSString *_finderLiveFeedExportId;
    NSString *_finderLiveFeedNonceId;
    WCAdFinderLivePreviewInfo *_finderLivePreviewInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderLivePreviewInfo *finderLivePreviewInfo; // @synthesize finderLivePreviewInfo=_finderLivePreviewInfo;
@property(retain, nonatomic) NSString *finderLiveFeedNonceId; // @synthesize finderLiveFeedNonceId=_finderLiveFeedNonceId;
@property(retain, nonatomic) NSString *finderLiveFeedExportId; // @synthesize finderLiveFeedExportId=_finderLiveFeedExportId;
@property(retain, nonatomic) NSString *finderLiveId; // @synthesize finderLiveId=_finderLiveId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (_Bool)isValidForJumpLiveRoom;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

