//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveStickerRecordAttributesBase.h"

@class NSString;

@interface MMFinderLiveTextStickerRecordAttributes : MMFinderLiveStickerRecordAttributesBase
{
    NSString *_text;
    double _colorR;
    double _colorG;
    double _colorB;
    double _colorA;
    unsigned long long _style;
}

+ (id)stickerRecordAttributesFromItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double colorA; // @synthesize colorA=_colorA;
@property(nonatomic) double colorB; // @synthesize colorB=_colorB;
@property(nonatomic) double colorG; // @synthesize colorG=_colorG;
@property(nonatomic) double colorR; // @synthesize colorR=_colorR;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)stickerItemFromRecordAttributes;
- (id)initWithStickerItem:(id)arg1;

@end

