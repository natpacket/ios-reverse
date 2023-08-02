//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"
#import "YYModel-Protocol.h"

@class NSArray, NSString, WCFinderShareAttachInfo;

@interface WCFinderShareToMomentsItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    NSString *_objectId;
    NSString *_localId;
    NSString *_timeLineThumbName;
    NSString *_objectNonceId;
    NSString *_feedType;
    NSString *_nickname;
    NSString *_avatar;
    NSString *_contactJumpInfoStr;
    NSString *_desc;
    NSString *_mediaCount;
    NSString *_liveId;
    NSArray *_mediaList;
    NSString *_username;
    NSString *_bizUsername;
    WCFinderShareAttachInfo *_megaVideo;
    unsigned long long _authIconType;
    NSString *_authIconUrl;
    NSString *_finderForwardSource;
    NSString *_ecSource;
    NSString *_bizNickname;
    NSString *_bizAvatar;
    NSString *_bizUsernameV2;
    unsigned long long _bizAuthIconType;
    NSString *_bizAuthIconUrl;
    unsigned long long _contentType;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_contentType;
+ (void)PBArrayAdd_ecSource;
+ (void)PBArrayAdd_contactJumpInfoStr;
+ (void)PBArrayAdd_finderForwardSource;
+ (void)PBArrayAdd_bizAuthIconUrl;
+ (void)PBArrayAdd_bizAuthIconType;
+ (void)PBArrayAdd_bizUsernameV2;
+ (void)PBArrayAdd_bizAvatar;
+ (void)PBArrayAdd_bizNickname;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_bizUsername;
+ (void)PBArrayAdd_megaVideo;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_feedType;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_timeLineThumbName;
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *bizAuthIconUrl; // @synthesize bizAuthIconUrl=_bizAuthIconUrl;
@property(nonatomic) unsigned long long bizAuthIconType; // @synthesize bizAuthIconType=_bizAuthIconType;
@property(copy, nonatomic) NSString *bizUsernameV2; // @synthesize bizUsernameV2=_bizUsernameV2;
@property(copy, nonatomic) NSString *bizAvatar; // @synthesize bizAvatar=_bizAvatar;
@property(copy, nonatomic) NSString *bizNickname; // @synthesize bizNickname=_bizNickname;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(copy, nonatomic) NSString *finderForwardSource; // @synthesize finderForwardSource=_finderForwardSource;
@property(retain, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(nonatomic) unsigned long long authIconType; // @synthesize authIconType=_authIconType;
@property(retain, nonatomic) WCFinderShareAttachInfo *megaVideo; // @synthesize megaVideo=_megaVideo;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *mediaCount; // @synthesize mediaCount=_mediaCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *contactJumpInfoStr; // @synthesize contactJumpInfoStr=_contactJumpInfoStr;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(copy, nonatomic) NSString *timeLineThumbName; // @synthesize timeLineThumbName=_timeLineThumbName;
@property(copy, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)exposeReport:(id)arg1 params:(id)arg2;
- (id)timeLineThumbFilePath;
- (_Bool)clearTimeLineThumb;
- (_Bool)createTimeLineThumb;
- (id)contactJumpInfo;
- (void)setContactJumpInfo:(id)arg1;
- (id)getGallaryDesc;
- (id)getTimelineDesc;
- (_Bool)isMemberShipFeed;
- (_Bool)isPureText;
- (id)authIconUrlForDisplay;
- (unsigned long long)authIconTypeForDisplay;
- (id)bizUsernameForDisplay;
- (id)avatarForDisplay;
- (id)nicknameForDisplay;
- (id)toXMLV2;
- (id)toXML;
- (_Bool)fromBrandXML:(struct XmlReaderNode_t *)arg1;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
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
