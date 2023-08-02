//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAAppMsgItem, WAShareAppMessageContextSpecialGameRecordModel, WAShareAppMessageContextSpecialWeishiModel, WAShareAppMessageThumbImagePool;

@interface WAShareAppMessageContextModel : NSObject
{
    _Bool _bMutliContact;
    _Bool _shouldUseUpdatableShare;
    _Bool _isToDoMessage;
    _Bool _isPrivateMessage;
    unsigned int _debugModeType;
    int _cardType;
    unsigned long long _shareType;
    NSString *_appID;
    NSString *_username;
    NSString *_title;
    NSString *_desc;
    NSString *_appMediaUrl;
    NSString *_appName;
    NSString *_sourceDisplayname;
    NSString *_sourceUsername;
    WAAppMsgItem *_WeAppMsgItem;
    WAShareAppMessageContextSpecialWeishiModel *_weishiModel;
    WAShareAppMessageContextSpecialGameRecordModel *_gameRecordModel;
    NSString *_thumbImageKey;
    NSString *_thumbUrl;
    NSString *_fromAppName;
    NSString *_messageExtraData;
    WAShareAppMessageThumbImagePool *_thumbImagePool;
    NSString *_updatableShareTemplateId;
    NSString *_toDoActivityId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPrivateMessage; // @synthesize isPrivateMessage=_isPrivateMessage;
@property(retain, nonatomic) NSString *toDoActivityId; // @synthesize toDoActivityId=_toDoActivityId;
@property(nonatomic) _Bool isToDoMessage; // @synthesize isToDoMessage=_isToDoMessage;
@property(copy, nonatomic) NSString *updatableShareTemplateId; // @synthesize updatableShareTemplateId=_updatableShareTemplateId;
@property(nonatomic) _Bool shouldUseUpdatableShare; // @synthesize shouldUseUpdatableShare=_shouldUseUpdatableShare;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) WAShareAppMessageThumbImagePool *thumbImagePool; // @synthesize thumbImagePool=_thumbImagePool;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) _Bool bMutliContact; // @synthesize bMutliContact=_bMutliContact;
@property(copy, nonatomic) NSString *fromAppName; // @synthesize fromAppName=_fromAppName;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *thumbImageKey; // @synthesize thumbImageKey=_thumbImageKey;
@property(retain, nonatomic) WAShareAppMessageContextSpecialGameRecordModel *gameRecordModel; // @synthesize gameRecordModel=_gameRecordModel;
@property(retain, nonatomic) WAShareAppMessageContextSpecialWeishiModel *weishiModel; // @synthesize weishiModel=_weishiModel;
@property(retain, nonatomic) WAAppMsgItem *WeAppMsgItem; // @synthesize WeAppMsgItem=_WeAppMsgItem;
@property(copy, nonatomic) NSString *sourceUsername; // @synthesize sourceUsername=_sourceUsername;
@property(copy, nonatomic) NSString *sourceDisplayname; // @synthesize sourceDisplayname=_sourceDisplayname;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appMediaUrl; // @synthesize appMediaUrl=_appMediaUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned long long shareType; // @synthesize shareType=_shareType;
@property(readonly, nonatomic) _Bool shouldSendGetShareInfoCGI;

@end

