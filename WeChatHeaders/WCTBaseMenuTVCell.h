//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "ZZFlexibleLayoutViewProtocol-Protocol.h"

@class NSString, WCTBaseMenuView;

@interface WCTBaseMenuTVCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    WCTBaseMenuView *_view;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) WCTBaseMenuView *view; // @synthesize view=_view;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDelegate:(id)arg1;
- (void)setViewEventAction:(CDUnknownBlockType)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

