//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EdgeComputingJsApiBase.h"

@class EdgeComputingDBService, NSMutableArray, NSMutableDictionary;

@interface EdgeComputingJsApiReadEdgeDBData : EdgeComputingJsApiBase
{
    EdgeComputingDBService *_dBService;
    NSMutableArray *_dbQueryKeyCache;
    NSMutableDictionary *_dbQueryValueCache;
}

- (void).cxx_destruct;
- (void)clear;
- (unsigned int)getType;
- (id)functionName;
- (id)logic:(id)arg1;
- (_Bool)registerIntoContext:(id)arg1;
- (id)init;

@end

