//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class NSString;

@interface WCAdClickBarInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString *_desc;
    long long _animShowTime;
    long long _animHideTime;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long animHideTime; // @synthesize animHideTime=_animHideTime;
@property(nonatomic) long long animShowTime; // @synthesize animShowTime=_animShowTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isValid;

@end

