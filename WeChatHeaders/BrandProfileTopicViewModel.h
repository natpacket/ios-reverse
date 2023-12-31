//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BrandProfileTopicViewModel : NSObject
{
    double _foldViewHeight;
    double _unfoldViewHeight;
    _Bool _isUnfold;
    _Bool _hasUnfoldButton;
    _Bool _hasMultiLines;
    double _unfoldButtonCenterY;
    NSArray *_topicInfoList;
}

+ (id)generateTopicButton;
+ (id)generateTopicAttrStr:(id)arg1 containerWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *topicInfoList; // @synthesize topicInfoList=_topicInfoList;
@property(readonly, nonatomic) double unfoldButtonCenterY; // @synthesize unfoldButtonCenterY=_unfoldButtonCenterY;
@property(readonly, nonatomic) _Bool hasMultiLines; // @synthesize hasMultiLines=_hasMultiLines;
@property(nonatomic) _Bool hasUnfoldButton; // @synthesize hasUnfoldButton=_hasUnfoldButton;
@property(nonatomic) _Bool isUnfold; // @synthesize isUnfold=_isUnfold;
- (double)topicButtonFillThresholdWidth;
- (double)topicButtonMaxWidth;
- (void)fillTopicButtonFoldInfo;
@property(readonly, nonatomic) double viewHeight;
- (void)updateHasUnfoldButton;
- (void)setTopicInfoList:(id)arg1;
- (id)init;

@end

