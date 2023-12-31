//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingFlowModel.h"

@class TingItem, TingMusicPlayDurationHelper;

@interface TingMusicFlowModel : TingFlowModel
{
    TingItem *_originTingItem;
    TingMusicPlayDurationHelper *_durationHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingMusicPlayDurationHelper *durationHelper; // @synthesize durationHelper=_durationHelper;
@property(retain, nonatomic) TingItem *originTingItem; // @synthesize originTingItem=_originTingItem;
- (void)setupTapeItemForRepoSession:(id)arg1;
- (void)onPlayingStateChanged:(id)arg1 status:(int)arg2 duration:(double)arg3;
- (void)buildFeedRequestWithRequest:(id)arg1 isFromLoadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTingItem:(id)arg1;

@end

