//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WADataPipePerformance : NSObject
{
    _Bool _isConcurrent;
    _Bool _needConfirm;
    unsigned int _concurrentTimeout;
    unsigned int _dataLengthInBytes;
    unsigned int _currentQueueNum;
    unsigned long long _datapipeType;
    unsigned long long _enqueueTimeInMs;
    unsigned long long _dequeueTimeInMs;
    unsigned long long _beginCgiTimeInMs;
    unsigned long long _cgiCallbackTimeInMs;
    unsigned long long _beginCgiAfterConfirmTimeInMs;
    unsigned long long _cgiCallbackAfterConfirmTimeInMs;
    unsigned long long _confirmTimeInMs;
    unsigned long long _confirmResponseTimeInMs;
    unsigned long long _dataResponseTimeInMs;
}

@property(nonatomic) unsigned long long dataResponseTimeInMs; // @synthesize dataResponseTimeInMs=_dataResponseTimeInMs;
@property(nonatomic) unsigned long long confirmResponseTimeInMs; // @synthesize confirmResponseTimeInMs=_confirmResponseTimeInMs;
@property(nonatomic) unsigned long long confirmTimeInMs; // @synthesize confirmTimeInMs=_confirmTimeInMs;
@property(nonatomic) _Bool needConfirm; // @synthesize needConfirm=_needConfirm;
@property(nonatomic) unsigned long long cgiCallbackAfterConfirmTimeInMs; // @synthesize cgiCallbackAfterConfirmTimeInMs=_cgiCallbackAfterConfirmTimeInMs;
@property(nonatomic) unsigned long long beginCgiAfterConfirmTimeInMs; // @synthesize beginCgiAfterConfirmTimeInMs=_beginCgiAfterConfirmTimeInMs;
@property(nonatomic) unsigned long long cgiCallbackTimeInMs; // @synthesize cgiCallbackTimeInMs=_cgiCallbackTimeInMs;
@property(nonatomic) unsigned long long beginCgiTimeInMs; // @synthesize beginCgiTimeInMs=_beginCgiTimeInMs;
@property(nonatomic) unsigned long long dequeueTimeInMs; // @synthesize dequeueTimeInMs=_dequeueTimeInMs;
@property(nonatomic) unsigned long long enqueueTimeInMs; // @synthesize enqueueTimeInMs=_enqueueTimeInMs;
@property(nonatomic) unsigned int currentQueueNum; // @synthesize currentQueueNum=_currentQueueNum;
@property(nonatomic) unsigned int dataLengthInBytes; // @synthesize dataLengthInBytes=_dataLengthInBytes;
@property(nonatomic) unsigned int concurrentTimeout; // @synthesize concurrentTimeout=_concurrentTimeout;
@property(nonatomic) _Bool isConcurrent; // @synthesize isConcurrent=_isConcurrent;
@property(nonatomic) unsigned long long datapipeType; // @synthesize datapipeType=_datapipeType;

@end

