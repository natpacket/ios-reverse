//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderRedDotExt-Protocol.h"

@class FinderNewUserPrepareResponse, NSString, WCFinderContact, WCTableViewManager;

@interface WCFinderCreatorCenterViewController : MMUIViewController <WCFinderRedDotExt>
{
    _Bool _hasExposeAnchorTaskEntrance;
    _Bool _hasExposeAnchorTaskRedDot;
    WCFinderContact *_contact;
    FinderNewUserPrepareResponse *_userPrepare;
    WCTableViewManager *_tableViewManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasExposeAnchorTaskRedDot; // @synthesize hasExposeAnchorTaskRedDot=_hasExposeAnchorTaskRedDot;
@property(nonatomic) _Bool hasExposeAnchorTaskEntrance; // @synthesize hasExposeAnchorTaskEntrance=_hasExposeAnchorTaskEntrance;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)openMiniAppSilence;
- (void)updateOriginalPlainRedDotWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (id)makeSectionSeparator;
- (void)addToSection:(id)arg1 withTitle:(id)arg2 action:(SEL)arg3;
- (void)addToSection:(id)arg1 withTitle:(id)arg2 status:(id)arg3 action:(SEL)arg4;
- (id)produceGuideUrl;
- (void)clickProduceGuide;
- (void)addOtherSection;
- (void)clickStore;
- (void)addStoreSection;
- (void)clickLiveLottery;
- (void)clickLiveAnchorTaskEntrance;
- (_Bool)checkAccountLogout;
- (void)showLiveAgencyWebPage;
- (void)showIncomVC;
- (void)clickLiveIncome;
- (void)addLiveAnchorTaskSection:(id)arg1;
- (void)addLiveSection;
- (void)clickOriginalCertification;
- (_Bool)enableShowOriginalEntry;
- (void)addOriginalCellToSection:(id)arg1;
- (void)onClickAuth;
- (void)addAuthSection;
- (void)reloadTableView;
- (void)setupTableView;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 userPrepare:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

