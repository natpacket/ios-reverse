//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMListDiffable-Protocol.h"

@class SearchMatchTip;
@protocol _TtP6WeChat11FTSRowModel_;

@interface _TtC6WeChat20FTSRowModelContainer : NSObject <MMListDiffable>
{
    // Error parsing type: , name: model
    // Error parsing type: , name: matchTip
    // Error parsing type: , name: type
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFeature:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(_Bool)arg3 searchText:(id)arg4;
- (id)initWithContact:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(_Bool)arg3;
- (id)initWithModel:(id)arg1 matchTip:(id)arg2 type:(unsigned long long)arg3;
@property(nonatomic, readonly) unsigned long long type; // @synthesize type;
@property(nonatomic, readonly) SearchMatchTip *matchTip; // @synthesize matchTip;
@property(nonatomic, readonly) id <_TtP6WeChat11FTSRowModel_> model; // @synthesize model;
- (id)diffIdentifier;

@end

