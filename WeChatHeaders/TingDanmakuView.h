//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TingDanmakuCellViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TingDanmakuViewModel;
@protocol TingDanmakuViewDatasource;

@interface TingDanmakuView : UIView <TingDanmakuCellViewDelegate>
{
    id <TingDanmakuViewDatasource> _datasource;
    NSMutableDictionary *_lastCells;
    NSMutableArray *_showingCells;
    TingDanmakuViewModel *_pendingModel;
    double _viewTop;
}

- (void).cxx_destruct;
@property(nonatomic) double viewTop; // @synthesize viewTop=_viewTop;
@property(retain, nonatomic) TingDanmakuViewModel *pendingModel; // @synthesize pendingModel=_pendingModel;
@property(retain, nonatomic) NSMutableArray *showingCells; // @synthesize showingCells=_showingCells;
@property(retain, nonatomic) NSMutableDictionary *lastCells; // @synthesize lastCells=_lastCells;
@property(nonatomic) __weak id <TingDanmakuViewDatasource> datasource; // @synthesize datasource=_datasource;
- (void)onDanmakuViewContinueAnimation:(id)arg1;
- (void)onDanmakuViewPauseAnimation:(id)arg1;
- (void)onDanmakuClickedWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (_Bool)isCellReadyForNextCell:(id)arg1 forTime:(unsigned long long)arg2;
- (void)clear;
- (void)pushNewDanmakuForLine:(int)arg1;
- (id)getNextModel;
- (void)checkLinesAvailableForNewDanmaku;
- (void)danmakuClockUpdateWithCurrentTime:(double)arg1;
- (void)initData;
- (double)yPositionForLine:(int)arg1;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

