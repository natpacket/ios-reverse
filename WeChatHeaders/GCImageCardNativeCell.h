//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCChatBaseCell.h"

@class MMUILabel, MMWebImageView, UIImageView, UIView;

@interface GCImageCardNativeCell : GCChatBaseCell
{
    UIView *_containerView;
    MMWebImageView *_coverImageView;
    MMUILabel *_descLabel;
    UIImageView *_playIcon;
}

+ (struct CGSize)innerContentSizeForImageCard:(id)arg1;
+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

