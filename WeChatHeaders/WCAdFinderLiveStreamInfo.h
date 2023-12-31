//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class WCAdFinderLiveInfo;

@interface WCAdFinderLiveStreamInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    unsigned int _previewJoinliveAdControlFlag;
    WCAdFinderLiveInfo *_finderLiveInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int previewJoinliveAdControlFlag; // @synthesize previewJoinliveAdControlFlag=_previewJoinliveAdControlFlag;
@property(retain, nonatomic) WCAdFinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

