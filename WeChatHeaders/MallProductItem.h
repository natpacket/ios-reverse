//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface MallProductItem : NSObject <PBCoding, NSCopying>
{
    unsigned int _type;
    NSString *_mallProductInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_mallProductInfo;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mallProductInfo; // @synthesize mallProductInfo=_mallProductInfo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

