//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class NSArray;

@interface WCAdBreakFramePlayStateItem : NSObject <NSCoding, WCAdParserProtocol>
{
    NSArray *_tagInfoList;
    double _sectionBegin;
    double _sectionEnd;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double sectionEnd; // @synthesize sectionEnd=_sectionEnd;
@property(nonatomic) double sectionBegin; // @synthesize sectionBegin=_sectionBegin;
@property(retain, nonatomic) NSArray *tagInfoList; // @synthesize tagInfoList=_tagInfoList;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

