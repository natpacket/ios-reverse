//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface ChatLogDataFileInfo : NSObject <PBCoding>
{
    _Bool _hasScanned;
    unsigned int _fileTime;
    unsigned long long _fileSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileTime;
+ (void)PBArrayAdd_fileSize;
@property(nonatomic) _Bool hasScanned; // @synthesize hasScanned=_hasScanned;
@property(nonatomic) unsigned int fileTime; // @synthesize fileTime=_fileTime;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

