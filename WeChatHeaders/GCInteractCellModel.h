//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseCellModel.h"

@class GameJumpInfo, NSArray, NSString;
@protocol GCInteractCellDelegate;

@interface GCInteractCellModel : GCBaseCellModel
{
    _Bool _isVoted;
    int _quickResponseFlag;
    int _alreadyMergedCount;
    unsigned int _relationType;
    NSString *_titleName;
    NSString *_bodyText;
    NSString *_actionDesc;
    NSString *_actionText;
    NSString *_quoteText;
    NSString *_quickResponseContentId;
    NSArray *_headUrlArray;
    GameJumpInfo *_aggregateJumpInfo;
    GameJumpInfo *_commentJumpInfo;
    NSString *_avatarUrl;
    NSString *_rightImgUrl;
    NSString *_timeStr;
    id <GCInteractCellDelegate> _interactDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCInteractCellDelegate> interactDelegate; // @synthesize interactDelegate=_interactDelegate;
@property(nonatomic) _Bool isVoted; // @synthesize isVoted=_isVoted;
@property(nonatomic) unsigned int relationType; // @synthesize relationType=_relationType;
@property(retain, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property(retain, nonatomic) NSString *rightImgUrl; // @synthesize rightImgUrl=_rightImgUrl;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) GameJumpInfo *commentJumpInfo; // @synthesize commentJumpInfo=_commentJumpInfo;
@property(retain, nonatomic) GameJumpInfo *aggregateJumpInfo; // @synthesize aggregateJumpInfo=_aggregateJumpInfo;
@property(retain, nonatomic) NSArray *headUrlArray; // @synthesize headUrlArray=_headUrlArray;
@property(nonatomic) int alreadyMergedCount; // @synthesize alreadyMergedCount=_alreadyMergedCount;
@property(nonatomic) int quickResponseFlag; // @synthesize quickResponseFlag=_quickResponseFlag;
@property(retain, nonatomic) NSString *quickResponseContentId; // @synthesize quickResponseContentId=_quickResponseContentId;
@property(retain, nonatomic) NSString *quoteText; // @synthesize quoteText=_quoteText;
@property(retain, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(retain, nonatomic) NSString *actionDesc; // @synthesize actionDesc=_actionDesc;
@property(retain, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (double)cellHeight;
- (_Bool)hasMergeBtn;
- (_Bool)hasBtmActionView;
- (_Bool)hasFollowBtn;
- (_Bool)hasQuickZan;
- (_Bool)hasQuickReply;
- (Class)bindCellClass;

@end
