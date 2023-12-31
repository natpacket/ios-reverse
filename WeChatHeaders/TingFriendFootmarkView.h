//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"

@class MMListenRecommendInfo, MMUILabel, MMWebImageView, NSString, RichTextView;

@interface TingFriendFootmarkView : MMUIView <ILinkEventExt>
{
    MMListenRecommendInfo *_footmarkInfo;
    MMWebImageView *_firstHeadImage;
    MMWebImageView *_secondHeadImage;
    MMWebImageView *_thirdHeadImage;
    MMUILabel *_titleLabel;
    RichTextView *_recommendRichTextView;
    MMUILabel *_descLabel;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RichTextView *recommendRichTextView; // @synthesize recommendRichTextView=_recommendRichTextView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *thirdHeadImage; // @synthesize thirdHeadImage=_thirdHeadImage;
@property(retain, nonatomic) MMWebImageView *secondHeadImage; // @synthesize secondHeadImage=_secondHeadImage;
@property(retain, nonatomic) MMWebImageView *firstHeadImage; // @synthesize firstHeadImage=_firstHeadImage;
@property(retain, nonatomic) MMListenRecommendInfo *footmarkInfo; // @synthesize footmarkInfo=_footmarkInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateDisplayWith:(id)arg1;
- (void)configLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

