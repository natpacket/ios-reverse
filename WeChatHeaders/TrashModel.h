//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, SightDraft, WCDataItem, WCLocationInfo, WCTimelineExtBean;

@interface TrashModel : NSObject <NSCoding>
{
    _Bool _isDynamicTagEnabled;
    _Bool _canReEdit;
    unsigned int _createTime;
    unsigned int _dataItemCreateTime;
    unsigned int _likeCnt;
    unsigned int _commentCnt;
    NSString *_localId;
    NSString *_svrId;
    NSString *_userName;
    NSString *_draftID;
    unsigned long long _draftType;
    NSString *_content;
    NSArray *_imageArray;
    SightDraft *_sightDraft;
    long long _lastPrivacy;
    WCLocationInfo *_poiInfo;
    NSArray *_tempSelectContacts;
    NSArray *_remindContactUsernames;
    NSArray *_lastPostVisibleLabelNames;
    NSArray *_lastPostInVisibleLabelNames;
    unsigned long long _pasteLength;
    WCDataItem *_forwardItem;
    NSString *_sessionId;
    WCTimelineExtBean *_extBean;
}

+ (id)getSaveRootDir;
+ (id)fromBuffer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int commentCnt; // @synthesize commentCnt=_commentCnt;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt=_likeCnt;
@property(nonatomic) _Bool canReEdit; // @synthesize canReEdit=_canReEdit;
@property(retain, nonatomic) WCDataItem *forwardItem; // @synthesize forwardItem=_forwardItem;
@property(nonatomic) _Bool isDynamicTagEnabled; // @synthesize isDynamicTagEnabled=_isDynamicTagEnabled;
@property(nonatomic) unsigned long long pasteLength; // @synthesize pasteLength=_pasteLength;
@property(retain, nonatomic) NSArray *lastPostInVisibleLabelNames; // @synthesize lastPostInVisibleLabelNames=_lastPostInVisibleLabelNames;
@property(retain, nonatomic) NSArray *lastPostVisibleLabelNames; // @synthesize lastPostVisibleLabelNames=_lastPostVisibleLabelNames;
@property(retain, nonatomic) NSArray *remindContactUsernames; // @synthesize remindContactUsernames=_remindContactUsernames;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) long long lastPrivacy; // @synthesize lastPrivacy=_lastPrivacy;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int dataItemCreateTime; // @synthesize dataItemCreateTime=_dataItemCreateTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long draftType; // @synthesize draftType=_draftType;
@property(retain, nonatomic) NSString *draftID; // @synthesize draftID=_draftID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *svrId; // @synthesize svrId=_svrId;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (id)debugDescription;
- (_Bool)isRecyclableExpired;
- (_Bool)isDisplayExpired;
- (void)archiveToFile;
- (id)getSavePath;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

