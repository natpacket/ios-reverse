//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderLiveTagListCollectionViewConfig : NSObject
{
    _Bool _forceDarkMode;
    long long _limitCount;
    long long _maxCharecterCount;
    double _titleFontSize;
    unsigned long long _commentScene;
    struct CGSize _labelStretchSize;
}

+ (id)defaultConfig;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) struct CGSize labelStretchSize; // @synthesize labelStretchSize=_labelStretchSize;
@property(nonatomic) long long maxCharecterCount; // @synthesize maxCharecterCount=_maxCharecterCount;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;

@end

