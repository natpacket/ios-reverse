//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6WeChat14FTSSectionData.h"

@class NSArray;

@interface _TtC6WeChat20FTSNormalSectionData : _TtC6WeChat14FTSSectionData
{
    // Error parsing type: , name: rows
}

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
- (id)initWithType:(unsigned long long)arg1 array:(id)arg2 isDetailSearch:(_Bool)arg3 searchText:(id)arg4;
- (id)initWithType:(unsigned long long)arg1 favs:(id)arg2 isDetailSearch:(_Bool)arg3;
- (id)initWithType:(unsigned long long)arg1 features:(id)arg2 isDetailSearch:(_Bool)arg3 searchText:(id)arg4;
- (id)initWithType:(unsigned long long)arg1 contacts:(id)arg2 isDetailSearch:(_Bool)arg3;
- (id)initWithType:(unsigned long long)arg1 rowModels:(id)arg2;
@property(nonatomic, readonly) NSArray *rows;

@end
