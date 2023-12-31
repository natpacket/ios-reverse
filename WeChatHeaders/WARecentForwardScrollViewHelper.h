//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWARecentForwardScrollViewHelper-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"

@class NSString, RecentForwardScrollView, UIView;
@protocol WARecentForwardScrollViewHelperDelegate;

@interface WARecentForwardScrollViewHelper : NSObject <RecentForwardScrollViewDelegate, IWARecentForwardScrollViewHelper>
{
    RecentForwardScrollView *_forwardView;
    id <WARecentForwardScrollViewHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WARecentForwardScrollViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RecentForwardScrollView *forwardView; // @synthesize forwardView=_forwardView;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
@property(readonly, nonatomic) UIView *internalView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

