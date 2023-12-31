//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface SessionItemCell : MMTableViewCell
{
    UIImageView *_selectedImage;
    UIImageView *_resourceIcon;
    UIButton *_detailButton;
    UILabel *_sizeLabel;
    UILabel *_sourceLabel;
    shared_ptr_5102c92c _sessionItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(readonly, nonatomic) shared_ptr_5102c92c sessionItem; // @synthesize sessionItem=_sessionItem;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
- (void)layoutSubviews;
- (void)updateSessionItem:(const void *)arg1 selected:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;

@end

