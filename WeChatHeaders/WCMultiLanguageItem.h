//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class NSString;

@interface WCMultiLanguageItem : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString *zh;
    NSString *tw;
    NSString *en;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *en; // @synthesize en;
@property(retain, nonatomic) NSString *tw; // @synthesize tw;
@property(retain, nonatomic) NSString *zh; // @synthesize zh;
- (_Bool)isValid;
- (id)currentLanguageText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

