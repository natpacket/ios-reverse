//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ContactSearchMonitor, NSDictionary, NSMutableDictionary;

@interface SearchHelpDataItem : NSObject
{
    _Bool _isMultiKeyword;
    _Bool _hasAllContactLoaded;
    NSDictionary *_dicCacheLabelItem;
    NSDictionary *_dicCacheZoneItem;
    NSDictionary *_dicCacheContact;
    NSDictionary *_dicTopHitMMGroupMember;
    NSMutableDictionary *_dicMultiKeywordMatchFlag;
    ContactSearchMonitor *_monitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactSearchMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSMutableDictionary *dicMultiKeywordMatchFlag; // @synthesize dicMultiKeywordMatchFlag=_dicMultiKeywordMatchFlag;
@property(nonatomic) _Bool hasAllContactLoaded; // @synthesize hasAllContactLoaded=_hasAllContactLoaded;
@property(nonatomic) _Bool isMultiKeyword; // @synthesize isMultiKeyword=_isMultiKeyword;
@property(retain, nonatomic) NSDictionary *dicTopHitMMGroupMember; // @synthesize dicTopHitMMGroupMember=_dicTopHitMMGroupMember;
@property(retain, nonatomic) NSDictionary *dicCacheContact; // @synthesize dicCacheContact=_dicCacheContact;
@property(retain, nonatomic) NSDictionary *dicCacheZoneItem; // @synthesize dicCacheZoneItem=_dicCacheZoneItem;
@property(retain, nonatomic) NSDictionary *dicCacheLabelItem; // @synthesize dicCacheLabelItem=_dicCacheLabelItem;
- (id)init;

@end
