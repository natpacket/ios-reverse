//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFavoritesExt-Protocol.h"

@class NSData, NSMutableArray, NSString, WCFinderListLoadingStateModel;
@protocol WCFinderPOIFavListViewModelDelegate;

@interface WCFinderPOIFavListViewModel : NSObject <IFavoritesExt>
{
    id <WCFinderPOIFavListViewModelDelegate> _delegate;
    WCFinderListLoadingStateModel *_loadingModel;
    NSMutableArray *_poiItems;
    NSMutableArray *_unfavPOIItems;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *unfavPOIItems; // @synthesize unfavPOIItems=_unfavPOIItems;
@property(retain, nonatomic) NSMutableArray *poiItems; // @synthesize poiItems=_poiItems;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingModel; // @synthesize loadingModel=_loadingModel;
@property(nonatomic) __weak id <WCFinderPOIFavListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (unsigned long long)dataCount;
- (id)dataWithIndex:(unsigned long long)arg1;
- (_Bool)dataEmpty;
- (void)fetchData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
