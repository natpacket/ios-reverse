//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface LiteAppExtInfo : MMObject
{
    unsigned int _liteAppPriority;
    NSString *_liteAppBizData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liteAppPriority; // @synthesize liteAppPriority=_liteAppPriority;
@property(retain, nonatomic) NSString *liteAppBizData; // @synthesize liteAppBizData=_liteAppBizData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
