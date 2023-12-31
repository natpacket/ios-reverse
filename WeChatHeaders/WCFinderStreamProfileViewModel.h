//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderMegaVideoDataExt-Protocol.h"
#import "WCFinderModUserInfoExt-Protocol.h"
#import "WCFinderStreamProfileExt-Protocol.h"
#import "WCFinderStreamProfilePageDisplayExt-Protocol.h"
#import "WCFinderTopicDataKeyExt-Protocol.h"
#import "WCFinderUserPageFetchExt-Protocol.h"

@class ForwardMessageLogicController, NSArray, NSMutableArray, NSMutableSet, NSNumber, NSString, WCFinderContact, WCFinderProfilePrivateViewModel, WCFinderPushProfileParams, WCFinderStreamProfileContactViewModel, WCFinderStreamProfilePageItem;
@protocol WCFinderStreamProfileViewModelDelegate;

@interface WCFinderStreamProfileViewModel : NSObject <WCFinderContactExt, ForwardMessageLogicDelegate, WCFinderUserPageFetchExt, WCFinderModUserInfoExt, WCFinderMegaVideoDataExt, WCFinderTopicDataKeyExt, WCFinderStreamProfileExt, WCFinderStreamProfilePageDisplayExt>
{
    _Bool _loadingContact;
    _Bool _loadContactFailed;
    _Bool _isOwneProfile;
    _Bool _enablePrivateLock;
    _Bool _showHalfScreenShowInWXProfileView;
    _Bool _hiddenTabAfterLoadCache;
    unsigned int _enterType;
    WCFinderStreamProfileContactViewModel *_headerViewModel;
    NSString *_username;
    NSString *_viewername;
    id <WCFinderStreamProfileViewModelDelegate> _delegate;
    NSString *_accountInfoUrl;
    NSArray *_displayPageModels;
    WCFinderStreamProfilePageItem *_profileProductWindowViewModelItem;
    WCFinderProfilePrivateViewModel *_privateAccountModel;
    ForwardMessageLogicController *_forwardLogic;
    NSNumber *_pendingFollowState;
    NSArray *_privateDisplayPageModels;
    NSMutableArray *_pendingFetchDataPages;
    NSArray *_supportPageTypes;
    NSMutableSet *_displayClasses;
    NSMutableSet *_waitRequiredPageFetch;
    WCFinderStreamProfilePageItem *_loadingItem;
    NSString *_selectedPageWhenDataLoaded;
}

