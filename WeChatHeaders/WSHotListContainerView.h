//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ISearchConfigDataExt-Protocol.h"
#import "WSWebViewPluginableProtocol-Protocol.h"
#import "_TtP6WeChat33WSWebViewExceptionHandlerDelegate_-Protocol.h"

@class MMUILabel, MMUIViewController, NSMutableArray, NSString, SearchCgiGuideConfig, WSLocalTemplateController, WSWebViewPluginScheduler;
@protocol SearchGuideViewDelegate;

@interface WSHotListContainerView : UIView <ISearchConfigDataExt, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, WSWebViewPluginableProtocol>
{
    _Bool _isVisable;
    _Bool _enableSendViewAppearJSEvent;
    MMUIViewController *_viewController;
    id <SearchGuideViewDelegate> _delegate;
    WSWebViewPluginScheduler *_pluginScheduler;
    WSLocalTemplateController *_webviewController;
    NSMutableArray *_arrEntryDatas;
    NSMutableArray *_arrButtons;
    MMUILabel *_titleLabel;
    UIView *_lineView;
    SearchCgiGuideConfig *_vertInfo;
    long long _searchSessionID;
}

+ (void)removeCache;
+ (id)getPreloadInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableSendViewAppearJSEvent; // @synthesize enableSendViewAppearJSEvent=_enableSendViewAppearJSEvent;
@property(nonatomic) long long searchSessionID; // @synthesize searchSessionID=_searchSessionID;
@property(retain, nonatomic) SearchCgiGuideConfig *vertInfo; // @synthesize vertInfo=_vertInfo;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *arrButtons; // @synthesize arrButtons=_arrButtons;
@property(retain, nonatomic) NSMutableArray *arrEntryDatas; // @synthesize arrEntryDatas=_arrEntryDatas;
@property(retain, nonatomic) WSLocalTemplateController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) __weak id <SearchGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)reloadWebview;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (void)onSearchConfigDataUpdated;
- (void)onSearchConfigDataFailToUpdate;
- (void)reloadView;
- (void)showDynamicViewAnimated:(_Bool)arg1;
- (void)sendOnUiInit;
- (void)initPluginScheduler;
- (id)webview;
- (void)layoutSubviews;
- (void)onTapButton:(id)arg1;
- (void)hideContentViewAnimated;
- (void)showContentViewAnimated:(_Bool)arg1;
- (void)observeViewVisableStatus;
- (void)initWebview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tryRecycleSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

