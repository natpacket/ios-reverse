//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveMultiSelectTableViewCell.h"

@class MMFinderLiveSongItem, MMUILabel;
@protocol MMFinderLiveSongManageTableViewCellDelegate;

@interface MMFinderLiveSongManageTableViewCell : MMFinderLiveMultiSelectTableViewCell
{
    _Bool _disable;
    _Bool _shouldAdaptToDarkLight;
    unsigned int _rankIndex;
    MMFinderLiveSongItem *_songItem;
    id <MMFinderLiveSongManageTableViewCellDelegate> _songTableCellDelegate;
    MMUILabel *_musicNameLabel;
}

+ (double)getSeparatorLeftInset;
+ (id)identifier;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(nonatomic) _Bool shouldAdaptToDarkLight; // @synthesize shouldAdaptToDarkLight=_shouldAdaptToDarkLight;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) __weak id <MMFinderLiveSongManageTableViewCellDelegate> songTableCellDelegate; // @synthesize songTableCellDelegate=_songTableCellDelegate;
@property(nonatomic) unsigned int rankIndex; // @synthesize rankIndex=_rankIndex;
@property(retain, nonatomic) MMFinderLiveSongItem *songItem; // @synthesize songItem=_songItem;
- (void)updateMusicLabel;
- (void)onTapGesture:(id)arg1;
- (double)adjustedLeftOffsetForEditing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reset;
- (void)refreshUI;
- (void)updateMusicNameLabelOrigin;
- (void)layoutMusicNameLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

