//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCActionSheet.h"

#import "WCActionSheetDelegate-Protocol.h"

@class NSString;

@interface GameVideoGalleryShareMenuViewController2 : WCActionSheet <WCActionSheetDelegate>
{
    CDUnknownBlockType _clickItemBlock;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show:(id)arg1;
- (id)initWithClickItemBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

