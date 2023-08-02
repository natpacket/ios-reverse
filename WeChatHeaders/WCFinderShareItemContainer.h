//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderShareItemProtocol-Protocol.h"

@class NSData, NSString;
@protocol WCFinderShareItemProtocol;

@interface WCFinderShareItemContainer : NSObject <WCFinderShareItemProtocol>
{
    id <WCFinderShareItemProtocol> _detailItem;
    NSData *_detailItemData;
    unsigned long long _type;
}

+ (id)shareItemMap;
+ (void)initialize;
+ (void)PBArrayAdd_detailItemData;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *detailItemData; // @synthesize detailItemData=_detailItemData;
@property(retain, nonatomic) id <WCFinderShareItemProtocol> detailItem; // @synthesize detailItem=_detailItem;
- (id)getEventId;
- (id)getFeedId;
- (unsigned long long)getCardType;
- (void)exposeReport:(id)arg1 params:(id)arg2;
- (_Bool)isFinderPOIRelatedType;
- (_Bool)isFinderTopicLikeShareType;
- (_Bool)canWarpMessage;
- (id)valueForKey:(id)arg1;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(_Bool)arg3;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)momentsSourceText;
- (double)momentsHeightForMedia:(id)arg1;
- (id)momentsDesc;
- (id)chatDesc;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

