//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton;
@protocol ShakeTypeBarDelegate;

@interface ShakeTypeBar : MMUIView
{
    MMUIButton *m_shakePeopleBtn;
    MMUIButton *m_shakeMusicBtn;
    MMUIButton *m_shakeTVBtn;
    unsigned int m_curSelectTag;
    id <ShakeTypeBarDelegate> m_delegate;
    _Bool isShowPeople;
    _Bool isShowShakeTV;
    _Bool isShowShakeMusic;
    unsigned int uiBtnCount;
    _Bool _isUserClickedBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUserClickedBtn; // @synthesize isUserClickedBtn=_isUserClickedBtn;
@property(nonatomic) __weak id <ShakeTypeBarDelegate> m_delegate; // @synthesize m_delegate;
- (void)processBtnClicked:(id)arg1;
- (void)onBtnClicked:(id)arg1;
- (void)allTouchEvent:(id)arg1;
- (id)createBtnWithTitle:(id)arg1 Icon:(id)arg2 HighlightIcon:(id)arg3 Frame:(struct CGRect)arg4 Action:(SEL)arg5 Tag:(int)arg6;
- (void)initView;
- (void)updateSelfState;
- (void)updateData;
- (void)setShakeType:(long long)arg1;
- (id)init;

@end
