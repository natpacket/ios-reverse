//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveTableStyleCommentPubbleSignTextCell.h"

@class CAGradientLayer, CALayer, MMUIView;

@interface MMFinderLiveTableStyleCommentPubbleOfficialNoticeCell : MMFinderLiveTableStyleCommentPubbleSignTextCell
{
    unsigned int _lastRank;
    unsigned int _lastMsgSubtype;
    MMUIView *_colorBackView;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastMsgSubtype; // @synthesize lastMsgSubtype=_lastMsgSubtype;
@property(nonatomic) unsigned int lastRank; // @synthesize lastRank=_lastRank;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIView *colorBackView; // @synthesize colorBackView=_colorBackView;
- (void)createColorLayer;
- (void)createGradientLayer;
- (void)updateBackgroundLayers;
- (_Bool)shouldShowSpecialColor;
- (unsigned int)getRank;
- (_Bool)isFansGroupNotice;
- (void)clearBackgroundLayers;
- (_Bool)isUITypeValid;
- (id)signText;
- (void)layoutUI;
- (void)updateBackgroudColor;

@end
