//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveBaseTask, MMLiveCommentDataItem, MMLiveTaskId, NSArray, NSMutableDictionary, NSString;
@protocol MMLiveCommentPubbleCellFrameChangeDelegate;

@interface MMLiveCommentPubbleCellFrame : NSObject
{
    _Bool _isLiveTopicContentExpand;
    NSString *_layoutIdentityKey;
    double _layoutStandardWidth;
    id <MMLiveCommentPubbleCellFrameChangeDelegate> _delegate;
    NSMutableDictionary *_cellSizeDict;
    NSMutableDictionary *_cellExpandSizeDict;
    NSMutableDictionary *_nickNameSizeDict;
    NSMutableDictionary *_contentSizeDict;
    NSMutableDictionary *_contentExpandSizeDict;
    NSArray *_contentArrStylesPortrait;
    NSArray *_contentArrStylesLandscape;
    NSMutableDictionary *_contentArrStylesDict;
    NSMutableDictionary *_contentExpandArrStylesDict;
    NSArray *_nickArrStylesPortrait;
    NSArray *_nickArrStylesLandscape;
    NSMutableDictionary *_nickArrStylesDict;
    NSArray *_signArrStyles;
    unsigned long long _pubbleUIType;
    MMLiveCommentDataItem *_commentItem;
    double _firstLineOriginX;
    MMLiveTaskId *_taskId;
    double _changeBGColorOffset;
    double _offsetWhenReuse;
    double _topSectionOffset;
    struct CGSize _cellSizePortrait;
    struct CGSize _cellSizeLandscape;
    struct CGSize _nickNameSizePortrait;
    struct CGSize _nickNameSizeLandscape;
    struct CGSize _contentSizePortrait;
    struct CGSize _contentSizeLandscape;
    struct CGSize _signSize;
    struct CGPoint _cellOrigin;
}

+ (id)createTextView;
- (void).cxx_destruct;
@property(nonatomic) double topSectionOffset; // @synthesize topSectionOffset=_topSectionOffset;
@property(nonatomic) double offsetWhenReuse; // @synthesize offsetWhenReuse=_offsetWhenReuse;
@property(nonatomic) double changeBGColorOffset; // @synthesize changeBGColorOffset=_changeBGColorOffset;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) double firstLineOriginX; // @synthesize firstLineOriginX=_firstLineOriginX;
@property(nonatomic) struct CGPoint cellOrigin; // @synthesize cellOrigin=_cellOrigin;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
@property(nonatomic) unsigned long long pubbleUIType; // @synthesize pubbleUIType=_pubbleUIType;
@property(retain, nonatomic) NSArray *signArrStyles; // @synthesize signArrStyles=_signArrStyles;
@property(nonatomic) struct CGSize signSize; // @synthesize signSize=_signSize;
@property(retain, nonatomic) NSMutableDictionary *nickArrStylesDict; // @synthesize nickArrStylesDict=_nickArrStylesDict;
@property(retain, nonatomic) NSArray *nickArrStylesLandscape; // @synthesize nickArrStylesLandscape=_nickArrStylesLandscape;
@property(retain, nonatomic) NSArray *nickArrStylesPortrait; // @synthesize nickArrStylesPortrait=_nickArrStylesPortrait;
@property(retain, nonatomic) NSMutableDictionary *contentExpandArrStylesDict; // @synthesize contentExpandArrStylesDict=_contentExpandArrStylesDict;
@property(retain, nonatomic) NSMutableDictionary *contentArrStylesDict; // @synthesize contentArrStylesDict=_contentArrStylesDict;
@property(retain, nonatomic) NSArray *contentArrStylesLandscape; // @synthesize contentArrStylesLandscape=_contentArrStylesLandscape;
@property(retain, nonatomic) NSArray *contentArrStylesPortrait; // @synthesize contentArrStylesPortrait=_contentArrStylesPortrait;
@property(retain, nonatomic) NSMutableDictionary *contentExpandSizeDict; // @synthesize contentExpandSizeDict=_contentExpandSizeDict;
@property(retain, nonatomic) NSMutableDictionary *contentSizeDict; // @synthesize contentSizeDict=_contentSizeDict;
@property(nonatomic) struct CGSize contentSizeLandscape; // @synthesize contentSizeLandscape=_contentSizeLandscape;
@property(nonatomic) struct CGSize contentSizePortrait; // @synthesize contentSizePortrait=_contentSizePortrait;
@property(retain, nonatomic) NSMutableDictionary *nickNameSizeDict; // @synthesize nickNameSizeDict=_nickNameSizeDict;
@property(nonatomic) struct CGSize nickNameSizeLandscape; // @synthesize nickNameSizeLandscape=_nickNameSizeLandscape;
@property(nonatomic) struct CGSize nickNameSizePortrait; // @synthesize nickNameSizePortrait=_nickNameSizePortrait;
@property(retain, nonatomic) NSMutableDictionary *cellExpandSizeDict; // @synthesize cellExpandSizeDict=_cellExpandSizeDict;
@property(retain, nonatomic) NSMutableDictionary *cellSizeDict; // @synthesize cellSizeDict=_cellSizeDict;
@property(nonatomic) __weak id <MMLiveCommentPubbleCellFrameChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLiveTopicContentExpand; // @synthesize isLiveTopicContentExpand=_isLiveTopicContentExpand;
@property(nonatomic) struct CGSize cellSizeLandscape; // @synthesize cellSizeLandscape=_cellSizeLandscape;
@property(nonatomic) struct CGSize cellSizePortrait; // @synthesize cellSizePortrait=_cellSizePortrait;
@property(nonatomic) double layoutStandardWidth; // @synthesize layoutStandardWidth=_layoutStandardWidth;
@property(retain, nonatomic) NSString *layoutIdentityKey; // @synthesize layoutIdentityKey=_layoutIdentityKey;
- (id)getLayoutIdentifyKeyWithStandardWidth:(double)arg1;
- (_Bool)isCommentContentMultiline;
@property(readonly, nonatomic) NSArray *nickArrStyles;
@property(readonly, nonatomic) NSArray *contentArrStyles;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) struct CGSize nickNameSize;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)transferToPubbleUIType:(id)arg1;
- (void)caculateSizeForComment:(id)arg1;
- (void)calculateWithCommentInfo:(id)arg1;
- (id)getDisplayStr:(id)arg1;
- (id)getCurrentUIStateInfo;
- (double)commmentTableWidth;
- (_Bool)isCombleTableStyle;
- (_Bool)isUserTableStyle;
- (void)calculateIfNeeded;
- (_Bool)isCurrentLayouted;
- (long long)layoutResult;
@property(readonly, nonatomic) MMLiveBaseTask *liveTask;
- (id)initWithTaskId:(id)arg1;

@end

