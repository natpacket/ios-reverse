//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthPageSheetViewModel.h"

@class WAPlateAuthorizePageSheet, WAPlateAuthorizeSheetInfo;

@interface WAPlateAuthPageSheetViewModel : WAAuthPageSheetViewModel
{
    CDUnknownBlockType _scrollToPlateAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scrollToPlateAction; // @synthesize scrollToPlateAction=_scrollToPlateAction;

// Remaining properties
@property(retain, nonatomic) WAPlateAuthorizeSheetInfo *infoModel; // @dynamic infoModel;
@property(nonatomic) __weak WAPlateAuthorizePageSheet *pageSheet; // @dynamic pageSheet;

@end

