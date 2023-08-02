//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonCustomManageView, EmoticonCustomManageWrap, UIImageView;

@interface EmoticonCustomManageCell : UICollectionViewCell
{
    _Bool _isScaled;
    _Bool _shouldShowDvider;
    EmoticonCustomManageWrap *_emoticonWrap;
    EmoticonCustomManageView *_manageView;
    UIImageView *_syncingImg;
    double _currentWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowDvider; // @synthesize shouldShowDvider=_shouldShowDvider;
@property(nonatomic) _Bool isScaled; // @synthesize isScaled=_isScaled;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(retain, nonatomic) UIImageView *syncingImg; // @synthesize syncingImg=_syncingImg;
@property(retain, nonatomic) EmoticonCustomManageView *manageView; // @synthesize manageView=_manageView;
@property(retain, nonatomic) EmoticonCustomManageWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)updateLayoutForAttr;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)doFlashAnimation;
- (id)showingEmoticonMd5;
- (void)updateLayoutWithEmoticonWrap:(id)arg1;
- (void)updateEmoticonWrap:(id)arg1 delegate:(id)arg2 edge:(double)arg3;

@end
