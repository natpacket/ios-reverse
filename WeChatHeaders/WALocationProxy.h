//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWALocationService-Protocol.h"
#import "MMPickLocationViewControllerDelegate-Protocol.h"
#import "WAOpenLocationViewControllerDelegate-Protocol.h"
#import "WCTimelinePOIPickerViewControllerDelegate-Protocol.h"

@class MMPickLocationViewController, NSString, WCTimelinePOIPickerViewController;
@protocol WALocationServiceDelegate;

@interface WALocationProxy : NSObject <MMPickLocationViewControllerDelegate, WAOpenLocationViewControllerDelegate, WCTimelinePOIPickerViewControllerDelegate, IWALocationService>
{
    id <WALocationServiceDelegate> _delegate;
    MMPickLocationViewController *_pickLocationController;
    WCTimelinePOIPickerViewController *_pickPoiController;
    NSString *_buttonTitle;
}

+ (void)clearLBSCacheIfNeeded;
+ (struct CLLocationCoordinate2D)getLastUserLocation;
+ (id)getWAQMapAPIKey;
+ (void)initLocationService;
+ (id)createLocationService;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) WCTimelinePOIPickerViewController *pickPoiController; // @synthesize pickPoiController=_pickPoiController;
@property(retain, nonatomic) MMPickLocationViewController *pickLocationController; // @synthesize pickLocationController=_pickLocationController;
@property(nonatomic) __weak id <WALocationServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)onPOIPickerCancel;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onCancelOpenLocation;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
- (void)getRegionData;
- (void)chooseLocation:(struct CLLocationCoordinate2D)arg1 viewController:(id)arg2 buttonTitle:(id)arg3;
- (void)choosePoiViewController:(id)arg1 buttonTitle:(id)arg2;
- (void)openLocation:(id)arg1 navigationController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

