//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftCustomizationStyleItem, NSArray, NSMutableArray, NSString;

@interface MMFinderLiveGiftCustomizationModel : NSObject
{
    _Bool _textCustomizableForAnyStyle;
    _Bool _hasCustomText;
    _Bool _styleSet;
    NSString *_instanceId;
    NSString *_parentProductId;
    NSArray *_styles;
    MMFinderLiveGiftCustomizationStyleItem *_currentStyle;
    NSString *_customText;
    NSString *_displayCustomText;
    unsigned long long _customTextValidationPolicy;
    MMFinderLiveGiftCustomizationStyleItem *_selectedStyle;
    NSString *_currentCustomText;
    NSMutableArray *_commitTasks;
}

+ (id)customizationModelForFinderLiveGift:(id)arg1 useStrictTextValidationPolicy:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *commitTasks; // @synthesize commitTasks=_commitTasks;
@property(retain, nonatomic) NSString *currentCustomText; // @synthesize currentCustomText=_currentCustomText;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItem *selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(nonatomic) _Bool styleSet; // @synthesize styleSet=_styleSet;
@property(nonatomic) unsigned long long customTextValidationPolicy; // @synthesize customTextValidationPolicy=_customTextValidationPolicy;
@property(retain, nonatomic) NSString *displayCustomText; // @synthesize displayCustomText=_displayCustomText;
@property(retain, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) _Bool hasCustomText; // @synthesize hasCustomText=_hasCustomText;
@property(nonatomic) _Bool textCustomizableForAnyStyle; // @synthesize textCustomizableForAnyStyle=_textCustomizableForAnyStyle;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItem *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSString *parentProductId; // @synthesize parentProductId=_parentProductId;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, nonatomic) NSString *displayCustomTextTrimmedToCurrentStyleLengthLimit;
@property(readonly, nonatomic) NSString *currentCustomTextTrimmedToCurrentStyleLengthLimit;

@end
