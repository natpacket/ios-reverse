//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterPlugin-Protocol.h"
#import "FlutterStreamHandler-Protocol.h"

@class NSString;

@interface WeuiPlugin : NSObject <FlutterStreamHandler, FlutterPlugin>
{
    CDUnknownBlockType eventSink;
    int lastKeyboardHeight;
    _Bool isShowKeyboard;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
- (id)getKeyboardHeight:(id)arg1;
- (void)checkIsKeyboardOpen:(id)arg1;
- (id)showKeyboard:(_Bool)arg1 keyboardHeight:(double)arg2;
- (void)dealloc;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)registEvent;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

