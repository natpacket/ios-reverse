//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementRollTextInfo : NSObject <NSCoding>
{
    WCAdDynamicFeedElementValue *_backgroundColor;
    WCAdDynamicFeedElementValue *_textColor;
    NSString *_iconUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

