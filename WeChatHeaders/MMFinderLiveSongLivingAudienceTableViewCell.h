//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveSongLivingManageTableViewCell.h"

@class WCLiveBlurButton;

@interface MMFinderLiveSongLivingAudienceTableViewCell : MMFinderLiveSongLivingManageTableViewCell
{
    WCLiveBlurButton *_giftButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCLiveBlurButton *giftButton; // @synthesize giftButton=_giftButton;
- (id)createSingButton;
- (id)createFinishButton;
- (id)createRequestMemDescLabel;
- (void)layoutHeartValueLabel;
- (_Bool)shouldHideHeartValueLabel;
- (void)updateMusicNameLabelOrigin;
- (void)layoutUI;
- (void)onTapGesture:(id)arg1;

@end

