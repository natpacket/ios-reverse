//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MuteBrandReport : NSObject
{
    _Bool _enableNumberNoticeAcctCountFromSearch;
    unsigned long long _action;
    unsigned long long _timestamp;
    long long _totalUnreadCount;
    long long _brandsCount;
    long long _chooseBrandCount;
}

+ (long long)genTotalUnreadBrandCount;
+ (void)reportExitListAction:(long long)arg1 totalCount:(long long)arg2 chooseBySearch:(_Bool)arg3;
+ (void)reportEntryListAction:(long long)arg1;
+ (void)reportCloseAction;
+ (void)reportOpenAction;
@property(nonatomic) _Bool enableNumberNoticeAcctCountFromSearch; // @synthesize enableNumberNoticeAcctCountFromSearch=_enableNumberNoticeAcctCountFromSearch;
@property(nonatomic) long long chooseBrandCount; // @synthesize chooseBrandCount=_chooseBrandCount;
@property(nonatomic) long long brandsCount; // @synthesize brandsCount=_brandsCount;
@property(nonatomic) long long totalUnreadCount; // @synthesize totalUnreadCount=_totalUnreadCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)report;

@end

