//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class MJVideoTemplate, NSMutableSet, NSString;

@interface WCMomentsTemplateManager : MMUserService <MMServiceProtocol>
{
    _Bool _isCheckingUpdatesForDefaulteTemplates;
    NSMutableSet *_preloadingTemplateIDs;
    MJVideoTemplate *_defaultTemplate;
    double _lastTimeThatUpdatesDefaulteTemplates;
}

- (void).cxx_destruct;
@property(nonatomic) double lastTimeThatUpdatesDefaulteTemplates; // @synthesize lastTimeThatUpdatesDefaulteTemplates=_lastTimeThatUpdatesDefaulteTemplates;
@property(nonatomic) _Bool isCheckingUpdatesForDefaulteTemplates; // @synthesize isCheckingUpdatesForDefaulteTemplates=_isCheckingUpdatesForDefaulteTemplates;
@property(retain, nonatomic) MJVideoTemplate *defaultTemplate; // @synthesize defaultTemplate=_defaultTemplate;
- (void)didAcceptJumpToMJRegularGuide;
- (_Bool)shouldShowJumpToMJRegularGuide;
- (void)didAcceptRegularGuide;
- (_Bool)shouldShowRegularGuide;
- (_Bool)canMakeSameMiaoJianTemplateForMomentsTemplateInfo:(id)arg1;
- (id)recommendedExportSettings;
- (void)preloadTemplateInfoIfNeededWithID:(id)arg1 scene:(unsigned long long)arg2;
@property(readonly, nonatomic) NSMutableSet *preloadingTemplateIDs; // @synthesize preloadingTemplateIDs=_preloadingTemplateIDs;
- (void)updateDefaultTemplate:(id)arg1;
- (void)loadDefaultTemplate;
- (void)checkUpdatesForDefaultTemplates;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
