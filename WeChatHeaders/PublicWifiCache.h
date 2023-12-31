//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface PublicWifiCache : MMObject
{
    NSMutableDictionary *_notRegisterDict;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *notRegisterDict; // @synthesize notRegisterDict=_notRegisterDict;
- (id)retrivalApAuthForSsid:(id)arg1;
- (_Bool)removeApBase:(id)arg1;
- (id)retrivalApBaseForMac:(id)arg1;
- (_Bool)saveApBase:(id)arg1;
- (void)cleanCache;
- (void)closeDB;
- (void)initDB;
- (_Bool)shouldUserConfirm;
- (void)userConfirm;
- (id)init;
- (void)dealloc;

@end

