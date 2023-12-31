//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPrivacyPolicyData : NSObject <PBCoding>
{
    unsigned int _updateTime;
    NSString *_birthday;
}

+ (void)testClearAllData;
+ (void)saveBirthday:(id)arg1 userName:(id)arg2;
+ (id)loadDataWithUserName:(id)arg1;
+ (id)filePathWithUserName:(id)arg1;
+ (id)rootPath;
+ (void)initialize;
+ (void)PBArrayAdd_birthday;
+ (void)PBArrayAdd_updateTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
- (id)jsonDesc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

