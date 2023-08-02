//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderForwardButtonDelegate-Protocol.h"
#import "MMMenuControllerExt-Protocol.h"

@class MMScrollActionSheet, NSMutableArray, NSString, UIScrollView;
@protocol MMFinderMenuActionDelegate;

@interface MMFinderMenuActionContainer : UIView <MMFinderForwardButtonDelegate, MMMenuControllerExt>
{
    id <MMFinderMenuActionDelegate> _delegate;
    MMScrollActionSheet *_actionSheet;
    NSMutableArray *_contacts;
    UIScrollView *_scrollView;
    unsigned long long _bizScene;
    long long _longpressedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long longpressedIndex; // @synthesize longpressedIndex=_longpressedIndex;
@property(nonatomic) unsigned long long bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak MMScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak id <MMFinderMenuActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetContacts:(long long)arg1;
- (void)onDelete:(id)arg1;
- (void)onMenuControllerWillHide;
- (void)onLongpress:(long long)arg1;
- (void)onItemClick:(id)arg1;
- (void)layoutSubviews;
- (id)createNameLabel:(id)arg1;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 contacts:(id)arg2 bizScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

