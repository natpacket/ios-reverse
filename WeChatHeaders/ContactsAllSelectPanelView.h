//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBottomBar.h"

@class MMBottomBarButton;
@protocol ContactsAllSelectPanelViewDelegate;

@interface ContactsAllSelectPanelView : WCBottomBar
{
    _Bool _isSelectAll;
    id <ContactsAllSelectPanelViewDelegate> _m_delegate;
    MMBottomBarButton *_selectAllButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelectAll; // @synthesize isSelectAll=_isSelectAll;
@property(retain, nonatomic) MMBottomBarButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(nonatomic) __weak id <ContactsAllSelectPanelViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)getSelectAllButtonTitle:(_Bool)arg1;
- (void)updatePanelView:(_Bool)arg1;
- (void)initViewWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

