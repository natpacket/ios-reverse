//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FinderLiveLeadsComponentExtInfoForAnchor, FinderLiveLeadsComponentInfo, FinderLiveLeadsComponentInfoItem, NSString;

@interface MMFinderLiveLeadsItem : NSObject <NSCopying>
{
    FinderLiveLeadsComponentInfoItem *_infoItem;
}

+ (id)itemWithInfoItem:(id)arg1;
+ (id)itemWithInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveLeadsComponentInfoItem *infoItem; // @synthesize infoItem=_infoItem;
@property(readonly, copy, nonatomic) NSString *countWordingBeforeLiving;
@property(readonly, copy, nonatomic) NSString *countWordingDuringLiving;
@property(readonly, nonatomic) _Bool isWeCom;
@property(nonatomic) _Bool isPromoting;
@property(readonly, nonatomic) FinderLiveLeadsComponentExtInfoForAnchor *anchorExtInfo;
@property(readonly, nonatomic) FinderLiveLeadsComponentInfo *baseInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

