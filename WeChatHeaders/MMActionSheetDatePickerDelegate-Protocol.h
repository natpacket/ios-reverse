//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMActionSheetDatePicker, NSDate;

@protocol MMActionSheetDatePickerDelegate <NSObject>

@optional
- (_Bool)datePicker:(MMActionSheetDatePicker *)arg1 shouldSelectDate:(NSDate *)arg2;
- (void)datePickerConfirm:(MMActionSheetDatePicker *)arg1;
- (void)datePickerCancel:(MMActionSheetDatePicker *)arg1;
@end
