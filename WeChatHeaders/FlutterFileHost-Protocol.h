//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol FlutterFileHost
- (NSString *)getRealPathPath:(NSString *)arg1 error:(id *)arg2;
- (void)createDirectoryPath:(NSString *)arg1 recursive:(NSNumber *)arg2 completion:(void (^)(NSString *, FlutterError *))arg3;
- (void)createFilePath:(NSString *)arg1 completion:(void (^)(NSString *, FlutterError *))arg2;
- (NSString *)getGeneralCacheDirectoryWithError:(id *)arg1;
- (NSString *)getDefaultImageCacheDirectoryWithError:(id *)arg1;
@end

