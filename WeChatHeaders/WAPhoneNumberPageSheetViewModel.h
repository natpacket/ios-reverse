//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthPageSheetViewModel.h"

@class WAPhoneNumberAuthorizeSheetInfo;
@protocol IWAPhoneNumberAuthorizePageSheet;

@interface WAPhoneNumberPageSheetViewModel : WAAuthPageSheetViewModel
{
    double _maxListHeight;
}

@property(nonatomic) double maxListHeight; // @synthesize maxListHeight=_maxListHeight;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *infoModel; // @dynamic infoModel;
@property(nonatomic) __weak id <IWAPhoneNumberAuthorizePageSheet> pageSheet; // @dynamic pageSheet;

@end

