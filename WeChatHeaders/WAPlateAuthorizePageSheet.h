//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthorizePageSheet.h"

@class WAPlateAuthPageSheetViewModel, WAPlateAuthorizeSheetInfo;
@protocol WAPlateAuthorizePageSheetDelegate;

@interface WAPlateAuthorizePageSheet : WAAuthorizePageSheet
{
    WAPlateAuthPageSheetViewModel *_paViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPlateAuthPageSheetViewModel *paViewModel; // @synthesize paViewModel=_paViewModel;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)updatePlateInfo:(id)arg1;
- (void)scrollToCurrentIndex;
- (void)calSelectedId;
- (void)managerPlate;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WAPlateAuthorizePageSheetDelegate> authDelegate; // @dynamic authDelegate;
@property(retain, nonatomic) WAPlateAuthorizeSheetInfo *info; // @dynamic info;

@end

