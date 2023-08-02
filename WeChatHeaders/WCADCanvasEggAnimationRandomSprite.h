//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCADCanvasEggAnimationElementInfo.h"

@class NSString;

@interface WCADCanvasEggAnimationRandomSprite : WCADCanvasEggAnimationElementInfo
{
    unsigned long long _spriteDuration;
    NSString *_spriteImageUrl;
    long long _spriteType;
    long long _spriteSizeType;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long spriteSizeType; // @synthesize spriteSizeType=_spriteSizeType;
@property(nonatomic) long long spriteType; // @synthesize spriteType=_spriteType;
@property(retain, nonatomic) NSString *spriteImageUrl; // @synthesize spriteImageUrl=_spriteImageUrl;
@property(nonatomic) unsigned long long spriteDuration; // @synthesize spriteDuration=_spriteDuration;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
