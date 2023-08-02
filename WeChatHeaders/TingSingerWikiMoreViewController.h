//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICCollectionViewController.h"

#import "TingViewController-Protocol.h"

@class MMListenDiscoverLine, MMListenDiscoverRequest, NSData, NSString, TingFooterView;

@interface TingSingerWikiMoreViewController : ICCollectionViewController <TingViewController>
{
    MMListenDiscoverRequest *_originRequest;
    NSString *_singerId;
    MMListenDiscoverLine *_discoverLine;
    NSData *_sessionBuffer;
    long long _type;
    TingFooterView *_footerView;
}

+ (double)textHeightPerLine;
- (void).cxx_destruct;
@property(retain, nonatomic) TingFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) MMListenDiscoverLine *discoverLine; // @synthesize discoverLine=_discoverLine;
@property(retain, nonatomic) NSString *singerId; // @synthesize singerId=_singerId;
@property(retain, nonatomic) MMListenDiscoverRequest *originRequest; // @synthesize originRequest=_originRequest;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (void)willLoadMoreData;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionLayout;
- (double)cellContentHeight;
- (double)cellContentWidth;
- (id)loadMoreData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getNavigationTitle;
- (void)setNavigation;
- (id)tingPreferredNavigationItemColor;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)getReuseIdentifier:(long long)arg1;
- (void)registerCell;
- (void)viewDidLoad;
- (id)initWithSingerId:(id)arg1 line:(id)arg2 buffer:(id)arg3 type:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

