//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

#import "IFavoritesExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "MMFavImageComponentDelegate-Protocol.h"

@class FavoritesItem, MMFavBaselineComponent, MMFavBigImageFieldComponent, MMFavImageComponent, MMFavTextComponent, MMUIImageView, NSString, UIView;
@protocol MMFavCellComponentDelegate;

@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt, MMFavImageComponentDelegate>
{
    MMUIImageView *m_selectedView;
    MMUIImageView *m_deselectedView;
    MMFavBaselineComponent *m_baselineCom;
    MMFavImageComponent *m_imageCom;
    MMFavTextComponent *m_textCom;
    MMFavBigImageFieldComponent *m_bigImageFieldCom;
    UIView *m_contentView;
    _Bool m_editing;
    _Bool m_bShorten;
    FavoritesItem *_favItem;
    id <MMFavCellComponentDelegate> _delegate;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFavCellComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void)layoutSubviewsAfterChangeContentX:(double)arg1;
- (void)newconfigFavCell;
- (void)onClickDetailBtn:(id)arg1;
- (void)configTextComponent;
- (void)configImageComponent;
- (void)configBaselineComponent;
- (void)favMusicBeignToPlay:(id)arg1;
- (id)getCdnImgView;
- (id)getThumbImageView;
- (id)getThumbComponent;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)changeEditingStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeSelectStatu:(_Bool)arg1;
- (void)configSelectViewWith:(id)arg1;
- (unsigned long long)cellStyle;
- (void)configContentLayout;
- (_Bool)isPadStyle;
- (void)showFTSInfo;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
