//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewSettingBaseViewController.h"

@class RingToneAvPlayer, WCTableViewSectionManager;

@interface NewMessageRingSettingViewController : NewSettingBaseViewController
{
    unsigned long long _ringType;
    WCTableViewSectionManager *_section;
    RingToneAvPlayer *_ringPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneAvPlayer *ringPlayer; // @synthesize ringPlayer=_ringPlayer;
@property(retain, nonatomic) WCTableViewSectionManager *section; // @synthesize section=_section;
@property(nonatomic) unsigned long long ringType; // @synthesize ringType=_ringType;
- (void)setUIForRingType:(unsigned long long)arg1;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (id)genNewMessageRingCell:(unsigned long long)arg1;
- (void)reloadTableData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

