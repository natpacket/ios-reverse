//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class DeviceBrandJumpInfo, MMWebImageView, NSArray, NSString, WAContact, WAContactGetter;
@protocol BraceletTopicRecordDelegate;

@interface BraceletTopicRecordView : UIView <MMWebImageViewDelegate>
{
    double m_offsetY;
    _Bool _isAppleWatch;
    _Bool _isHardware;
    id <BraceletTopicRecordDelegate> _delegate;
    NSArray *_records;
    NSArray *_goals;
    WAContactGetter *_getter;
    WAContact *_contact;
    DeviceBrandJumpInfo *_jumpInfo;
    MMWebImageView *_brandIconView;
}

+ (double)calculateHeightWithSportRecords:(id)arg1 sportGoals:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *brandIconView; // @synthesize brandIconView=_brandIconView;
@property(retain, nonatomic) DeviceBrandJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) _Bool isHardware; // @synthesize isHardware=_isHardware;
@property(nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WAContactGetter *getter; // @synthesize getter=_getter;
@property(retain, nonatomic) NSArray *goals; // @synthesize goals=_goals;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(nonatomic) __weak id <BraceletTopicRecordDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageOK:(id)arg1;
- (void)openWeAppForSports;
- (void)openFinderProfile;
- (void)onClickAppButton:(id)arg1;
- (void)addSportRecord:(id)arg1;
- (void)addAppleRing;
- (void)initTitleViewWithContact:(id)arg1;
- (void)initView;
- (id)initWithSportRecords:(id)arg1 sportGoals:(id)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

