//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponent.h"

#import "MMMusicPlayerContollerDelegate-Protocol.h"

@class GridImageView, MMCDNImageView, MMUIImageView, MMUILabel, MMWebImageView, NSMutableArray, NSString;
@protocol MMFavImageComponentDelegate;

@interface MMFavImageComponent : MMComponent <MMMusicPlayerContollerDelegate>
{
    MMUIImageView *m_thumbImageView;
    MMCDNImageView *m_cdnImageView;
    MMWebImageView *m_webImageView;
    GridImageView *m_gridImageView;
    MMUILabel *m_ocrLabel;
    NSMutableArray *m_arrKVOImageView;
    id <MMFavImageComponentDelegate> _delegate;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFavImageComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickPlay:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getThumbImageWithDataFmt:(id)arg1;
- (id)getImgView;
- (id)getThumbView;
- (void)configMusicBtn:(id)arg1 shareItem:(id)arg2;
- (void)configTingBtn:(id)arg1;
- (void)configPlayButton:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)configImage;
- (void)configContentLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

