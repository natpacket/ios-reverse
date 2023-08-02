//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface DBContactOther : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _deleteFlag;
    unsigned int _friendScene;
    NSString *_antispamTicket;
    NSString *_sourceExtInfo;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_sourceExtInfo;
+ (void)PBArrayAdd_antispamTicket;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_deleteFlag;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceExtInfo; // @synthesize sourceExtInfo=_sourceExtInfo;
@property(retain, nonatomic) NSString *antispamTicket; // @synthesize antispamTicket=_antispamTicket;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene=_friendScene;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag=_deleteFlag;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
