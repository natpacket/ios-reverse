//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAppAuthTableViewCellData : NSObject
{
    _Bool _isBottomCell;
    unsigned long long _rowIndex;
    NSString *_appName;
    NSString *_appTypeDesc;
    NSString *_appScope;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBottomCell; // @synthesize isBottomCell=_isBottomCell;
@property(copy, nonatomic) NSString *appScope; // @synthesize appScope=_appScope;
@property(copy, nonatomic) NSString *appTypeDesc; // @synthesize appTypeDesc=_appTypeDesc;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;

@end

