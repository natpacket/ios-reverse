//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WCPayPassKitFacadeDelegate;

@interface WCPayPassKitFacade : NSObject
{
    id <WCPayPassKitFacadeDelegate> _delegate;
}

+ (id)GenCurrentDeviceInfo;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayPassKitFacadeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkIssueCardPermissionWithSpecificCardType:(id)arg1 appId:(id)arg2 iOSVersion:(double)arg3;
- (_Bool)isPassLibraryAvailable;
- (id)allPasses;
- (id)getPKPass:(id)arg1;
- (long long)getNFCCardTransitBalance:(id)arg1;
- (id)getAllLocalSimplePasses:(_Bool)arg1;

@end

