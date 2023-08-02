//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveQuickReplyModel, RichTextView, UIView;

@interface MMFinderLiveQuickReplyCell : UICollectionViewCell
{
    MMFinderLiveQuickReplyModel *_model;
    UIView *_selectView;
    RichTextView *_commentTextView;
}

+ (struct CGSize)caculateWithModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) MMFinderLiveQuickReplyModel *model; // @synthesize model=_model;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (void)changeCellBackGroundColor:(_Bool)arg1;
- (id)accessibilityLabel;
- (void)updateModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

