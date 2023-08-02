//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveSubTitleData : NSObject
{
    _Bool _canStartInSemantics;
    _Bool _isLayout;
    NSString *_subTitle;
    long long _subTitleType;
    long long _category;
    long long _currentIndex;
    unsigned long long _clipLengthForSupply;
    long long _layoutStartLineIndex;
    double _layoutStartOffsetX;
}

+ (id)createSubTitleData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double layoutStartOffsetX; // @synthesize layoutStartOffsetX=_layoutStartOffsetX;
@property(nonatomic) long long layoutStartLineIndex; // @synthesize layoutStartLineIndex=_layoutStartLineIndex;
@property(nonatomic) _Bool isLayout; // @synthesize isLayout=_isLayout;
@property(nonatomic) unsigned long long clipLengthForSupply; // @synthesize clipLengthForSupply=_clipLengthForSupply;
@property(nonatomic) _Bool canStartInSemantics; // @synthesize canStartInSemantics=_canStartInSemantics;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) long long subTitleType; // @synthesize subTitleType=_subTitleType;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void)initDefaultData;
- (id)convertToSupplySubTitleWithClipLength:(unsigned long long)arg1;
- (void)clearLayoutData;
- (_Bool)isValid;
- (id)init;

@end

