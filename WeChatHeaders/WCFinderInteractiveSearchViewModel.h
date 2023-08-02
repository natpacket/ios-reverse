//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderInteractiveSearchStoreExt-Protocol.h"

@class NSArray, NSString, WCFinderCustomCGI, WCFinderInteractiveSearchSection, WCFinderInteractiveSearchStore;
@protocol WCFinderInteractiveSearchViewModelDelegate;

@interface WCFinderInteractiveSearchViewModel : NSObject <WCFinderInteractiveSearchStoreExt>
{
    id <WCFinderInteractiveSearchViewModelDelegate> _delegate;
    NSArray *_sections;
    WCFinderInteractiveSearchStore *_store;
    WCFinderInteractiveSearchSection *_feedSection;
    NSString *_lastKeyword;
    WCFinderCustomCGI *_lastCGI;
    NSString *_dataScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(retain, nonatomic) WCFinderCustomCGI *lastCGI; // @synthesize lastCGI=_lastCGI;
@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
@property(retain, nonatomic) WCFinderInteractiveSearchSection *feedSection; // @synthesize feedSection=_feedSection;
@property(retain, nonatomic) WCFinderInteractiveSearchStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <WCFinderInteractiveSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStoeAppendData:(struct _NSRange)arg1;
- (id)listViewModelDataScene:(id)arg1;
- (void)notifyChanged;
- (void)requestNextPage;
- (void)search:(id)arg1;
@property(readonly, nonatomic) unsigned long long loadState;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long commentScene;
- (id)init;
- (id)initWithDataScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

