//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CContact, MMUILabel, UIImageView;

@interface RecentForwardSheetItemView : UIView
{
    _Bool _isEditing;
    _Bool _isSelected;
    _Bool _forceDarkMode;
    CContact *_oContact;
    UIImageView *_selectedImageView;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) CContact *oContact; // @synthesize oContact=_oContact;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateImageView;
- (void)changeEditingStatus:(_Bool)arg1;
- (void)changeSelectedStatus:(_Bool)arg1;
- (id)initWithContact:(id)arg1 iconWidth:(double)arg2 bottomPadding:(double)arg3 titleFont:(id)arg4;
- (id)initWithContact:(id)arg1;

@end

