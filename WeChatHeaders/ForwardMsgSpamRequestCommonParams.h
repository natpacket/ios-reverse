//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ForwardMsgSpamRequestCommonParams : NSObject
{
    _Bool _ignoreOverSeaUser;
    _Bool _ignoreMsgFromSelf;
    _Bool _isRepeat;
    _Bool _isSwitchOff;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isSwitchOff; // @synthesize isSwitchOff=_isSwitchOff;
@property(nonatomic) _Bool isRepeat; // @synthesize isRepeat=_isRepeat;
@property(nonatomic) _Bool ignoreMsgFromSelf; // @synthesize ignoreMsgFromSelf=_ignoreMsgFromSelf;
@property(nonatomic) _Bool ignoreOverSeaUser; // @synthesize ignoreOverSeaUser=_ignoreOverSeaUser;

@end
