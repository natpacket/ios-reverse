//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BrandProfileFuwuInfo : NSObject
{
    unsigned int _type;
    NSString *_titleStr;
    NSString *_valueStr;
    NSMutableArray *_subFuwuInfoList;
    unsigned long long _row;
    unsigned long long _column;
    NSString *_key;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(retain, nonatomic) NSMutableArray *subFuwuInfoList; // @synthesize subFuwuInfoList=_subFuwuInfoList;
@property(retain, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isSameFuwuInfoWith:(id)arg1;

@end

