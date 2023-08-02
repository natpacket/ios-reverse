//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class NSArray, WCAdCardBtnInfo;

@interface WCAdCombinedGridInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    long long _displayMode;
    WCAdCardBtnInfo *_clickActionInfo;
    NSArray *_gridItems;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gridItems; // @synthesize gridItems=_gridItems;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
