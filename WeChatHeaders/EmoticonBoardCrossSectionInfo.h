//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EmoticonBoardPageWrap, NSString, OrderedDictionary;

@interface EmoticonBoardCrossSectionInfo : NSObject
{
    _Bool _shouldShowLoadingIfNeeded;
    unsigned long long _sectionIndex;
    EmoticonBoardPageWrap *_pageWrap;
    OrderedDictionary *_qqEmojiDictionary;
    NSString *_pidNeedScrollTo;
    struct CGPoint _offsetInFatherCollection;
    struct CGPoint _offset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowLoadingIfNeeded; // @synthesize shouldShowLoadingIfNeeded=_shouldShowLoadingIfNeeded;
@property(retain, nonatomic) NSString *pidNeedScrollTo; // @synthesize pidNeedScrollTo=_pidNeedScrollTo;
@property(retain, nonatomic) OrderedDictionary *qqEmojiDictionary; // @synthesize qqEmojiDictionary=_qqEmojiDictionary;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGPoint offsetInFatherCollection; // @synthesize offsetInFatherCollection=_offsetInFatherCollection;
@property(retain, nonatomic) EmoticonBoardPageWrap *pageWrap; // @synthesize pageWrap=_pageWrap;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;

@end

