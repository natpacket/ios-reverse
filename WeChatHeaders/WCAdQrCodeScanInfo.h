//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class NSString;

@interface WCAdQrCodeScanInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    _Bool _needUpdateQrUrl;
    NSString *_qrUrl;
    NSString *_qrExtInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateQrUrl; // @synthesize needUpdateQrUrl=_needUpdateQrUrl;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *qrUrl; // @synthesize qrUrl=_qrUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
