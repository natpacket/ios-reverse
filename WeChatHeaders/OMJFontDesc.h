//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJFontDesc : NSObject
{
    NSString *_fontName;
    double _fontSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)calcFontNameWithFamilyName:(id)arg1 fontWeight:(unsigned long long)arg2;
- (id)initWithFamilyName:(id)arg1 fontWeight:(unsigned long long)arg2 fontSize:(double)arg3;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2;

@end

