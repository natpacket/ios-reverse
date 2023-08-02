//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class AVAsset, AVAssetImageGenerator, UIImageView;

@interface WCFinderVideoSliderView : MMUIView
{
    AVAssetImageGenerator *_coverGenerator;
    MMUIView *_sliderBarView;
    UIImageView *_selectedView;
    unsigned long long _thumbCount;
    CDUnknownBlockType _selectedChangeBlock;
    double _keyFrameRate;
    AVAsset *_avAsset;
}

+ (id)resizeImageForCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(nonatomic) double keyFrameRate; // @synthesize keyFrameRate=_keyFrameRate;
@property(copy, nonatomic) CDUnknownBlockType selectedChangeBlock; // @synthesize selectedChangeBlock=_selectedChangeBlock;
@property(nonatomic) unsigned long long thumbCount; // @synthesize thumbCount=_thumbCount;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) MMUIView *sliderBarView; // @synthesize sliderBarView=_sliderBarView;
@property(retain, nonatomic) AVAssetImageGenerator *coverGenerator; // @synthesize coverGenerator=_coverGenerator;
- (void)setSelectedPlayTime:(double)arg1;
- (double)getCurrentPlayTime;
- (void)refreshSelectedView;
- (void)longPressSelectCoverGes:(id)arg1;
- (void)panSelectCoverGes:(id)arg1;
- (void)loadSliderByPlayerAsset:(id)arg1 keyFrameRate:(double)arg2 coverTimeStamp:(double)arg3 selectedChangeBlock:(CDUnknownBlockType)arg4;
- (void)layoutAllSubviews;
- (id)initWithHeight:(double)arg1 maxWidth:(double)arg2 cardWidHeightRatio:(double)arg3;

@end

