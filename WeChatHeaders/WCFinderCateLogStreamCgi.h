//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@interface WCFinderCateLogStreamCgi : WCFinderBaseCgi
{
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithTabType:(unsigned long long)arg1 scene:(unsigned long long)arg2 pullType:(long long)arg3 username:(id)arg4 clientStatus:(id)arg5 extBuf:(id)arg6 lastBuf:(id)arg7 successful:(CDUnknownBlockType)arg8 failed:(CDUnknownBlockType)arg9;

@end

