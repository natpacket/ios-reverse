//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TingCoverInfo, TingPAGCoverController;

@interface TingPlayToolBoxVM : NSObject
{
    _Bool _enableLongPress;
    long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_recommendTitle;
    NSString *_theCoverUrl;
    NSArray *_coverUrls;
    TingCoverInfo *_coverInfo;
    NSString *_uniqueKey;
    NSObject *_userData;
    NSString *_discoverItemId;
    TingPAGCoverController *_pagTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPAGCoverController *pagTask; // @synthesize pagTask=_pagTask;
@property(retain, nonatomic) NSString *discoverItemId; // @synthesize discoverItemId=_discoverItemId;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(retain, nonatomic) TingCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(retain, nonatomic) NSArray *coverUrls; // @synthesize coverUrls=_coverUrls;
@property(copy, nonatomic) NSString *theCoverUrl; // @synthesize theCoverUrl=_theCoverUrl;
@property(copy, nonatomic) NSString *recommendTitle; // @synthesize recommendTitle=_recommendTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool enableLongPress; // @synthesize enableLongPress=_enableLongPress;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)tryInitPAGTask;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
