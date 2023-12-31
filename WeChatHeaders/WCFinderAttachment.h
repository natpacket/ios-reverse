//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class FinderJumpInfoAttachment, NSString, WCFinderVideoAttachment;

@interface WCFinderAttachment : NSObject <WCTColumnCoding, PBCoding>
{
    int _type;
    WCFinderVideoAttachment *_videoAttachment;
    FinderJumpInfoAttachment *_jumpInfoAttachment;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_jumpInfoAttachment;
+ (void)PBArrayAdd_videoAttachment;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfoAttachment *jumpInfoAttachment; // @synthesize jumpInfoAttachment=_jumpInfoAttachment;
@property(retain, nonatomic) WCFinderVideoAttachment *videoAttachment; // @synthesize videoAttachment=_videoAttachment;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)genFinderJupmInfo;
- (id)genFinderAttachment;
@property(readonly, copy) NSString *description;
- (id)initWithFinderAttachment:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

