//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderEcObject, FinderMixObject, WCFinderDataItem;

@interface WCFinderPurchasedItem : NSObject
{
    WCFinderDataItem *_dataItem;
    FinderMixObject *_mixObject;
}

+ (id)itemWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderMixObject *mixObject; // @synthesize mixObject=_mixObject;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) _Bool isValid;
- (id)validItem;
@property(readonly, nonatomic) FinderEcObject *ecObject;
@property(readonly, nonatomic) int type;

@end

