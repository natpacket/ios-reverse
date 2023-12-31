//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingAutoSizeCollectionViewCell.h"

#import "TingFlowPlayerNotification-Protocol.h"

@class NSString, TingPlayListCellContentView;

@interface TingPlayListCellCollectionViewCell : TingAutoSizeCollectionViewCell <TingFlowPlayerNotification>
{
    TingPlayListCellContentView *_innerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayListCellContentView *innerView; // @synthesize innerView=_innerView;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)updateWithPlayer:(id)arg1 status:(int)arg2;
- (void)updateIsSelected:(_Bool)arg1 status:(int)arg2 isPlayingBackupItem:(_Bool)arg3;
- (void)updateWithItem:(id)arg1;
- (struct CGSize)calculatedSizeWithConstrainedSize:(struct CGSize)arg1;
- (void)configureLayout;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

