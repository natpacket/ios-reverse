//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class ContactTagData, MMUILabel, UIButton, UIImageView, UIView;

@interface WCMomentsContactTagCell : MMTableViewCell
{
    UIImageView *_leftCheckMark;
    UIButton *_rightDetailBtn;
    UIView *_seperatorLine;
    MMUILabel *_nameLabel;
    MMUILabel *_memberLabel;
    MMUILabel *_memberCountLabel;
    CDUnknownBlockType _detailCallback;
    ContactTagData *_tagData;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) ContactTagData *tagData; // @synthesize tagData=_tagData;
@property(copy, nonatomic) CDUnknownBlockType detailCallback; // @synthesize detailCallback=_detailCallback;
@property(retain, nonatomic) MMUILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) MMUILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIButton *rightDetailBtn; // @synthesize rightDetailBtn=_rightDetailBtn;
@property(retain, nonatomic) UIImageView *leftCheckMark; // @synthesize leftCheckMark=_leftCheckMark;
- (void)onClickContactTagDetail:(id)arg1;
- (long long)getMaxMemberCount;
- (unsigned long long)getMemberLableCountWithTagData:(id)arg1;
- (id)getMemberDescWithTagData:(id)arg1;
- (void)layoutSubviews;
- (void)initSeperatorLine;
- (void)initMemberCountLabel;
- (void)initRightDetailBtn;
- (void)initMemberLabel;
- (void)initNameLabel;
- (void)initLeftCheckMark;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCheckState:(_Bool)arg1;
- (void)updateContactTag:(id)arg1 checked:(_Bool)arg2 clickedDetail:(CDUnknownBlockType)arg3;

@end

