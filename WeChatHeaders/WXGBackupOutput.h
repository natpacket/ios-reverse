//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PacketBackupDataPush, WXGBackupDataInfo;

@interface WXGBackupOutput : NSObject
{
    NSString *_sessionName;
    PacketBackupDataPush *_dataPush;
    WXGBackupDataInfo *_backupDataInfo;
    unsigned long long _outputType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long outputType; // @synthesize outputType=_outputType;
@property(retain, nonatomic) WXGBackupDataInfo *backupDataInfo; // @synthesize backupDataInfo=_backupDataInfo;
@property(retain, nonatomic) PacketBackupDataPush *dataPush; // @synthesize dataPush=_dataPush;
@property(copy, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
- (id)getBackupDataInfo;
- (void)setBakcupDataPushInPath:(id)arg1;
- (void)setBackupDataPush:(id)arg1;
- (id)getBackupDataPush;
- (unsigned long long)getOutputType;
- (id)init;

@end

