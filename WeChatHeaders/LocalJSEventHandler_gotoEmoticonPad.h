//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LocalJSEventHandler_BaseEvent.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"

@class NSString, WSEmoticonPadViewController;

@interface LocalJSEventHandler_gotoEmoticonPad : LocalJSEventHandler_BaseEvent <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    WSEmoticonPadViewController *_emoticonPad;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSEmoticonPadViewController *emoticonPad; // @synthesize emoticonPad=_emoticonPad;
- (void)addDownloadTaskWith:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSendButtonClicked;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

