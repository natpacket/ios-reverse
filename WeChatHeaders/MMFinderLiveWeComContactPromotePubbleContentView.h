//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLivePromotePubbleContentView.h"

@class FinderLivePromoteInfoListWecomContact, MMUIButton, MMUILabel, MMWebImageView;

@interface MMFinderLiveWeComContactPromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    MMWebImageView *_titleImgView;
    MMUILabel *_companyLabel;
    MMUILabel *_descLabel;
    MMUIButton *_actionButton;
    FinderLivePromoteInfoListWecomContact *_wecomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact; // @synthesize wecomContact=_wecomContact;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *companyLabel; // @synthesize companyLabel=_companyLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (double)rightWidgetLeft;
- (void)gotoWeComContactProfile;
- (void)onHandleAction;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutCompanyLabel;
- (void)layoutTitleImgView;
- (void)layoutActionButton;
- (void)onClosed;
- (void)onShowed;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

