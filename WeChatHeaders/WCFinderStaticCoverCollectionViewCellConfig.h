//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont, UIImage, WCFinderFeedContentTempModel;

@interface WCFinderStaticCoverCollectionViewCellConfig : NSObject
{
    _Bool _customCoverNoAutoPlay;
    _Bool _autoPlayEndToNext;
    _Bool _globalContinuePlay;
    unsigned long long _componentFlag;
    unsigned long long _topLeftViewType;
    unsigned long long _bottomRightViewType;
    unsigned long long _bottomRightViewFlag;
    unsigned long long _bottomLeftViewFlag;
    unsigned long long _coverMaskType;
    double _descriptionFontWeight;
    NSString *_bottomRightViewCustomWording;
    NSString *_bottomRightCustomIconName;
    NSString *_maskTipsTitle;
    UIFont *_maskTipsFont;
    UIImage *_maskTipsIcon;
    UIColor *_coverBackGroundColor;
    unsigned long long _descriptionMaxLine;
    NSString *_customLikeImageName;
    WCFinderFeedContentTempModel *_feedTempModel;
    NSArray *_customInfoItems;
    struct UIEdgeInsets _bottomViewInsets;
}

+ (id)membershipConfigWithFeedType:(int)arg1 isAuthor:(_Bool)arg2;
+ (id)musicTopicConfig;
+ (id)lifeHomeConfig;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) _Bool globalContinuePlay; // @synthesize globalContinuePlay=_globalContinuePlay;
@property(nonatomic) _Bool autoPlayEndToNext; // @synthesize autoPlayEndToNext=_autoPlayEndToNext;
@property(nonatomic) _Bool customCoverNoAutoPlay; // @synthesize customCoverNoAutoPlay=_customCoverNoAutoPlay;
@property(retain, nonatomic) NSArray *customInfoItems; // @synthesize customInfoItems=_customInfoItems;
@property(retain, nonatomic) WCFinderFeedContentTempModel *feedTempModel; // @synthesize feedTempModel=_feedTempModel;
@property(retain, nonatomic) NSString *customLikeImageName; // @synthesize customLikeImageName=_customLikeImageName;
@property(nonatomic) unsigned long long descriptionMaxLine; // @synthesize descriptionMaxLine=_descriptionMaxLine;
@property(retain, nonatomic) UIColor *coverBackGroundColor; // @synthesize coverBackGroundColor=_coverBackGroundColor;
@property(retain, nonatomic) UIImage *maskTipsIcon; // @synthesize maskTipsIcon=_maskTipsIcon;
@property(retain, nonatomic) UIFont *maskTipsFont; // @synthesize maskTipsFont=_maskTipsFont;
@property(copy, nonatomic) NSString *maskTipsTitle; // @synthesize maskTipsTitle=_maskTipsTitle;
@property(copy, nonatomic) NSString *bottomRightCustomIconName; // @synthesize bottomRightCustomIconName=_bottomRightCustomIconName;
@property(copy, nonatomic) NSString *bottomRightViewCustomWording; // @synthesize bottomRightViewCustomWording=_bottomRightViewCustomWording;
@property(nonatomic) double descriptionFontWeight; // @synthesize descriptionFontWeight=_descriptionFontWeight;
@property(nonatomic) unsigned long long coverMaskType; // @synthesize coverMaskType=_coverMaskType;
@property(nonatomic) struct UIEdgeInsets bottomViewInsets; // @synthesize bottomViewInsets=_bottomViewInsets;
@property(nonatomic) unsigned long long bottomLeftViewFlag; // @synthesize bottomLeftViewFlag=_bottomLeftViewFlag;
@property(nonatomic) unsigned long long bottomRightViewFlag; // @synthesize bottomRightViewFlag=_bottomRightViewFlag;
@property(nonatomic) unsigned long long bottomRightViewType; // @synthesize bottomRightViewType=_bottomRightViewType;
@property(nonatomic) unsigned long long topLeftViewType; // @synthesize topLeftViewType=_topLeftViewType;
@property(nonatomic) unsigned long long componentFlag; // @synthesize componentFlag=_componentFlag;

@end
