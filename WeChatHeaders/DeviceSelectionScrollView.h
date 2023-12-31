//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollStack.h"

#import "MMIconItemDelegate-Protocol.h"

@class NSArray, NSString;
@protocol ScrollItemSelectionDelegate;

@interface DeviceSelectionScrollView : MMScrollStack <MMIconItemDelegate>
{
    id <ScrollItemSelectionDelegate> _selectDelegate;
    NSArray *_deviceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *deviceArray; // @synthesize deviceArray=_deviceArray;
@property(nonatomic) __weak id <ScrollItemSelectionDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)onItemClicked:(id)arg1;
- (void)addMoreIconView;
- (void)addOthersIcon;
- (void)initView;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2 hasMore:(_Bool)arg3 hasOthers:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

