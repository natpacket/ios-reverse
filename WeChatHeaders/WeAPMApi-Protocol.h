//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber;

@protocol WeAPMApi
- (void)getDartVMMemoryInfoWithCompletion:(void (^)(NSString *, FlutterError *))arg1;
- (NSNumber *)getSnapshotRenderMillsWithError:(id *)arg1;
- (NSNumber *)getNativeFirstScrollMillsWithError:(id *)arg1;
- (NSNumber *)getNativeFirstPointerDownMillsWithError:(id *)arg1;
- (NSNumber *)getFlutterEngineCreateFinishMillsWithError:(id *)arg1;
- (NSNumber *)getFlutterEngineCreateStartMillsWithError:(id *)arg1;
@end
