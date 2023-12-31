//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFlutterViewController.h"

#import "BrandTLViewControllerProtocol-Protocol.h"
#import "IMusicPlayerExt-Protocol.h"

@class BrandTLExptConfig, BrandTimelineReportLogic, CMessageWrap, FlutterBrandTLApiImplementation, MusicCallbackApi, NSString;

@interface BrandTLFlutterViewController : MMFlutterViewController <IMusicPlayerExt, BrandTLViewControllerProtocol>
{
    _Bool isShowRedDotInMainFrameSession;
    _Bool _hasViewWillBePushedOnce;
    _Bool _isPush;
    _Bool _didAppear;
    _Bool _ignoreUpdateEnterInfoOnce;
    _Bool _canShowPersonalCenter;
    _Bool _enableAd;
    _Bool _enableBrandService;
    unsigned int redDotCount;
    unsigned int enterSessionInfoNotifyType;
    BrandTLExptConfig *exptConfig;
    unsigned long long source;
    unsigned long long enterRowIndexInMainFrameSession;
    CMessageWrap *enterMsgInMainFrameSession;
    FlutterBrandTLApiImplementation *_apiImpl;
    BrandTimelineReportLogic *_reportLogic;
    MusicCallbackApi *_flutterMusicPlayerCallBack;
}

+ (id)genInitialInstance:(_Bool)arg1 enableAd:(_Bool)arg2 enableMB:(_Bool)arg3 exptShowFlag:(unsigned int)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MusicCallbackApi *flutterMusicPlayerCallBack; // @synthesize flutterMusicPlayerCallBack=_flutterMusicPlayerCallBack;
@property(nonatomic) _Bool enableBrandService; // @synthesize enableBrandService=_enableBrandService;
@property(nonatomic) _Bool enableAd; // @synthesize enableAd=_enableAd;
@property(nonatomic) _Bool canShowPersonalCenter; // @synthesize canShowPersonalCenter=_canShowPersonalCenter;
@property(nonatomic) _Bool ignoreUpdateEnterInfoOnce; // @synthesize ignoreUpdateEnterInfoOnce=_ignoreUpdateEnterInfoOnce;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) _Bool hasViewWillBePushedOnce; // @synthesize hasViewWillBePushedOnce=_hasViewWillBePushedOnce;
@property(retain, nonatomic) BrandTimelineReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) FlutterBrandTLApiImplementation *apiImpl; // @synthesize apiImpl=_apiImpl;
@property(nonatomic) unsigned int enterSessionInfoNotifyType; // @synthesize enterSessionInfoNotifyType;
@property(retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession; // @synthesize enterMsgInMainFrameSession;
@property(nonatomic) unsigned int redDotCount; // @synthesize redDotCount;
@property(nonatomic) _Bool isShowRedDotInMainFrameSession; // @synthesize isShowRedDotInMainFrameSession;
@property(nonatomic) unsigned long long enterRowIndexInMainFrameSession; // @synthesize enterRowIndexInMainFrameSession;
@property(nonatomic) unsigned long long source; // @synthesize source;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig; // @synthesize exptConfig;
- (void)destroyAdBrandService;
- (void)destroyBrandService;
- (void)setupAdBrandService;
- (void)setupBrandService;
- (void)destroyMagicBrush;
- (void)setupMagicBrush;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (id)entryPoint;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)updateEnterInfo;
- (void)didTakeSnapshot:(id)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (id)getMagicBrushFlutterPlugins;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithExptConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

