//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWCCardPkgExt-Protocol.h"

@class NSMutableArray, NSString, NSTimer;

@interface WCCardDynamicCodeGenerator : MMObject <IWCCardPkgExt>
{
    NSString *_nsCardId;
    NSMutableArray *_arrCodes;
    double _codeExpiredTime;
    unsigned int _uiCountOfNeedRefresh;
    NSTimer *_oCheckExpireTimer;
    _Bool _bFetchingCode;
    unsigned int _uiRefreshInteval;
    unsigned int _refreshInteval;
    CDUnknownBlockType _getCodeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int refreshInteval; // @synthesize refreshInteval=_refreshInteval;
@property(copy, nonatomic) CDUnknownBlockType getCodeBlock; // @synthesize getCodeBlock=_getCodeBlock;
@property(readonly, nonatomic) unsigned int uiRefreshInteval; // @synthesize uiRefreshInteval=_uiRefreshInteval;
- (void)onGetSerialNumberData:(id)arg1 ErrCode:(int)arg2;
- (_Bool)bCodesExpired;
- (void)tryFetchCodeIfLackCode;
- (id)takeOneCode;
- (void)clearAllCode;
- (void)fetchCodeFromSvr;
- (id)getCode:(CDUnknownBlockType)arg1;
- (_Bool)bHasAvailableCode;
- (id)initWithCardId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

