//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXTableViewController.h"

#import "WATemplateMsgManagerExt-Protocol.h"

@class NSString;

@interface WATemplateMsgMngViewController : ZZFLEXTableViewController <WATemplateMsgManagerExt>
{
    unsigned long long _notifyStatus;
    unsigned long long _audioNotifyStatus;
}

@property(nonatomic) unsigned long long audioNotifyStatus; // @synthesize audioNotifyStatus=_audioNotifyStatus;
@property(nonatomic) unsigned long long notifyStatus; // @synthesize notifyStatus=_notifyStatus;
- (void)onTemplateMsgMgrInfoChanged;
- (void)onAudioNotifySwitch:(_Bool)arg1;
- (void)onNotifySwitch:(_Bool)arg1;
- (void)reloadTableView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)reloadSwitchData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

