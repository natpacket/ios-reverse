//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "DesignerPortfolioCollectionViewProviderDelegate-Protocol.h"

@class DesignerPortfolioCollectionViewProvider, EmoticonStoreFootView, NSString, UILabel;
@protocol MMStoreEmotionDesignerPackSelectViewControllerDelegate;

@interface MMStoreEmotionDesignerPackSelectViewController : MMUIViewController <DesignerPortfolioCollectionViewProviderDelegate>
{
    unsigned int _designerUin;
    id <MMStoreEmotionDesignerPackSelectViewControllerDelegate> _delegate;
    DesignerPortfolioCollectionViewProvider *_provider;
    UILabel *_emptyHintLabel;
    EmoticonStoreFootView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreFootView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *emptyHintLabel; // @synthesize emptyHintLabel=_emptyHintLabel;
@property(retain, nonatomic) DesignerPortfolioCollectionViewProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(nonatomic) __weak id <MMStoreEmotionDesignerPackSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFetchDoneEmoticonData;
- (void)onFetchMoreEmoticonData;
- (void)onGetEmoticonPacksForDisplay:(_Bool)arg1;
- (void)onTapEmoticonWithItem:(id)arg1;
- (_Bool)shouldRemoveExpiredPack;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (void)initView;
- (void)onTapBackBarItem;
- (void)OnCancelModalView:(id)arg1;
- (void)initNavBar;
- (void)viewDidLoad;
- (id)initWithDesignerUin:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
