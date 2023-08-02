//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "WCYoWindowDelegate-Protocol.h"

@class MMUIWindow, NSDate, NSObject, NSString;
@protocol WCYoDelegate;

@interface WCYoWindowController : MMWindowController <WCYoWindowDelegate>
{
    unsigned int _yoTime;
    MMUIWindow *_window;
    NSDate *_showedDate;
    NSObject<WCYoDelegate> *_yoDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<WCYoDelegate> *yoDelegate; // @synthesize yoDelegate=_yoDelegate;
@property(nonatomic) unsigned int yoTime; // @synthesize yoTime=_yoTime;
@property(retain, nonatomic) NSDate *showedDate; // @synthesize showedDate=_showedDate;
- (void)setWindow:(id)arg1;
- (void)hideYoWindow:(id)arg1;
- (id)window:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (void)addYoCount:(unsigned long long)arg1 forUsername:(id)arg2 type:(int)arg3;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4 nameLabelString:(id)arg5 descriptionString:(id)arg6 timeString:(id)arg7 allowReply:(_Bool)arg8;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4 nameLabelString:(id)arg5 descriptionString:(id)arg6 allowReply:(_Bool)arg7;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4;
- (void)restartAnimation;
- (void)dealloc;
- (id)window;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

