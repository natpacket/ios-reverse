//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class Announcement, NSString;

@interface AnnouncementCache : NSObject <PBCoding>
{
    _Bool _clicked;
    unsigned int _endTimestamp;
    Announcement *_announcement;
}

+ (void)initialize;
+ (void)PBArrayAdd_endTimestamp;
+ (void)PBArrayAdd_clicked;
+ (void)PBArrayAdd_announcement;
- (void).cxx_destruct;
@property(nonatomic) unsigned int endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) _Bool clicked; // @synthesize clicked=_clicked;
@property(retain, nonatomic) Announcement *announcement; // @synthesize announcement=_announcement;
- (_Bool)outOfDate;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

