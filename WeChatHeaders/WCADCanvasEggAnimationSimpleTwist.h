//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCADCanvasEggAnimationElementInfo.h"

@interface WCADCanvasEggAnimationSimpleTwist : WCADCanvasEggAnimationElementInfo
{
    _Bool _clockwise;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

