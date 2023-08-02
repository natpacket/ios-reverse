//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TorchCert;

@interface MMFinderLiveOlympicsOperationViewModel : NSObject
{
    unsigned long long _participateButtonOperation;
    unsigned long long _certificateId;
    unsigned long long _participantCount;
    TorchCert *_torchCert;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TorchCert *torchCert; // @synthesize torchCert=_torchCert;
@property(nonatomic) unsigned long long participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) unsigned long long certificateId; // @synthesize certificateId=_certificateId;
@property(nonatomic) unsigned long long participateButtonOperation; // @synthesize participateButtonOperation=_participateButtonOperation;
- (void)unobserveAll;
- (void)observeKeyPath:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

