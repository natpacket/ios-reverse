//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonSendRecordList : MMObject <PBCoding>
{
    NSMutableArray *_md5List;
}

+ (id)getEmoticonSendRecordListPath;
+ (id)getEmoticonRecordRootDir;
+ (void)RemoveEmoticonSendRecordList;
+ (_Bool)IsEmoticonSendRecordListExist;
+ (id)GetEmoticonRecentSendList;
+ (void)initialize;
+ (void)PBArrayAdd_md5List;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *md5List; // @synthesize md5List=_md5List;
- (void)saveToFile;
- (id)allRecentSendMd5sInOrder;
- (_Bool)isMd5InList:(id)arg1;
- (void)delAllMd5;
- (void)delMd5:(id)arg1;
- (void)addMd5:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

