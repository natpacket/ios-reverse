//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface PublicWifiPageInfo : MMObject
{
    unsigned int _hasMobile;
    unsigned int _finishActionCode;
    unsigned int _isDefaultFocus;
    NSString *_nickName;
    NSString *_appid;
    NSString *_headImgUrl;
    NSString *_welcomeMsg;
    NSString *_privacyDescriUrl;
    NSString *_authurlSign;
    NSString *_subTitle;
    NSString *_finishUrl;
    NSString *_userName;
    NSString *_signature;
    NSString *_qingHuaiPageUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *qingHuaiPageUrl; // @synthesize qingHuaiPageUrl=_qingHuaiPageUrl;
@property(nonatomic) unsigned int isDefaultFocus; // @synthesize isDefaultFocus=_isDefaultFocus;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *finishUrl; // @synthesize finishUrl=_finishUrl;
@property(nonatomic) unsigned int finishActionCode; // @synthesize finishActionCode=_finishActionCode;
@property(nonatomic) unsigned int hasMobile; // @synthesize hasMobile=_hasMobile;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *authurlSign; // @synthesize authurlSign=_authurlSign;
@property(copy, nonatomic) NSString *privacyDescriUrl; // @synthesize privacyDescriUrl=_privacyDescriUrl;
@property(copy, nonatomic) NSString *welcomeMsg; // @synthesize welcomeMsg=_welcomeMsg;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void)dealloc;

@end

