//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCCanvasComponentHalfRandomCardRotateAnimInfo : MMObject <NSCoding>
{
    NSString *_animationImg;
    double _imgWidth;
    double _imgHeight;
    NSString *_animationColor;
    double _animationColorAlpha;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
- (void).cxx_destruct;
@property(nonatomic) double animationColorAlpha; // @synthesize animationColorAlpha=_animationColorAlpha;
@property(retain, nonatomic) NSString *animationColor; // @synthesize animationColor=_animationColor;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
@property(retain, nonatomic) NSString *animationImg; // @synthesize animationImg=_animationImg;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

