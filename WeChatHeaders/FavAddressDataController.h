//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FavSearchHelperDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WALocationGetterDelegate-Protocol.h"

@class CLLocation, FavSearchHelper, NSDictionary, NSMutableArray, NSString, WALocationGetter;
@protocol FavAddressDataControllerDelegate;

@interface FavAddressDataController : NSObject <WALocationGetterDelegate, FavSearchHelperDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasSetCurrentLocation;
    _Bool _dataLoadComplete;
    NSMutableArray *_arrDataWraps;
    id <FavAddressDataControllerDelegate> _delegate;
    NSMutableArray *_arrClassDatas;
    WALocationGetter *_locationGetter;
    NSDictionary *_dicCurrentLocationName;
    FavSearchHelper *_favSearchHelper;
    CLLocation *_currentLocation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dataLoadComplete; // @synthesize dataLoadComplete=_dataLoadComplete;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) FavSearchHelper *favSearchHelper; // @synthesize favSearchHelper=_favSearchHelper;
@property(nonatomic) _Bool hasSetCurrentLocation; // @synthesize hasSetCurrentLocation=_hasSetCurrentLocation;
@property(retain, nonatomic) NSDictionary *dicCurrentLocationName; // @synthesize dicCurrentLocationName=_dicCurrentLocationName;
@property(retain, nonatomic) WALocationGetter *locationGetter; // @synthesize locationGetter=_locationGetter;
@property(retain, nonatomic) NSMutableArray *arrClassDatas; // @synthesize arrClassDatas=_arrClassDatas;
@property(nonatomic) __weak id <FavAddressDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *arrDataWraps; // @synthesize arrDataWraps=_arrDataWraps;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onFindAddress:(id)arg1;
- (void)onFindArrAddress;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)genAddressCellView:(id)arg1 indexPath:(id)arg2 inTableView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)retrieveLocation;
- (id)getCityOfDataItem:(id)arg1;
- (id)getCountryOfDataItem:(id)arg1;
- (void)classifyFilterDataAddress;
- (void)clearData;
- (void)markDataLoadComplete;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

