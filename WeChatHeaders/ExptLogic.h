//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface ExptLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _lastUpdateTime;
    unsigned int _interval;
}

@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (id)mmExptPath:(id)arg1;
- (_Bool)saveTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (unsigned int)getTimeFromFile:(id)arg1;
- (unsigned int)getExptInterval;
- (void)noteGetExptIntervalSec:(unsigned int)arg1;
- (unsigned int)getLastGetExptTime;
- (void)writeGetExptTime:(unsigned int)arg1;
- (void)noteGetExptTime:(unsigned int)arg1;
- (void)resetGetXExptTime:(unsigned int)arg1;
- (_Bool)OnReceNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)checkToGetSvrExpt;
- (void)dealloc;
- (id)init;

@end

