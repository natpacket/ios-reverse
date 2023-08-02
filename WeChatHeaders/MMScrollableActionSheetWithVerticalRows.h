//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollableActionSheet.h"

#import "MMScrollableActionSheetVerticalContainerViewDelegate-Protocol.h"

@class MMScrollableActionSheetVerticalContainerView, NSString;
@protocol MMScrollableActionSheetWithVerticalRowsDelegate;

@interface MMScrollableActionSheetWithVerticalRows : MMScrollableActionSheet <MMScrollableActionSheetVerticalContainerViewDelegate>
{
    MMScrollableActionSheetVerticalContainerView *_verticalContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollableActionSheetVerticalContainerView *verticalContainerView; // @synthesize verticalContainerView=_verticalContainerView;
- (void)onTappedRowInfo:(id)arg1;
- (void)addOrUpdateVerticalRowInfo:(id)arg1;
- (void)setVerticalRowInfoList:(id)arg1;
- (void)setupVerticalContainerView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MMScrollableActionSheetWithVerticalRowsDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

