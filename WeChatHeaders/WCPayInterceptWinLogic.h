//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMTipsViewControllerDelegate-Protocol.h"

@class InterceptWin, NSString, WCPayHalfPageSheet;

@interface WCPayInterceptWinLogic : NSObject <MMTipsViewControllerDelegate>
{
    InterceptWin *_interceptWin;
    WCPayHalfPageSheet *_halfPageSheet;
}

+ (void)handleJumpItem:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
+ (void)handleJumpItem:(id)arg1 isPresent:(_Bool)arg2 didClickBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayHalfPageSheet *halfPageSheet; // @synthesize halfPageSheet=_halfPageSheet;
@property(retain, nonatomic) InterceptWin *interceptWin; // @synthesize interceptWin=_interceptWin;
- (void)handleInterceptWin:(id)arg1 isPresent:(_Bool)arg2 didClickBlock:(CDUnknownBlockType)arg3;
- (void)handleInterceptWin:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
- (void)handleInterceptWin:(id)arg1;
- (_Bool)shouldHandleInterceptWin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

