//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderSyncExptSwitchModel : NSObject
{
    _Bool _finderMentionEntranceIndependent;
    NSString *_testExptString;
    long long _timelineTabCacheFeedValue;
    NSMutableDictionary *_finderInitExptBufferDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *finderInitExptBufferDic; // @synthesize finderInitExptBufferDic=_finderInitExptBufferDic;
@property(nonatomic) _Bool finderMentionEntranceIndependent; // @synthesize finderMentionEntranceIndependent=_finderMentionEntranceIndependent;
@property(nonatomic) long long timelineTabCacheFeedValue; // @synthesize timelineTabCacheFeedValue=_timelineTabCacheFeedValue;
@property(copy, nonatomic) NSString *testExptString; // @synthesize testExptString=_testExptString;
- (id)getExptValueByCmdId:(long long)arg1 keyName:(id)arg2;
- (_Bool)getBoolExptCmdId:(long long)arg1 keyName:(id)arg2;
- (long long)getIntExptCmdId:(long long)arg1 keyName:(id)arg2 defaultValue:(long long)arg3;
- (void)loadSyncExptSwitch;
- (void)updateFinderInitExptBufferDic:(id)arg1;
- (id)initWithExptBufferDic:(id)arg1;

@end

