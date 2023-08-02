//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol RingToneVibrateDataSource;

@interface RingToneVibrateController : NSObject
{
    _Bool _storageFilelongTermIfNeed;
    _Bool _isVibrating;
    id <RingToneVibrateDataSource> _dataSource;
    CDUnknownBlockType _onVibrate;
    NSString *_identifier;
}

+ (void)VibrateCustomizedForFriend:(id)arg1;
+ (void)ClassicsRepeatVibration;
+ (_Bool)CustomizedVibrateEnabledWhileAPPBackground;
+ (_Bool)CustomizedVibrateEnabledWhileAuditioning;
+ (_Bool)CustomizedVibrateEnabled;
+ (_Bool)SupportCustomizedVibrate;
+ (_Bool)VibrateEnabled;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVibrating; // @synthesize isVibrating=_isVibrating;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType onVibrate; // @synthesize onVibrate=_onVibrate;
@property(nonatomic) _Bool storageFilelongTermIfNeed; // @synthesize storageFilelongTermIfNeed=_storageFilelongTermIfNeed;
@property(nonatomic) __weak id <RingToneVibrateDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)applicationEnterBackground;
- (void)applicationWillBecomeActive;
- (double)getVibrateProgressWithStartPlayTime:(unsigned long long)arg1;
- (void)tryVibrateWithRingID:(id)arg1;
- (void)stop;
- (void)replay;
- (void)checkAndPlayVibrateFile:(id)arg1;
- (void)classicsRepeatVibration;
- (_Bool)enableCustomizedVibrate;

@end

