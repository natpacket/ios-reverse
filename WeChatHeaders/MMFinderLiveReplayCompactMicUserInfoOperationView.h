//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUser, UILabel, WCFinderHeadImageView;

@interface MMFinderLiveReplayCompactMicUserInfoOperationView : UIView
{
    MMFinderLiveConnectMicUser *_micUser;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUser; // @synthesize micUser=_micUser;
- (void)layoutSubviews;
- (id)initWithMicUser:(id)arg1;

@end
