//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIColor, UIImageView;

@interface ContactMultiSelectCell : MMTableViewCell
{
    _Bool _isEditing;
    _Bool _isSelected;
    _Bool _isDisabled;
    _Bool _isSelectedInRoomContact;
    _Bool _isCheckBoxHiddenInEditing;
    UIImageView *_selectedImageView;
    UIColor *_selectedColor;
}

+ (void)makeEditingCell:(id)arg1 selected:(_Bool)arg2 itemView:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCheckBoxHiddenInEditing; // @synthesize isCheckBoxHiddenInEditing=_isCheckBoxHiddenInEditing;
@property(nonatomic) _Bool isSelectedInRoomContact; // @synthesize isSelectedInRoomContact=_isSelectedInRoomContact;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (unsigned long long)accessibilityTraits;
- (void)changeHideCheckBoxInEditing:(_Bool)arg1;
- (void)changeEditingStatus:(_Bool)arg1;
- (void)updateImageView;
- (void)changeDisableStatus:(_Bool)arg1;
- (void)changeRoomContactSelectedStatus:(_Bool)arg1;
- (void)changeSelectdStatus:(_Bool)arg1;
- (double)contentLeftMargin;
- (void)prepareForReuse;

@end

