//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSDate, NSString;

@interface AppMsgShareItem : NSObject <NSCopying, PBCoding>
{
    _Bool _hasItemShowType;
    _Bool _isNativePage;
    _Bool _isPaySubscribe;
    _Bool _showSourceInfo;
    unsigned int _itemShowType;
    unsigned int _duration;
    unsigned int _width;
    unsigned int _height;
    unsigned int _funcFlag;
    NSDate *_pubTime;
    NSString *_vid;
}

+ (void)initialize;
+ (void)PBArrayAdd_showSourceInfo;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_isNativePage;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_hasItemShowType;
- (void).cxx_destruct;
@property(nonatomic) _Bool showSourceInfo; // @synthesize showSourceInfo=_showSourceInfo;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(nonatomic) _Bool isNativePage; // @synthesize isNativePage=_isNativePage;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

