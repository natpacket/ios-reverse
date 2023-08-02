//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol MMFinderLiveMusicSettingSearchTableDelegate;

@interface MMFinderLiveMusicSettingSearchTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    id <MMFinderLiveMusicSettingSearchTableDelegate> _searchTableDelegate;
    NSMutableArray *_musicSearchDataItemArray;
    UITableView *_searchTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) NSMutableArray *musicSearchDataItemArray; // @synthesize musicSearchDataItemArray=_musicSearchDataItemArray;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingSearchTableDelegate> searchTableDelegate; // @synthesize searchTableDelegate=_searchTableDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)hasSearchResult;
- (void)resetSearchResults:(id)arg1;
- (void)appendSearchResults:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

