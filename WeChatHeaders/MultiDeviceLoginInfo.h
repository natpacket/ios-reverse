//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MultiDeviceLoginInfo : NSObject
{
    _Bool _showSyncChat;
    unsigned int _fromScene;
    unsigned int _iconType;
    unsigned int _sessionCountLimit;
    unsigned int _timeout;
    unsigned int _functionBit;
    unsigned int _clientVersion;
    unsigned int _deviceState;
    unsigned int _deviceClientVersion;
    NSString *_URLString;
    NSDictionary *_extInfo;
    NSString *_tips;
    NSString *_warningTips;
    NSString *_deviceTips;
    long long _responseType;
    NSString *_usageURL;
    NSString *_spamSecondVerifyURL;
    NSString *_multiDeviceTips;
    NSString *_autoLoginSwitchTip;
    NSString *_deviceName;
    NSString *_title;
    NSString *_confirmButtonTitle;
    NSString *_cancelButtonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(retain, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showSyncChat; // @synthesize showSyncChat=_showSyncChat;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) unsigned int deviceClientVersion; // @synthesize deviceClientVersion=_deviceClientVersion;
@property(retain, nonatomic) NSString *autoLoginSwitchTip; // @synthesize autoLoginSwitchTip=_autoLoginSwitchTip;
@property(retain, nonatomic) NSString *multiDeviceTips; // @synthesize multiDeviceTips=_multiDeviceTips;
@property(nonatomic) unsigned int deviceState; // @synthesize deviceState=_deviceState;
@property(retain, nonatomic) NSString *spamSecondVerifyURL; // @synthesize spamSecondVerifyURL=_spamSecondVerifyURL;
@property(retain, nonatomic) NSString *usageURL; // @synthesize usageURL=_usageURL;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned int functionBit; // @synthesize functionBit=_functionBit;
@property(nonatomic) long long responseType; // @synthesize responseType=_responseType;
@property(nonatomic) unsigned int timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned int sessionCountLimit; // @synthesize sessionCountLimit=_sessionCountLimit;
@property(retain, nonatomic) NSString *deviceTips; // @synthesize deviceTips=_deviceTips;
@property(retain, nonatomic) NSString *warningTips; // @synthesize warningTips=_warningTips;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (_Bool)isAutoLoginEnabled;
- (_Bool)showAutoLoginEntrance;
- (_Bool)shouldSelectSyncChatByDefault;
- (_Bool)showSyncChatEntrance;
- (id)deviceIconImage;
- (id)initWithURLString:(id)arg1 fromScene:(unsigned int)arg2 extInfo:(id)arg3;

@end

