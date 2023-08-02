//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMLocationDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_table; // @synthesize m_table;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (_Bool)setAddress:(id)arg1 ByLocation:(struct CLLocationCoordinate2D)arg2 type:(long long)arg3 languageName:(id)arg4;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1 type:(long long)arg2 language:(unsigned long long)arg3;
- (void)closeDBBeforeInit;
- (void)clearData;
- (void)closeDB;
- (void)setupDatabase;
- (id)pathForDatabase;
- (id)init;

@end
