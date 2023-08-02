//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString;

@interface WCFinderLiveGetPromoteJumpInfoCGI : WCFinderLiveBaseCgi
{
    unsigned int _type;
    NSString *_jumpId;
    NSData *_jumpInfoBuffer;
    NSData *_sessionBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSData *jumpInfoBuffer; // @synthesize jumpInfoBuffer=_jumpInfoBuffer;
@property(copy, nonatomic) NSString *jumpId; // @synthesize jumpId=_jumpId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)getUxInfoData;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 type:(unsigned int)arg2 jumpId:(id)arg3 jumpInfoBuffer:(id)arg4 sessionBuffer:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

