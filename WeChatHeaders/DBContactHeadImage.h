//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface DBContactHeadImage : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _imgHDStatus;
    NSString *_headImgUrl;
    NSString *_headHDImgUrl;
    NSString *_headHDMd5;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_headHDMd5;
+ (void)PBArrayAdd_headHDImgUrl;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_imgHDStatus;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headHDMd5; // @synthesize headHDMd5=_headHDMd5;
@property(retain, nonatomic) NSString *headHDImgUrl; // @synthesize headHDImgUrl=_headHDImgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(nonatomic) unsigned int imgHDStatus; // @synthesize imgHDStatus=_imgHDStatus;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

