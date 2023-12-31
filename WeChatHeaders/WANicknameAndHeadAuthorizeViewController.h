//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAuthorizeViewController.h"

#import "IWAAuthorizeAddAvatarServiceDelegate-Protocol.h"
#import "IWANicknameAndHeadAuthorizePageSheet-Protocol.h"

@class NSString, UITableView, WAAuthorizeResultInfo, WANickNameAndHeaderAuthViewModel, WANicknameAndHeadAuthorizeSheetInfo;
@protocol IWAAuthorizeAddAvatarService, WAAuthorizePageDelegate;

@interface WANicknameAndHeadAuthorizeViewController : WAAuthorizeViewController <IWAAuthorizeAddAvatarServiceDelegate, IWANicknameAndHeadAuthorizePageSheet>
{
    unsigned int _selectedAvatarId;
    unsigned int _sessionId;
    WANickNameAndHeaderAuthViewModel *_nhaViewModel;
    NSString *_appId;
    id <IWAAuthorizeAddAvatarService> _authorizeAddAvatarProxyService;
    UITableView *_tableView;
}

+ (id)convertAvatarInfoListFromProto:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <IWAAuthorizeAddAvatarService> authorizeAddAvatarProxyService; // @synthesize authorizeAddAvatarProxyService=_authorizeAddAvatarProxyService;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) WANickNameAndHeaderAuthViewModel *nhaViewModel; // @synthesize nhaViewModel=_nhaViewModel;
@property(readonly, nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
- (id)avatarInfo;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)arg1;
- (void)handleDelAvatarResp:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)deleteAvatar:(id)arg1;
- (void)scrollToCurrentIndex;
- (void)markAvartarIdSelected:(unsigned int)arg1;
- (void)tryAddAvatar;
- (void)reloadData;
- (id)initWithInfo:(id)arg1 appId:(id)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType acceptAction;
@property(nonatomic) __weak id <WAAuthorizePageDelegate> authDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WANicknameAndHeadAuthorizeSheetInfo *info; // @dynamic info;
@property(copy, nonatomic) CDUnknownBlockType rejectAction;
@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property(readonly) Class superclass;

@end