+ (id)supportPageClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selectedPageWhenDataLoaded; // @synthesize selectedPageWhenDataLoaded=_selectedPageWhenDataLoaded;
@property(nonatomic) _Bool hiddenTabAfterLoadCache; // @synthesize hiddenTabAfterLoadCache=_hiddenTabAfterLoadCache;
@property(retain, nonatomic) WCFinderStreamProfilePageItem *loadingItem; // @synthesize loadingItem=_loadingItem;
@property(retain, nonatomic) NSMutableSet *waitRequiredPageFetch; // @synthesize waitRequiredPageFetch=_waitRequiredPageFetch;
@property(retain, nonatomic) NSMutableSet *displayClasses; // @synthesize displayClasses=_displayClasses;
@property(retain, nonatomic) NSArray *supportPageTypes; // @synthesize supportPageTypes=_supportPageTypes;
@property(retain, nonatomic) NSMutableArray *pendingFetchDataPages; // @synthesize pendingFetchDataPages=_pendingFetchDataPages;
@property(retain, nonatomic) NSArray *privateDisplayPageModels; // @synthesize privateDisplayPageModels=_privateDisplayPageModels;
@property(retain, nonatomic) NSNumber *pendingFollowState; // @synthesize pendingFollowState=_pendingFollowState;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) WCFinderProfilePrivateViewModel *privateAccountModel; // @synthesize privateAccountModel=_privateAccountModel;
@property(retain, nonatomic) WCFinderStreamProfilePageItem *profileProductWindowViewModelItem; // @synthesize profileProductWindowViewModelItem=_profileProductWindowViewModelItem;
@property(retain, nonatomic) NSArray *displayPageModels; // @synthesize displayPageModels=_displayPageModels;
@property(nonatomic) _Bool showHalfScreenShowInWXProfileView; // @synthesize showHalfScreenShowInWXProfileView=_showHalfScreenShowInWXProfileView;
@property(retain, nonatomic) NSString *accountInfoUrl; // @synthesize accountInfoUrl=_accountInfoUrl;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) __weak id <WCFinderStreamProfileViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool enablePrivateLock; // @synthesize enablePrivateLock=_enablePrivateLock;
@property(readonly, nonatomic) _Bool isOwneProfile; // @synthesize isOwneProfile=_isOwneProfile;
@property(retain, nonatomic) NSString *viewername; // @synthesize viewername=_viewername;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool loadContactFailed; // @synthesize loadContactFailed=_loadContactFailed;
@property(nonatomic) _Bool loadingContact; // @synthesize loadingContact=_loadingContact;
@property(retain, nonatomic) WCFinderStreamProfileContactViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void)onProfileExtInfoMemberShipInfoChanged;
- (id)pageReportInfoForLog25496;
- (void)fetchMemberShipInfo;
- (void)fetchOtherInfos;
- (id)dataScene;
- (void)onStreamProfilePage:(id)arg1 turnDisplay:(_Bool)arg2;
- (id)createItemForUserInfo:(id)arg1;
- (void)doRebuildDisplayPageModels;
- (void)rebuildDisplayPageModels;
- (void)removeDisplayPageModelObserve;
- (void)updatePageDisplayFlag:(Class)arg1 display:(_Bool)arg2;
- (void)updatePage:(Class)arg1 display:(_Bool)arg2;
- (void)fetchPageData;
- (id)createPageModelFromOldModels:(id)arg1;
- (void)createPageModels;
- (void)onUserInfoChange;
- (void)notifySubModelDataChanged:(CDUnknownBlockType)arg1;
- (void)onFinderUserPageLogouted;
- (_Bool)showAuthorPerspectiveLogoutPage;
- (void)onFinderUserPageContactInfoUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)retryWhenUserpageFailed;
- (void)modUserShowFinderInWXProfile:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)checkShouldShowConcertTicketAfterFirstReservation;
- (void)handleLiveNoticeForUser;
- (void)handleLiveNoticeForAuthor;
- (id)liveNoticeInfo;
- (void)coverUploadFailure;
- (void)coverUploadSucess:(id)arg1;
- (_Bool)shouldShowWasBlockedTips;
- (_Bool)shouldHiddenContentForPrivateAccount;
- (void)setProfileHeaderExtInfo:(id)arg1;
- (void)updateProfileHeaderExtInfo;
- (id)profileHeaderExtInfo;
- (void)shareNameCardToFriend;
- (void)modifyBlockPoster:(_Bool)arg1;
- (void)getContactWithNickname:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)onFeedFollowStatusChanged:(unsigned long long)arg1 optype:(unsigned long long)arg2;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)fetchProfileExtInfo;
@property(readonly, nonatomic) _Bool shouldHiddenTab;
@property(readonly, nonatomic) NSString *redirectNonceID;
@property(readonly, nonatomic) NSString *redirectFeedID;
- (_Bool)isDisplayPrivatePage;
- (_Bool)hasGuatantor;
- (_Bool)isClubContactMaster;
- (_Bool)shouldHiddenRightMenu;
@property(readonly, nonatomic) WCFinderPushProfileParams *params;
- (void)setupHasShowHalfScreenShowInProfileView;
- (unsigned long long)currentCommentScene;
@property(readonly, nonatomic) NSString *logoutPageUrl;
@property(readonly, nonatomic) _Bool isAccountLogoutDone;
@property(readonly, nonatomic) _Bool isAccountLogout;
@property(readonly, nonatomic) WCFinderContact *contact;
- (_Bool)isFinderIdentity;
@property(readonly, nonatomic) _Bool isAuthorPerspective;
- (void)dealloc;
- (void)prepareWithViewer:(id)arg1 contact:(id)arg2 params:(id)arg3;
- (id)initWithContact:(id)arg1 viewer:(id)arg2 params:(id)arg3;
- (id)initWithUsername:(id)arg1 viewer:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

