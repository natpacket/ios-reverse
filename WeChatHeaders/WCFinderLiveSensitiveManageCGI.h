//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSArray;

@interface WCFinderLiveSensitiveManageCGI : WCFinderLiveBaseCgi
{
    int _opType;
    NSArray *_operateSensitiveDataItemList;
    CDUnknownBlockType _completionBlock;
}

+ (id)createSensitiveGetCGIWithFinderTaskId:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)createSensitiveDeleteCGIWithFinderTaskId:(id)arg1 opSensitiveItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)createSensitiveAddCGIWithFinderTaskId:(id)arg1 opSensitiveItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSArray *operateSensitiveDataItemList; // @synthesize operateSensitiveDataItemList=_operateSensitiveDataItemList;
- (_Bool)isSensitiveWordCanTrust:(int)arg1;
- (id)convertSenstiveDataItemListFromResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 opType:(int)arg2 opSensitiveItems:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

