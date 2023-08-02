//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSString, NSURL, SFSafariViewController;

@interface FLTURLLaunchSession : NSObject <SFSafariViewControllerDelegate>
{
    CDUnknownBlockType _flutterResult;
    NSURL *_url;
    SFSafariViewController *_safari;
    CDUnknownBlockType _didFinish;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
@property(retain, nonatomic) SFSafariViewController *safari; // @synthesize safari=_safari;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType flutterResult; // @synthesize flutterResult=_flutterResult;
- (void)close;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (id)initWithUrl:(id)arg1 withFlutterResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

