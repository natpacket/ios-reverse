//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class ContactTagData, MMUILabel, NSAttributedString, NSString, UIImageView;

@interface ContactTagListTableViewCell : MMTableViewCell
{
    _Bool _showMemberList;
    _Bool _showSelectControl;
    _Bool _isSelected;
    _Bool _isSelectDisabled;
    _Bool _isDeselectDisabled;
    _Bool _isSnapshotMode;
    NSString *_tagName;
    NSAttributedString *_attributeTagName;
    NSString *_memberCountText;
    NSString *_memberListText;
    ContactTagData *_tagData;
    MMUILabel *_titleLabel;
    MMUILabel *_memberCountLabel;
    MMUILabel *_detailLabel;
    UIImageView *_selectIconView;
    double _titleHeight;
    double _detailHeight;
}

+ (double)descLabelFontSize;
- (void).cxx_destruct;
@property(nonatomic) double detailHeight; // @synthesize detailHeight=_detailHeight;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak ContactTagData *tagData; // @synthesize tagData=_tagData;
@property(nonatomic) _Bool isSnapshotMode; // @synthesize isSnapshotMode=_isSnapshotMode;
@property(nonatomic) _Bool isDeselectDisabled; // @synthesize isDeselectDisabled=_isDeselectDisabled;
@property(nonatomic) _Bool isSelectDisabled; // @synthesize isSelectDisabled=_isSelectDisabled;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showSelectControl; // @synthesize showSelectControl=_showSelectControl;
@property(nonatomic) _Bool showMemberList; // @synthesize showMemberList=_showMemberList;
@property(retain, nonatomic) NSString *memberListText; // @synthesize memberListText=_memberListText;
@property(retain, nonatomic) NSString *memberCountText; // @synthesize memberCountText=_memberCountText;
@property(retain, nonatomic) NSAttributedString *attributeTagName; // @synthesize attributeTagName=_attributeTagName;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void)customTableViewCellRecorderControl;
- (void)layoutSubviews;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

