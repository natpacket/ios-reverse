//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCTogetherTailReporter : NSObject
{
    NSMutableDictionary *_operationDictionary;
    long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)generateLogStringWithOperation:(id)arg1;
- (void)report;
- (void)didClickDataItem:(id)arg1;
- (void)didDisplayDataItem:(id)arg1;
- (_Bool)isDataItemValid:(id)arg1;
- (void)clearOperationDictionary;
- (id)getOrCreateOperationWithDataItem:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *operationDictionary; // @synthesize operationDictionary=_operationDictionary;

@end

