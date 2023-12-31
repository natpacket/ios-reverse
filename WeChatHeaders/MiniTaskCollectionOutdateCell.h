//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MiniTaskCollectionBaseCell.h"

@class MMUIButton, MMUILabel, UIImageView, UIView;

@interface MiniTaskCollectionOutdateCell : MiniTaskCollectionBaseCell
{
    UIImageView *_coverImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUIButton *_favButton;
    MMUIButton *_deleteButton;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)onSelectAtFav;
- (void)onSelectAtClose;
- (void)prepareForReuse;
- (void)setIsEditing:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)initUI;
- (struct CGRect)menuPopoverFrame;
- (id)snapShotView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

