//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCActionAreaElementWrap : NSObject
{
    double _realWidth;
    double _maxWidth;
    double _minWidth;
    double _adjustedWidth;
    unsigned long long _displayLine;
    NSArray *_subElements;
    double _subElementSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double subElementSpacing; // @synthesize subElementSpacing=_subElementSpacing;
@property(retain, nonatomic) NSArray *subElements; // @synthesize subElements=_subElements;
@property(nonatomic) unsigned long long displayLine; // @synthesize displayLine=_displayLine;
@property(nonatomic) double adjustedWidth; // @synthesize adjustedWidth=_adjustedWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double realWidth; // @synthesize realWidth=_realWidth;
- (void)adjustSubElementsWidthFromBackToFront;
- (id)initWithSubElements:(id)arg1 subElementSpacing:(double)arg2;

@end

