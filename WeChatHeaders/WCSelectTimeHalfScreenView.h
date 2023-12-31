//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class NSDate;

@interface WCSelectTimeHalfScreenView : MMPageSheetBaseView
{
    CDUnknownBlockType _confirmCallBack;
    CDUnknownBlockType _cancelCallBack;
    NSDate *_miniumDate;
    NSDate *_maxiumDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(retain, nonatomic) NSDate *maxiumDate; // @synthesize maxiumDate=_maxiumDate;
@property(retain, nonatomic) NSDate *miniumDate; // @synthesize miniumDate=_miniumDate;
@property(copy, nonatomic) CDUnknownBlockType cancelCallBack; // @synthesize cancelCallBack=_cancelCallBack;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (id)navigationRightButton;
- (void)onSelectEndTime;
- (void)onSelectStatTime;
- (void)onDone;
- (void)setupDetailView;
- (_Bool)checkDateValid;
- (id)initWithTimeMin:(id)arg1 max:(id)arg2 selectBegin:(id)arg3 selectEnd:(id)arg4;

@end

