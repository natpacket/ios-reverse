//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface WeAppGameJoinTeamDescView : UIView
{
    MMUILabel *_scoreLable;
    MMUILabel *_additionLabel;
    MMUILabel *_memberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(retain, nonatomic) MMUILabel *additionLabel; // @synthesize additionLabel=_additionLabel;
@property(retain, nonatomic) MMUILabel *scoreLable; // @synthesize scoreLable=_scoreLable;
- (id)getMemberDesc;
- (id)getTeamupDesc;
- (id)getTitle;
- (void)layoutUI;
- (void)initUI:(id)arg1;
- (id)initWithParmas:(id)arg1;

@end

