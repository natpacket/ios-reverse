//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "PAGViewListener-Protocol.h"
#import "WCPayWebPagViewDelegate-Protocol.h"
#import "WCRedEnvelopesReceiveHomePromotionViewDelegate-Protocol.h"

@class ContactUpdateHelper, MMEmoticonView, MMWebImageView, NSDictionary, NSString, UIButton, UIImageView, UIView, WCPayWebImageView, WCRedEnvelopesControlData, WCRedEnvelopesReceiveHomePromotionView;
@protocol WCRedEnvelopesReceiveHomeViewDelegate;

@interface WCRedEnvelopesReceiveHomeView : MMUIView <WCRedEnvelopesReceiveHomePromotionViewDelegate, PAGViewListener, WCPayWebPagViewDelegate>
{
    id <WCRedEnvelopesReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIImageView *m_backgroundMaskView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect m_frame;
    NSDictionary *m_dicBaseInfo;
    WCRedEnvelopesControlData *m_data;
    _Bool m_bSuccessAnmation;
    _Bool m_bCloseAnimation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIView *imageView;
    UIButton *cancel2Button;
    MMWebImageView *maskImageView;
    _Bool _isPreviewMode;
    _Bool _isExpireViewMode;
    _Bool _isLiveMode;
    _Bool _isPromotionViewShowing;
    unsigned int _enterTimestamp;
    ContactUpdateHelper *_m_nickNameHelper;
    ContactUpdateHelper *_m_successOpenNickNameHelper;
    MMEmoticonView *_emoticonView;
    UIImageView *_emoticonBkgImgView;
    UIImageView *_loadingImgView;
    UIImageView *_nicknameBkgView;
    UIImageView *_descTitleBkgView;
    WCPayWebImageView *_corpImageView;
    WCRedEnvelopesReceiveHomePromotionView *_promotionView;
    UIImageView *_promotionMaskView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) _Bool isPromotionViewShowing; // @synthesize isPromotionViewShowing=_isPromotionViewShowing;
@property(retain, nonatomic) UIImageView *promotionMaskView; // @synthesize promotionMaskView=_promotionMaskView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomePromotionView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) WCPayWebImageView *corpImageView; // @synthesize corpImageView=_corpImageView;
@property(retain, nonatomic) UIImageView *descTitleBkgView; // @synthesize descTitleBkgView=_descTitleBkgView;
@property(retain, nonatomic) UIImageView *nicknameBkgView; // @synthesize nicknameBkgView=_nicknameBkgView;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(retain, nonatomic) UIImageView *emoticonBkgImgView; // @synthesize emoticonBkgImgView=_emoticonBkgImgView;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) ContactUpdateHelper *m_successOpenNickNameHelper; // @synthesize m_successOpenNickNameHelper=_m_successOpenNickNameHelper;
@property(retain, nonatomic) ContactUpdateHelper *m_nickNameHelper; // @synthesize m_nickNameHelper=_m_nickNameHelper;
@property(nonatomic) _Bool isLiveMode; // @synthesize isLiveMode=_isLiveMode;
@property(nonatomic) _Bool isExpireViewMode; // @synthesize isExpireViewMode=_isExpireViewMode;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (_Bool)hasPagSkinWidget;
- (_Bool)hasSkinWidget;
- (void)onClickProtomotionView:(id)arg1;
- (void)showPromotionView:(id)arg1;
- (id)creatImageWithMaskImage:(id)arg1 andBackimage:(id)arg2;
- (id)cropImage:(id)arg1 toRect:(struct CGRect)arg2;
- (id)generateMaskImage:(id)arg1;
- (_Bool)hasRedSkin;
- (_Bool)hasEmoticon;
- (id)convertToImage:(id)arg1;
- (void)showSuccessOpenAnimation;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)stopReceiveAnimation;
- (void)startReceiveAnimation;
- (void)reportLocationAndWifi;
- (void)OnOpenRedEnvelopes;
- (void)OnOpenList;
- (void)OnCancelButtonDone;
- (_Bool)accessibilityPerformEscape;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (_Bool)shouldShowDetailButtonWithIsSender:(_Bool)arg1 Type:(int)arg2 ReceiveStutus:(int)arg3 envelopeStutus:(int)arg4 data:(id)arg5;
- (_Bool)shouldShowBottomDescriptionWithType:(int)arg1 envelopeStutus:(int)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

