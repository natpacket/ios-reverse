//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FlutterPlatformView-Protocol.h"

@class NSString;
@protocol WAPlatformContainerViewDelegate;

@interface WAPlatformContainerView : UIView <FlutterPlatformView>
{
    _Bool _disableHook;
    UIView *_nativeView;
    long long _viewId;
    id <WAPlatformContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAPlatformContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableHook; // @synthesize disableHook=_disableHook;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) UIView *nativeView; // @synthesize nativeView=_nativeView;
- (void)updateNativeViewFrame;
- (void)addHook;
- (void)removeHook;
- (void)setFrame:(struct CGRect)arg1;
- (id)view;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

