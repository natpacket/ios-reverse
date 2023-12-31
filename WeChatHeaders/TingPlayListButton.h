//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

#import "TingFlowModelExtension-Protocol.h"
#import "TingFlowPlayerNotification-Protocol.h"

@class NSString, UIColor;
@protocol TingFlowPlayerProtocol;

@interface TingPlayListButton : MMUIButton <TingFlowModelExtension, TingFlowPlayerNotification>
{
    CDUnknownBlockType _onPlayListButtonClicked;
    UIColor *_imgColor;
    id <TingFlowPlayerProtocol> _flowPlayer;
    struct CGSize _imgSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TingFlowPlayerProtocol> flowPlayer; // @synthesize flowPlayer=_flowPlayer;
@property(retain, nonatomic) UIColor *imgColor; // @synthesize imgColor=_imgColor;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
@property(copy, nonatomic) CDUnknownBlockType onPlayListButtonClicked; // @synthesize onPlayListButtonClicked=_onPlayListButtonClicked;
- (void)flowPlayer:(id)arg1 onPlayModeChanged:(int)arg2;
- (void)tingFlowModel:(id)arg1 shuffledChanged:(_Bool)arg2;
- (void)playListClicked:(id)arg1;
- (void)reloadState;
- (_Bool)isRadioMode;
- (id)detailFlowModel;
- (void)layoutSubviews;
- (void)bindPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 imgSize:(struct CGSize)arg2 imgColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

