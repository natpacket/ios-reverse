//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoderNSCodingBridge-Protocol.h"
#import "WCContentShareable-Protocol.h"

@class NSArray, NSData, NSString;

@interface WCNoteInfo : NSObject <WCContentShareable, PBCoderNSCodingBridge>
{
    int _favLocalId;
    int _editTime;
    int _fromScene;
    NSString *_editUsr;
    NSArray *_dataList;
    NSData *_dataListNSCodingData;
}

+ (id)XmlOfNoteInfoDataList:(id)arg1;
+ (id)dataListFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)xmlTag;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (_Bool)isSupport:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dataListNSCodingData;
+ (void)PBArrayAdd_editUsr;
+ (void)PBArrayAdd_editTime;
+ (void)PBArrayAdd_favLocalId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *dataListNSCodingData; // @synthesize dataListNSCodingData=_dataListNSCodingData;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *editUsr; // @synthesize editUsr=_editUsr;
@property(nonatomic) int editTime; // @synthesize editTime=_editTime;
@property(nonatomic) int favLocalId; // @synthesize favLocalId=_favLocalId;
- (id)toXML;
- (void)afterPBCoderProcess;
- (void)beforePBCoderProcess;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

