//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface DataReportNewUBACacheWCDB : NSObject
{
    WCTDatabase *m_dataBase;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (id)query;
- (void)clear;
- (void)save:(id)arg1;
- (id)genDBPath;
- (void)close;
- (void)reset;

@end

