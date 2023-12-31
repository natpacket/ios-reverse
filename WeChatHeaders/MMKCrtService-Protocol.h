//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMKGenDigitalCrtReq, MMVoidCallback, MMVoidStringCallback, NSData, NSString;

@protocol MMKCrtService <NSObject>
- (NSString *)updateCurrentDeviceCertNoWithInfo:(MMITransmitKvData *)arg1;
- (void)startDeleteDigitalCrtImpl:(NSString *)arg1 successCallback:(MMVoidCallback *)arg2 failCallback:(MMVoidStringCallback *)arg3;
- (_Bool)isCrtExist:(NSString *)arg1;
- (void)delCert;
- (void)startGenDigitalCrtImpl:(MMKGenDigitalCrtReq *)arg1 successCallback:(MMVoidCallback *)arg2 failCallback:(MMVoidStringCallback *)arg3;
- (NSString *)sign:(NSString *)arg1 data:(NSData *)arg2;
- (NSString *)getCrtNo;
- (_Bool)hasCrt;
@end

