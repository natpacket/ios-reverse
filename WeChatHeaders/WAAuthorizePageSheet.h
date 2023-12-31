//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPageSheet.h"

#import "IWAAuthorizePage-Protocol.h"

@class NSString, UICollectionView, WAAuthPageSheetViewModel, WAAuthorizeResultInfo, WAAuthorizeSheetInfo, ZZFLEXAngel;
@protocol WAAuthorizePageSheetDelegate;

@interface WAAuthorizePageSheet : WAPageSheet <IWAAuthorizePage>
{
    id <WAAuthorizePageSheetDelegate> _authDelegate;
    WAAuthorizeSheetInfo *_info;
    WAAuthorizeResultInfo *_resultInfo;
    CDUnknownBlockType _acceptAction;
    CDUnknownBlockType _rejectAction;
    CDUnknownBlockType _showPrivacyInfoAction;
    UICollectionView *_collectionView;
    ZZFLEXAngel *_angel;
    WAAuthPageSheetViewModel *_psViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthPageSheetViewModel *psViewModel; // @synthesize psViewModel=_psViewModel;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType showPrivacyInfoAction; // @synthesize showPrivacyInfoAction=_showPrivacyInfoAction;
@property(copy, nonatomic) CDUnknownBlockType rejectAction; // @synthesize rejectAction=_rejectAction;
@property(copy, nonatomic) CDUnknownBlockType acceptAction; // @synthesize acceptAction=_acceptAction;
@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) WAAuthorizeSheetInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <WAAuthorizePageSheetDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void)pushVC:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (void)onInfoButtonClick;
- (void)pageSheetWillAppear:(id)arg1;
- (id)subViewModel;
- (id)customSubviewClassList;
- (id)subviewClassList;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubViews;
- (void)reloadData;
- (void)setupUI;
- (double)contentHeight;
- (id)init;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

