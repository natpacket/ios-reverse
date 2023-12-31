//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, NSString, WAAppPackageInfo, WAUpdatableMsgInfo;

@interface OpenSDKAppBrandItem : MMObject
{
    _Bool _disableForward;
    _Bool _isPrivateMessage;
    unsigned int _appBrandVersion;
    unsigned int _brandOfficialFlag;
    unsigned int _relievedBuyFlag;
    unsigned int _flagshipFlag;
    unsigned int _type;
    unsigned int _secFlagForSinglePageMode;
    NSString *_appBrandUserName;
    NSString *_appBrandAppId;
    NSString *_appBrandPath;
    NSString *_appBrandIconUrl;
    NSString *_shareKey;
    NSString *_shareId;
    WAAppPackageInfo *_packInfo;
    NSMutableDictionary *_dynamicInfo;
    WAUpdatableMsgInfo *_updatableMsgInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int secFlagForSinglePageMode; // @synthesize secFlagForSinglePageMode=_secFlagForSinglePageMode;
@property(retain, nonatomic) WAUpdatableMsgInfo *updatableMsgInfo; // @synthesize updatableMsgInfo=_updatableMsgInfo;
@property(nonatomic) _Bool isPrivateMessage; // @synthesize isPrivateMessage=_isPrivateMessage;
@property(retain, nonatomic) NSMutableDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int flagshipFlag; // @synthesize flagshipFlag=_flagshipFlag;
@property(nonatomic) unsigned int relievedBuyFlag; // @synthesize relievedBuyFlag=_relievedBuyFlag;
@property(nonatomic) unsigned int brandOfficialFlag; // @synthesize brandOfficialFlag=_brandOfficialFlag;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(retain, nonatomic) WAAppPackageInfo *packInfo; // @synthesize packInfo=_packInfo;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSString *appBrandIconUrl; // @synthesize appBrandIconUrl=_appBrandIconUrl;
@property(nonatomic) unsigned int appBrandVersion; // @synthesize appBrandVersion=_appBrandVersion;
@property(retain, nonatomic) NSString *appBrandPath; // @synthesize appBrandPath=_appBrandPath;
@property(retain, nonatomic) NSString *appBrandAppId; // @synthesize appBrandAppId=_appBrandAppId;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

