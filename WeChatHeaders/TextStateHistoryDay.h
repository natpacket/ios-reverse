//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TextStateHistoryDay : NSObject
{
    unsigned long long _year;
    unsigned long long _month;
    unsigned long long _day;
    NSMutableArray *_privateInfoList;
}

+ (id)identifierFromYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *privateInfoList; // @synthesize privateInfoList=_privateInfoList;
@property(nonatomic) unsigned long long day; // @synthesize day=_day;
@property(nonatomic) unsigned long long month; // @synthesize month=_month;
@property(nonatomic) unsigned long long year; // @synthesize year=_year;
- (id)identifier;
- (void)removeInfo:(id)arg1;
- (void)insertInfoAtBegin:(id)arg1;
- (id)infoList;
- (id)initWithYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;

@end

