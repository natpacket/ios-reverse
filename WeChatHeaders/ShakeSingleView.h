//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IHeadImageExt-Protocol.h"

@class MMHeadImageView, ShakeGetItem, UIImageView, UILabel, UIView;
@protocol shakeSingleViewDelegate;

@interface ShakeSingleView : MMUIView <IHeadImageExt>
{
    UIView *m_bkgView;
    UIImageView *m_indicatorImageView;
    UIImageView *m_sexImageView;
    MMHeadImageView *m_headImageView;
    UILabel *m_labelLoc;
    UILabel *m_labelNickName;
    UILabel *m_labelCity;
    UILabel *m_labelFriend;
    ShakeGetItem *m_oShakeGetItem;
    unsigned int m_uiScene;
    id <shakeSingleViewDelegate> m_delegate;
    UIView *_coverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isClickHead:(struct CGPoint)arg1;
- (_Bool)isPointInView:(struct CGPoint)arg1;
- (id)initWithItem:(id)arg1 andScene:(unsigned int)arg2;
- (_Bool)isInMyContactList:(id)arg1;
- (void)doShowAnimation;
- (void)finishShowAnimation;
- (void)stopAllAnimation;
- (void)setM_Delegate:(id)arg1;

@end

