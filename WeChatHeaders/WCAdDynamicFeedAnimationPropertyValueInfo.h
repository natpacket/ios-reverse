//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class UIColor, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedAnimationPropertyValueInfo : NSObject <NSCoding>
{
    _Bool _isValid;
    UIColor *_colorExt;
    WCAdDynamicFeedElementValue *_color;
    WCAdDynamicFeedElementValue *_colorDark;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *colorDark; // @synthesize colorDark=_colorDark;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *color; // @synthesize color=_color;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) UIColor *colorExt; // @synthesize colorExt=_colorExt;
- (_Bool)parsePropertyValues;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

