//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderEventDescriptionViewControllerDelegate-Protocol.h"
#import "WCFinderEventHeaderViewDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderEventHeaderActionHandler : NSObject <WCFinderEventDescriptionViewControllerDelegate, WCFinderEventHeaderViewDelegate>
{
    UIViewController<WCFinderFeedBaseViewControllerProtocol> *_presentingVC;
    unsigned long long _commentScene;
    unsigned long long _refCommentScene;
}

+ (id)handlerWithPresentingVC:(id)arg1 commentScene:(unsigned long long)arg2 refCommentScene:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak UIViewController<WCFinderFeedBaseViewControllerProtocol> *presentingVC; // @synthesize presentingVC=_presentingVC;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)arg1;
- (void)onEventHeaderClickDescriptionContactAction:(id)arg1;
- (void)showDescriptionViewSheet:(id)arg1;
- (void)showDescriptionJumpInfoSheet:(id)arg1;
- (void)onEventHeaderClickDescriptionDetailAction:(id)arg1;
- (void)onEventHeaderClickAuthorInfoAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

