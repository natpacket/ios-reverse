//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMKDate : NSObject
{
    int _year;
    int _month;
    int _day;
}

+ (id)KDateWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
@property(readonly, nonatomic) int day; // @synthesize day=_day;
@property(readonly, nonatomic) int month; // @synthesize month=_month;
@property(readonly, nonatomic) int year; // @synthesize year=_year;
- (id)description;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;

@end

