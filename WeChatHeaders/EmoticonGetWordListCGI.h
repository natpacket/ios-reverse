//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@interface EmoticonGetWordListCGI : StoreEmotionBaseCgi
{
    unsigned int _startTime;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _failed;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType failed; // @synthesize failed=_failed;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)doReportResult:(_Bool)arg1 wordSize:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;

@end

