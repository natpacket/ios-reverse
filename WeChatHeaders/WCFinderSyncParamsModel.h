//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderRedDotCtrlInfo;

@interface WCFinderSyncParamsModel : NSObject
{
    unsigned int _reportScene;
    unsigned long long _selectorType;
    long long _scene;
    long long _stayTLInterval;
    NSString *_finderUsername;
    WCFinderRedDotCtrlInfo *_guideRedDotCtrlInfo;
    WCFinderRedDotCtrlInfo *_finderEntranceRedDotCtrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntranceRedDotCtrlInfo; // @synthesize finderEntranceRedDotCtrlInfo=_finderEntranceRedDotCtrlInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *guideRedDotCtrlInfo; // @synthesize guideRedDotCtrlInfo=_guideRedDotCtrlInfo;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) long long stayTLInterval; // @synthesize stayTLInterval=_stayTLInterval;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long selectorType; // @synthesize selectorType=_selectorType;
- (id)initWithSelectorType:(unsigned long long)arg1 scene:(long long)arg2 reportScene:(unsigned int)arg3 stayTLInterval:(long long)arg4 finderUsername:(id)arg5;

@end
