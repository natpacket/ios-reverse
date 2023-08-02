//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QTCJSONModelClassProperty : NSObject
{
    _Bool _isIndex;
    _Bool _isQTCOptional;
    _Bool _isStandardJSONType;
    _Bool _isMutable;
    NSString *_name;
    Class _type;
    NSString *_structName;
    NSString *_protocol;
    SEL _customGetter;
    NSMutableDictionary *_customSetters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *customSetters; // @synthesize customSetters=_customSetters;
@property(nonatomic) SEL customGetter; // @synthesize customGetter=_customGetter;
@property(nonatomic) _Bool isMutable; // @synthesize isMutable=_isMutable;
@property(nonatomic) _Bool isStandardJSONType; // @synthesize isStandardJSONType=_isStandardJSONType;
@property(nonatomic) _Bool isQTCOptional; // @synthesize isQTCOptional=_isQTCOptional;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(nonatomic) Class type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isIndex; // @synthesize isIndex=_isIndex;
- (id)description;

@end

