//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class NSDate, UIDatePicker;

@interface WCDatePickerHalfScreeView : MMPageSheetBaseView
{
    CDUnknownBlockType _confirmCallBack;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDate *_selectedDate;
    UIDatePicker *_curDatePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIDatePicker *curDatePicker; // @synthesize curDatePicker=_curDatePicker;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (void)onDone;
- (void)setupDetailView;
- (id)navigationRightButton;
- (id)initWithTitle:(id)arg1 minTime:(id)arg2 maxTime:(id)arg3 selectTime:(id)arg4;

@end

