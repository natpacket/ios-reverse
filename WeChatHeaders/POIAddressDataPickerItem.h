//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMCommonPickerItem.h"

@class WCAddressStageDataStruct;

@interface POIAddressDataPickerItem : MMCommonPickerItem
{
    WCAddressStageDataStruct *_addressData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAddressStageDataStruct *addressData; // @synthesize addressData=_addressData;
- (id)displayStr;
- (id)initWithAddressData:(id)arg1;

@end

