//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameCenterNativeVc.h"

#import "GameCenterBannerNavBarProtocol-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"
#import "IGameLifeTabNavIconDownloadExt-Protocol.h"
#import "IGroupServerUpdateExt-Protocol.h"
#import "MMTabBarDelegate-Protocol.h"
#import "MMWebViewPresetUIChildViewDelegate-Protocol.h"
#import "UITabBarDelegate-Protocol.h"

@class GameCenterBaseMsg, GameCenterTabSettingControl_TabConfiguration, GameCenterTabSettingControl_TabSetting, GameLifeTabBarConfig, GameLifeTabBarLogicController, MMTabBar, MMUIViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol UIViewControllerAnimatedTransitioning;

@interface GameLifeTabBarViewController : GameCenterNativeVc <MMWebViewPresetUIChildViewDelegate, GameCenterBannerNavBarProtocol, MMTabBarDelegate, UITabBarDelegate, IGameCenterMsgNotifyExt, IGroupServerUpdateExt, IGameLifeTabNavIconDownloadExt>
{
    MMUIViewController *_currentVc;
    _Bool _useBlackNav;
    NSMutableDictionary *_navConfigDic;
    NSDictionary *_extra;
    GameLifeTabBarLogicController *_tabBarLogicController;
    NSMutableDictionary *_tab2JumpType;
    int _currentSelectedIndex;
    int _defaultIndex;
    unsigned long long _tabCount;
    GameCenterTabSettingControl_TabConfiguration *_tabBarConfiguration;
    MMTabBar *_tabBar;
    int _tabBarHeight;
    _Bool _switchTabing;
    _Bool _diableSwtichTab;
    _Bool _hideTab;
    NSMutableArray *_tabBarItemViewArray;
    int _chatTabIndex;
    NSMutableDictionary *_urlParams;
    NSString *_preloadExtraData;
    _Bool _openNewMsgVc;
    _Bool _viewHasAppear;
    _Bool _isFromGameLifeRedDot;
    unsigned int _sourceScene;
    NSMutableDictionary *_tabIndex2viewControllerDict;
    GameLifeTabBarConfig *_barConfig;
    NSString *_defaultTabUrl;
    id <UIViewControllerAnimatedTransitioning> _customPopAndPushAnimation;
    UIView *_oriTitleView;
    CDUnknownBlockType _interceptCloseBlock;
    double _startTime;
    double _endTime;
    double _lastVisibileTime;
    double _costTime;
    GameCenterTabSettingControl_TabSetting *_defaultTabSetting;
    unsigned long long _chatPageStyle;
    NSMutableDictionary *_prefetchIndexCgiDataDic;
    unsigned long long _lastMsgUpdateTime;
    unsigned long long _gameChatV3SelectTab;
    NSDictionary *_redPointBusinessInfo;
    GameCenterBaseMsg *_currentMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterBaseMsg *currentMsg; // @synthesize currentMsg=_currentMsg;
@property(retain, nonatomic) NSDictionary *redPointBusinessInfo; // @synthesize redPointBusinessInfo=_redPointBusinessInfo;
@property(nonatomic) unsigned long long gameChatV3SelectTab; // @synthesize gameChatV3SelectTab=_gameChatV3SelectTab;
@property(nonatomic) unsigned long long lastMsgUpdateTime; // @synthesize lastMsgUpdateTime=_lastMsgUpdateTime;
@property(retain, nonatomic) NSMutableDictionary *prefetchIndexCgiDataDic; // @synthesize prefetchIndexCgiDataDic=_prefetchIndexCgiDataDic;
@property(nonatomic) unsigned long long chatPageStyle; // @synthesize chatPageStyle=_chatPageStyle;
@property(nonatomic) _Bool isFromGameLifeRedDot; // @synthesize isFromGameLifeRedDot=_isFromGameLifeRedDot;
@property(nonatomic) _Bool viewHasAppear; // @synthesize viewHasAppear=_viewHasAppear;
@property(nonatomic) _Bool openNewMsgVc; // @synthesize openNewMsgVc=_openNewMsgVc;
@property(retain, nonatomic) GameCenterTabSettingControl_TabSetting *defaultTabSetting; // @synthesize defaultTabSetting=_defaultTabSetting;
@property(nonatomic) double costTime; // @synthesize costTime=_costTime;
@property(nonatomic) double lastVisibileTime; // @synthesize lastVisibileTime=_lastVisibileTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType interceptCloseBlock; // @synthesize interceptCloseBlock=_interceptCloseBlock;
@property(retain, nonatomic) UIView *oriTitleView; // @synthesize oriTitleView=_oriTitleView;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> customPopAndPushAnimation; // @synthesize customPopAndPushAnimation=_customPopAndPushAnimation;
@property(retain, nonatomic) NSString *defaultTabUrl; // @synthesize defaultTabUrl=_defaultTabUrl;
@property(retain, nonatomic) GameLifeTabBarConfig *barConfig; // @synthesize barConfig=_barConfig;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) NSMutableDictionary *tabIndex2viewControllerDict; // @synthesize tabIndex2viewControllerDict=_tabIndex2viewControllerDict;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)reportGameLifeTabPoped;
- (void)reportExposure:(id)arg1;
- (void)reportTabClick:(unsigned int)arg1 TabItem:(id)arg2;
- (void)onGameChatVcWillAppear;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)onMyChatRoomStatusUpdate:(id)arg1;
- (void)onConfigNavgationIconDownloaded;
- (id)currentVc;
- (void)OnClose;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getReEnterTabKey;
- (void)recordExitTabKeyIfNeed;
- (void)updateMessageRedPoint:(id)arg1;
- (void)updateNavItemConfig:(id)arg1 withTotalUnReadCnt:(unsigned int)arg2 showSmallRedDot:(_Bool)arg3;
- (void)getRedPointInfoBy:(id)arg1 toTotalUnReadCnt:(unsigned int *)arg2 showSmallRedDot:(_Bool *)arg3;
- (void)disableSwitchTabBar:(_Bool)arg1;
- (void)hideTabBar:(_Bool)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (struct CGRect)tabBarBtnFrameAtIndex:(long long)arg1;
- (void)jumpToWeapp:(id)arg1 path:(id)arg2;
- (void)notifyWebViewControllBackgroud:(id)arg1;
- (_Bool)switchTab:(int)arg1;
- (_Bool)switchToTabWithKey:(id)arg1 params:(id)arg2;
- (void)addSubViewControllerAndView:(id)arg1;
- (void)initDefaultTab;
- (id)mm_defaultBackgroundColor;
- (id)createWebViewController:(id)arg1 index:(int)arg2 show:(_Bool)arg3 urlImmersiveBgColor:(id)arg4;
- (void)updatePresetUIwithImmersiveBgColor:(id)arg1 presetUI:(id)arg2;
- (void)addViewControllerToDic:(id)arg1 index:(int)arg2 navConfig:(id)arg3;
- (id)createSubWebViewController:(id)arg1 show:(_Bool)arg2 index:(int)arg3;
- (void)preloadWebViewController:(id)arg1 index:(int)arg2;
- (void)setupChildViewContoller;
- (id)getTabBar;
- (void)setupTabBar;
- (void)adjustTableViewInset:(id)arg1;
- (void)onGameLifeTabBarPoped;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (id)getSubWebViewControllerArray;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)keyForChatTab:(id)arg1;
- (void)prefetchGameIndexPageCgiIfNeed;
- (void)initTabData;
- (void)dealloc;
- (void)gameTabApplicationDidEnterBackground;
- (void)calculateVisibleTime;
- (void)gameTabApplicationWillEnterForeground;
- (id)getHomeUrlParams;
- (id)initWIthBarConfig:(id)arg1;
- (_Bool)decodeBase64ToImage:(id)arg1 retImage:(id *)arg2;
- (void)setNavBarButtons:(id)arg1 params:(id)arg2;
- (void)setNavBarColor:(id)arg1 params:(id)arg2;
- (void)setPageTitle:(id)arg1 params:(id)arg2;
- (void)onWebViewController:(id)arg1 recieveNavigationBarEvent:(id)arg2 params:(id)arg3;
- (void)switchViewUnderNav:(_Bool)arg1 forViewController:(id)arg2;
- (void)onViewController:(id)arg1 recieveNavigationBarEvent:(id)arg2 params:(id)arg3;
- (id)navigationBarBackgroundColor;
- (_Bool)useBlackStatusbar;
- (id)navConfigForViewController:(id)arg1;
- (void)setTitle:(id)arg1 viewController:(id)arg2;
- (void)onClickTabSettingRightNavItem:(id)arg1;
- (void)onClickJSDefineRightNavItem:(id)arg1;
- (void)onWebViewRightBarClick:(id)arg1;
- (void)updateNavConfig:(long long)arg1;
- (id)handleIconColorWithIconDark:(_Bool)arg1;
- (id)handleNavBgDynamicColor;
- (id)handleIconDarkColor;
- (id)handleIconLightColor;
- (void)initNavConfig:(id)arg1 navConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

