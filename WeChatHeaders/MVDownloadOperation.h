//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAsyncOperation.h"

@class NSString;

@interface MVDownloadOperation : WCAsyncOperation
{
    NSString *_requestId;
    NSString *_uuid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (id)init;

@end

