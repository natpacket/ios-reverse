//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WASyncBaseCmd : MMObject
{
    unsigned int _squence;
    unsigned int _reportId;
    unsigned int _receiveCmdTimeStamp;
    NSString *_username;
    NSString *_appid;
    unsigned long long _cmdType;
    NSString *_cmdKey;
    NSString *_preDownloadRequestkey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *preDownloadRequestkey; // @synthesize preDownloadRequestkey=_preDownloadRequestkey;
@property(nonatomic) unsigned int receiveCmdTimeStamp; // @synthesize receiveCmdTimeStamp=_receiveCmdTimeStamp;
@property(copy, nonatomic) NSString *cmdKey; // @synthesize cmdKey=_cmdKey;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int squence; // @synthesize squence=_squence;
@property(nonatomic) unsigned long long cmdType; // @synthesize cmdType=_cmdType;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)parseBasePropertyFromWxaBaseCmd:(id)arg1;
- (id)cmdUniqueIdentifier;
- (id)description;

@end

