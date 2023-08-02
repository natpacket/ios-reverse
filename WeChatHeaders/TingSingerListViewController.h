//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICCollectionViewController.h"

#import "MMPageSheetAdapterDelegate-Protocol.h"

@class MMPageSheetAdapter, NSArray, NSString, UIViewController;

@interface TingSingerListViewController : ICCollectionViewController <MMPageSheetAdapterDelegate>
{
    CDUnknownBlockType _dismissBlock;
    NSArray *_singerList;
    MMPageSheetAdapter *_pageSheetAdapter;
    UIViewController *_parent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) NSArray *singerList; // @synthesize singerList=_singerList;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)generatePageSheetAdapter;
- (void)showAsHalfScreen;
- (id)collectionLayout;
- (void)viewDidLoad;
- (_Bool)useCustomNavibar;
- (id)filterSingerList:(id)arg1;
- (id)initWithSingerList:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
