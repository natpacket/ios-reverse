//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString, WCCanvasComponentHalfRandomCardRotateAnimInfo;

@interface WCCanvasComponentHalfRandomCardInfo : MMObject <NSCoding>
{
    WCCanvasComponentHalfRandomCardRotateAnimInfo *_rotateAnimInfo;
    NSArray *_items;
    NSString *_backgroundImg;
    double _backgroundImgWidth;
    double _backgroundImgHeight;
    NSString *_theChosenRandomCardId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *theChosenRandomCardId; // @synthesize theChosenRandomCardId=_theChosenRandomCardId;
@property(nonatomic) double backgroundImgHeight; // @synthesize backgroundImgHeight=_backgroundImgHeight;
@property(nonatomic) double backgroundImgWidth; // @synthesize backgroundImgWidth=_backgroundImgWidth;
@property(retain, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) WCCanvasComponentHalfRandomCardRotateAnimInfo *rotateAnimInfo; // @synthesize rotateAnimInfo=_rotateAnimInfo;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

