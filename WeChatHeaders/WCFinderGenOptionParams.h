//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, EditVideoAttr, NSArray, NSString, WCFinderVideoQualityScoreModel;

@interface WCFinderGenOptionParams : NSObject
{
    _Bool _skipCoverCheck;
    _Bool _isSlowMotionVideo;
    WCFinderVideoQualityScoreModel *_videoScoreModel;
    EditVideoAttr *_editAttr;
    NSArray *_selectedAssetIDs;
    AVAsset *_fromAvAsset;
    NSString *_postFinderUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *postFinderUsername; // @synthesize postFinderUsername=_postFinderUsername;
@property(retain, nonatomic) AVAsset *fromAvAsset; // @synthesize fromAvAsset=_fromAvAsset;
@property(nonatomic) _Bool isSlowMotionVideo; // @synthesize isSlowMotionVideo=_isSlowMotionVideo;
@property(nonatomic) _Bool skipCoverCheck; // @synthesize skipCoverCheck=_skipCoverCheck;
@property(retain, nonatomic) NSArray *selectedAssetIDs; // @synthesize selectedAssetIDs=_selectedAssetIDs;
@property(retain, nonatomic) EditVideoAttr *editAttr; // @synthesize editAttr=_editAttr;
@property(retain, nonatomic) WCFinderVideoQualityScoreModel *videoScoreModel; // @synthesize videoScoreModel=_videoScoreModel;

@end
