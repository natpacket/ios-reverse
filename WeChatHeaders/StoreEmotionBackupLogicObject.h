//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "StoreEmotionUploadMyPanelListCgiDelegate-Protocol.h"

@class NSArray, NSString, StoreEmotionUploadMyPanelListCgi;
@protocol StoreEmotionBackupLogicObjectDelegate;

@interface StoreEmotionBackupLogicObject : MMObject <StoreEmotionUploadMyPanelListCgiDelegate>
{
    _Bool m_hasCheckFileExist;
    _Bool _stopFileMagration;
    _Bool _m_isActive;
    _Bool _m_hasStartLogic;
    StoreEmotionUploadMyPanelListCgi *_uploadCgi;
    id <StoreEmotionBackupLogicObjectDelegate> _delegate;
    NSArray *_needUploadPids;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(retain, nonatomic) NSArray *needUploadPids; // @synthesize needUploadPids=_needUploadPids;
@property(nonatomic) __weak id <StoreEmotionBackupLogicObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StoreEmotionUploadMyPanelListCgi *uploadCgi; // @synthesize uploadCgi=_uploadCgi;
@property(nonatomic) _Bool stopFileMagration; // @synthesize stopFileMagration=_stopFileMagration;
@property(readonly, nonatomic) _Bool hasCheckFileExist; // @synthesize hasCheckFileExist=m_hasCheckFileExist;
- (void)onStoreEmotionUploadMyPanelListCgiFailed;
- (void)onStoreEmotionUploadMyPanelListCgiOk;
- (id)getStoreEmotionList;
- (_Bool)checkIfNeedBackup;
- (_Bool)canStartCgiNow;
- (void)startInternalLogic;
- (_Bool)checkFileExistWithEmoticonList:(id)arg1 needCheckThumb:(_Bool)arg2;
- (void)onCheckFileExistFinished;
- (void)asyncCheckFileExist;
- (_Bool)isActive;
- (void)startLogicWithNeedCheckFileExist:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

