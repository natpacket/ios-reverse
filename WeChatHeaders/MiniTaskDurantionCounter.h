//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MiniTaskDurantionCounter : NSObject
{
    id _userInfo;
    unsigned long long _storedDurantion;
    unsigned long long _baselineTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long baselineTime; // @synthesize baselineTime=_baselineTime;
@property(nonatomic) unsigned long long storedDurantion; // @synthesize storedDurantion=_storedDurantion;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (unsigned long long)durantion;
- (void)resume;
- (void)pause;
- (void)reset;
- (id)init;

@end

