//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class RichTextView;

@interface WCFinderPersonalCenterSectionFooterView : UICollectionReusableView
{
    RichTextView *_descTextView;
    CDUnknownBlockType _clickActionBlock;
}

+ (double)footerViewHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
- (void)layoutSubviews;
- (void)clickAction;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

