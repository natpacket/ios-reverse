//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IOplogExt-Protocol.h"

@class NSString;

@interface ElderModeLogic : NSObject <IOplogExt>
{
    _Bool _targetStatus;
}

+ (void)refreshColorSetting;
+ (void)effectElderModeOn:(_Bool)arg1;
+ (_Bool)isElderModeOn;
+ (_Bool)isTTSModeOn;
@property(nonatomic) _Bool targetStatus; // @synthesize targetStatus=_targetStatus;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)setElderModeOn:(_Bool)arg1;
- (void)setTTSModeOn:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

