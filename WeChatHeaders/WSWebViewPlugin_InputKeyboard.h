//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSWebViewPluginBase.h"

@class EmoticonBoardView;

@interface WSWebViewPlugin_InputKeyboard : WSWebViewPluginBase
{
    // Error parsing type: , name: defaultAnimateDuration
    // Error parsing type: , name: storedAnimateDuration
    // Error parsing type: , name: monitorKeyboard
    // Error parsing type: , name: keyBoardHeight
    // Error parsing type: , name: $__lazy_storage_$_emoticonBoardView
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) EmoticonBoardView *emoticonBoardView;
- (double)ajustedAnimateDuration:(double)arg1;
- (void)sendToH5WithEmoticonText:(id)arg1;
- (void)resignResponder;
- (double)getEmoticonBoardHeight;
- (void)hideEmoticonBoardWithAnimateDuration:(double)arg1;
- (void)showEmoticonBoardWithAnimateDuration:(double)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

