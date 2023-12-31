//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"
#import "WCFinderFittingWidthRichViewDelegate-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderProfileCardContainerExposeDelegate-Protocol.h"
#import "WCFinderProfileServiceViewDelegate-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderStreamProfileContactViewModelDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIButton, UIColor, WCFinderHeadImageView, WCFinderImageRedDotBaseView, WCFinderLinearView, WCFinderProfileReporter, WCFinderSteamProfileHeaderTheme, WCFinderStreamProfileContactViewModel, WCFinderStreamProfileHeaderViewMeasure;
@protocol WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate;

@interface WCFinderStreamProfileHeaderView : UIView <WCFinderHeadImageViewDelegate, ILinkEventExt, WCFinderFittingWidthRichViewDelegate, WCFinderStreamProfileContactViewModelDelegate, WCFinderProfileServiceViewDelegate, WCFinderProfileCardContainerExposeDelegate, WCFinderRedDotExt>
{
    _Bool limitOne;
    WCFinderProfileReporter *_reporter;
    WCFinderSteamProfileHeaderTheme *_theme;
    id <WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate> _delegate;
    WCFinderStreamProfileHeaderViewMeasure *_measure;
    UIColor *_darkBtnBGColor;
    UIButton *_postButton;
    WCFinderStreamProfileContactViewModel *_viewModel;
    UIView *_headerImageContainer;
    WCFinderHeadImageView *_headImageView;
    NSString *_headerImageUrl;
    WCFinderImageRedDotBaseView *_moreActionButton;
    UIButton *_followButton;
    WCFinderLinearView *_userNameInfoContainer;
    WCFinderLinearView *_nameAreaContainer;
    UIView *_infoContainer;
    NSMutableDictionary *_customItemInsets;
    NSMutableDictionary *_infoItemInsets;
    NSMutableDictionary *_specialPadding;
    NSMutableDictionary *_customLayoutFuncBlockMap;
    UIButton *_postBtn;
}

+ (id)parseJumpInfoTailIcon:(id)arg1 size:(struct CGSize *)arg2;
+ (_Bool)supportDarkModel;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *postBtn; // @synthesize postBtn=_postBtn;
@property(retain, nonatomic) NSMutableDictionary *customLayoutFuncBlockMap; // @synthesize customLayoutFuncBlockMap=_customLayoutFuncBlockMap;
@property(retain, nonatomic) NSMutableDictionary *specialPadding; // @synthesize specialPadding=_specialPadding;
@property(retain, nonatomic) NSMutableDictionary *infoItemInsets; // @synthesize infoItemInsets=_infoItemInsets;
@property(retain, nonatomic) NSMutableDictionary *customItemInsets; // @synthesize customItemInsets=_customItemInsets;
@property(retain, nonatomic) UIView *infoContainer; // @synthesize infoContainer=_infoContainer;
@property(retain, nonatomic) WCFinderLinearView *nameAreaContainer; // @synthesize nameAreaContainer=_nameAreaContainer;
@property(retain, nonatomic) WCFinderLinearView *userNameInfoContainer; // @synthesize userNameInfoContainer=_userNameInfoContainer;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) WCFinderImageRedDotBaseView *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) NSString *headerImageUrl; // @synthesize headerImageUrl=_headerImageUrl;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *headerImageContainer; // @synthesize headerImageContainer=_headerImageContainer;
@property(retain, nonatomic) WCFinderStreamProfileContactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) UIColor *darkBtnBGColor; // @synthesize darkBtnBGColor=_darkBtnBGColor;
@property(retain, nonatomic) WCFinderStreamProfileHeaderViewMeasure *measure; // @synthesize measure=_measure;
@property(nonatomic) __weak id <WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) WCFinderProfileReporter *reporter; // @synthesize reporter=_reporter;
- (void)onRichView:(id)arg1 expandChanged:(_Bool)arg2;
- (long long)currentMMUserInterfaceStyle;
- (long long)overrideUserInterfaceStyle;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onHeaderViewCoverChanged:(long long)arg1;
- (void)onHeaderViewModelChanged;
- (void)sizeToFit;
- (double)layoutInfoContainer;
- (void)layoutuserNameInfoContainer:(double)arg1;
- (double)containerMaxWidth;
- (double)layoutHeaderArea;
- (double)layoutElements;
- (void)calculateSizeForInfoContaierFieldViews;
- (void)onClickServiceMenuItem:(id)arg1;
- (void)onClickPostButton;
- (void)setupClubMember;
- (_Bool)hiddenMessageButton;
- (id)serviceKFJumpInfo;
- (_Bool)showServiceWecomKF;
- (_Bool)showWecomKF;
- (id)buttonTitleColor;
- (void)setupButtonIconTextPadding:(id)arg1 padding:(double)arg2;
- (void)setupNormalButtonBackground:(id)arg1;
- (void)setupBottomLiveButton:(id)arg1;
- (void)setupBottomPostButton:(id)arg1;
- (void)setupWecomKFView:(id)arg1;
- (void)setupAddWechatInContainer:(id)arg1;
- (void)setupMsgButtonInContainer:(id)arg1;
- (struct CGRect)followButtonFrame;
- (id)setupFollowButtonInContainer:(id)arg1;
- (void)setupButtons;
- (void)setupStoreButton;
- (CDUnknownBlockType)animatedShowRecommendFollowView;
- (id)fetchFollowRecommend:(_Bool)arg1;
- (void)setupFollowRecommend:(id)arg1;
- (void)setupServiceView;
- (struct WCFinderProfileCard)createMemberShipCard;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)setupCards;
- (void)setupWinterOlympicsView;
- (void)setupMiniApp;
- (void)setupStoreView;
- (void)setupAddFriendView;
- (void)setupBrandInfoView;
- (void)setupPOIView;
- (void)setupFans;
- (void)setupShowInWXProfile;
- (void)setupFollowCount;
- (id)userAccountInfo;
- (void)setupOriginalStatement;
- (void)setupIPMCN;
- (id)signatureDisplayText;
- (void)setupSignature;
- (void)setupSignatureGuide;
- (void)setupGameAchievement;
- (id)createTagLabel;
- (void)setupPostButton;
- (void)setupThiredLines;
- (id)displayAuthInfoText:(id)arg1;
- (void)setupAuthViews;
- (void)setupNameLineViews;
- (void)setupHeaderView;
- (void)updateWithViewModel:(id)arg1;
- (id)createMaskButtonWithHeight:(double)arg1 maskColor:(id)arg2;
- (id)createNormalIconArrowField:(id)arg1;
- (id)createIconArrowField:(id)arg1;
- (id)createLinkIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createColorIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createLabel:(id)arg1 color:(id)arg2 coveredColor:(id)arg3;
- (id)createHeadImageView;
- (id)createHeadImageViewContainer;
- (double)headerImageTop;
- (double)headerImageBottom;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

