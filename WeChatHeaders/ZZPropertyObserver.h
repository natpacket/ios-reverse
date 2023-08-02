//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IZZReactive-Protocol.h"

@class NSString;
@protocol IZZReactive;

@interface ZZPropertyObserver : NSObject <IZZReactive>
{
    id _instance;
    NSString *_propertyName;
    CDUnknownBlockType _map;
    CDUnknownBlockType _filter;
    CDUnknownBlockType _next;
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _filterAction;
    id _mapAction;
    NSString *_tag;
    id _removeObserverAction;
    void *_data;
    ZZPropertyObserver *_prePO;
    ZZPropertyObserver *_nextPO;
}

+ (id)createWithInstance:(id)arg1 propertyName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ZZPropertyObserver *nextPO; // @synthesize nextPO=_nextPO;
@property(nonatomic) __weak ZZPropertyObserver *prePO; // @synthesize prePO=_prePO;
@property(nonatomic) void *data; // @synthesize data=_data;
@property(copy, nonatomic) id removeObserverAction; // @synthesize removeObserverAction=_removeObserverAction;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id mapAction; // @synthesize mapAction=_mapAction;
@property(copy, nonatomic) CDUnknownBlockType filterAction; // @synthesize filterAction=_filterAction;
@property(copy, nonatomic) CDUnknownBlockType nextAction; // @synthesize nextAction=_nextAction;
@property(copy, nonatomic) CDUnknownBlockType next; // @synthesize next=_next;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) __weak id instance; // @synthesize instance=_instance;
- (id)target;
@property(readonly, nonatomic) __weak NSObject<IZZReactive> *headPO;
@property(readonly, nonatomic) NSObject<IZZReactive> *installAndFire;
@property(readonly, nonatomic) NSObject<IZZReactive> *fire;
@property(readonly, nonatomic) NSObject<IZZReactive> *install;
- (void)setIDPropertyValue:(id)arg1;
- (void)setPropertyValue:(void *)arg1;
- (id)getIDRetrunValue;
- (void)getReturnValue:(void *)arg1;
- (void)notiValueChanged;
- (void)removeObserver;
- (void)addObserver:(id)arg1;
- (void)resetObserverIfNeed;
- (void)regetDataIfNeed;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerProperty;
- (void)dealloc;
- (id)initWithInstance:(id)arg1 propertyName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

