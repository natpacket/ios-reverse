//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, WCADCanvasEggAnimationInfo, WCADCanvasGiveHBCardInfo, WCArrowDownIconStyle;

@interface WCADCanvasInfo : NSObject <NSCoding>
{
    NSArray *originalPageList;
    NSArray *adCanvasPageList;
    NSString *fromAdXml;
    NSString *shareTitle;
    NSString *shareDesc;
    NSString *shareWebUrl;
    NSString *shareThumbUrl;
    long long sizeType;
    int basicWidth;
    int basicRootFontSize;
    long long widthRoundingType;
    long long heightRoundingType;
    _Bool shouldVideoLayerRasterize;
    int type;
    int subType;
    int visibleCount;
    NSString *canvasId;
    _Bool _isInteractiveCanvas;
    _Bool _forceOpenVoice;
    _Bool _canvasFullScreen;
    int enterType;
    int disableShareBitSet;
    int bizId;
    int _forceStay;
    int _statusBarStyle;
    NSString *shareAppId;
    NSString *shareType;
    NSString *userInfo;
    WCArrowDownIconStyle *_arrowDownIconStyle;
    NSString *_officialSyncBuffer;
    NSString *_rightBarTitle;
    NSString *_rightBarCanvasId;
    NSString *_rightBarCanvasExt;
    NSString *_canvasInfoId;
    NSString *_pageId;
    NSArray *_globalComponentItems;
    WCADCanvasEggAnimationInfo *_eggAnimationInfo;
    WCADCanvasGiveHBCardInfo *_giveHBCardInfo;
    NSString *_canvasDynamicInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canvasFullScreen; // @synthesize canvasFullScreen=_canvasFullScreen;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(nonatomic) _Bool forceOpenVoice; // @synthesize forceOpenVoice=_forceOpenVoice;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) WCADCanvasGiveHBCardInfo *giveHBCardInfo; // @synthesize giveHBCardInfo=_giveHBCardInfo;
@property(retain, nonatomic) WCADCanvasEggAnimationInfo *eggAnimationInfo; // @synthesize eggAnimationInfo=_eggAnimationInfo;
@property(retain, nonatomic) NSArray *globalComponentItems; // @synthesize globalComponentItems=_globalComponentItems;
@property(nonatomic) _Bool isInteractiveCanvas; // @synthesize isInteractiveCanvas=_isInteractiveCanvas;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *canvasInfoId; // @synthesize canvasInfoId=_canvasInfoId;
@property(retain, nonatomic) NSString *rightBarCanvasExt; // @synthesize rightBarCanvasExt=_rightBarCanvasExt;
@property(retain, nonatomic) NSString *rightBarCanvasId; // @synthesize rightBarCanvasId=_rightBarCanvasId;
@property(retain, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
@property(retain, nonatomic) NSString *officialSyncBuffer; // @synthesize officialSyncBuffer=_officialSyncBuffer;
@property(nonatomic) int forceStay; // @synthesize forceStay=_forceStay;
@property(retain, nonatomic) WCArrowDownIconStyle *arrowDownIconStyle; // @synthesize arrowDownIconStyle=_arrowDownIconStyle;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId;
@property(retain, nonatomic) NSString *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NSString *shareType; // @synthesize shareType;
@property(retain, nonatomic) NSString *shareAppId; // @synthesize shareAppId;
@property(nonatomic) int bizId; // @synthesize bizId;
@property(nonatomic) int visibleCount; // @synthesize visibleCount;
@property(nonatomic) int disableShareBitSet; // @synthesize disableShareBitSet;
@property(nonatomic) int enterType; // @synthesize enterType;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) _Bool shouldVideoLayerRasterize; // @synthesize shouldVideoLayerRasterize;
@property(nonatomic) long long heightRoundingType; // @synthesize heightRoundingType;
@property(nonatomic) long long widthRoundingType; // @synthesize widthRoundingType;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize;
@property(nonatomic) int basicWidth; // @synthesize basicWidth;
@property(nonatomic) long long sizeType; // @synthesize sizeType;
@property(retain, nonatomic) NSString *shareThumbUrl; // @synthesize shareThumbUrl;
@property(retain, nonatomic) NSString *shareWebUrl; // @synthesize shareWebUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *fromAdXml; // @synthesize fromAdXml;
@property(retain, nonatomic) NSArray *originalPageList; // @synthesize originalPageList;
- (_Bool)isSpecialFinderRedEnvelopeCanvas;
- (id)fetchRandomEncoreInfo;
- (id)fetchTransitionAnimationInfoForShakeAnimation;
- (id)fetchTransitionImgInfosForShakeAnimation;
- (_Bool)canShowShakeAnimation;
- (id)fetchTransitionImgInfoForTwistAnimation;
- (_Bool)canShowTwistAnimation;
- (_Bool)hasLoadAllVisiblePages;
@property(readonly, nonatomic) NSArray *adCanvasPageList; // @synthesize adCanvasPageList;
- (void)updateAdCanvasPageListWithinMaxCount:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

