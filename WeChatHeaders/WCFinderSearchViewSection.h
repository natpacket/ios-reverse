//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderSearchSecurityTips, WCFinderSearchFeedInfoSession, WCFinderSearchFeedTabGroupSession;

@interface WCFinderSearchViewSection : NSObject
{
    long long _type;
    FinderSearchSecurityTips *_securityTips;
    WCFinderSearchFeedInfoSession *_infoSession;
    WCFinderSearchFeedTabGroupSession *_feedTabGroup;
    long long _displayCountLimit;
}

+ (id)sectionWithFeedGroup:(id)arg1;
+ (id)sectionWithSectionInfos:(id)arg1;
+ (id)sectionWithSecurityTips:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long displayCountLimit; // @synthesize displayCountLimit=_displayCountLimit;
@property(retain, nonatomic) WCFinderSearchFeedTabGroupSession *feedTabGroup; // @synthesize feedTabGroup=_feedTabGroup;
@property(retain, nonatomic) WCFinderSearchFeedInfoSession *infoSession; // @synthesize infoSession=_infoSession;
@property(retain, nonatomic) FinderSearchSecurityTips *securityTips; // @synthesize securityTips=_securityTips;
@property(nonatomic) long long type; // @synthesize type=_type;
- (long long)rowNumberOfSection;
- (id)init;

@end

