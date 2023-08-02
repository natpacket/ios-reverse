//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderContactExt-Protocol.h"
#import "WCFinderSelfContactExt-Protocol.h"

@class FinderNewUserPrepareResponse, NSMutableArray, NSString, NSURL, WCFinderContact;
@protocol WCFinderPersonalCenterViewModelDelegate;

@interface WCFinderPersonalCenterViewModel : NSObject <WCFinderContactExt, WCFinderSelfContactExt>
{
    _Bool _isCreateLivePrepareChecked;
    _Bool _logoutCacheFlag;
    id <WCFinderPersonalCenterViewModelDelegate> _delegate;
    FinderNewUserPrepareResponse *_userPrepareResponse;
    WCFinderContact *_contact;
    NSMutableArray *_otherContacts;
    NSString *_refObjectid;
    unsigned long long _refCommentScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool logoutCacheFlag; // @synthesize logoutCacheFlag=_logoutCacheFlag;
@property(nonatomic) unsigned long long refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(retain, nonatomic) NSMutableArray *otherContacts; // @synthesize otherContacts=_otherContacts;
@property(readonly, nonatomic) _Bool isCreateLivePrepareChecked; // @synthesize isCreateLivePrepareChecked=_isCreateLivePrepareChecked;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
@property(nonatomic) __weak id <WCFinderPersonalCenterViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (void)updateContactFromUserPrepare:(id)arg1 prepareFinders:(id)arg2;
- (void)reloadContact;
- (void)onFinderContactUpdate:(id)arg1;
- (void)changeSelectedContact:(id)arg1;
@property(readonly, nonatomic) NSURL *accountLogoutUrl;
- (_Bool)isAccountFreezing;
@property(readonly, nonatomic) _Bool accountLogout;
- (void)clearCameraRedPoint;
- (unsigned long long)getFinderUnreadMentionCount;
- (unsigned long long)getWechatUnreadMentionCount;
- (_Bool)forbidenForeignerFinder;
- (_Bool)isForeignerContact;
- (_Bool)isContactSilent;
- (_Bool)isContactBlocked;
- (_Bool)haveFinderContact;
- (id)unAuthFinderInfo;
- (_Bool)canPost;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

