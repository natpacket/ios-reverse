//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMCommonCgiUploader, MMCommonUploadResult, NSString;

@protocol MMCommonCgiUploaderDelegate <NSObject>
- (void)onUploadProgress:(MMCommonCgiUploader *)arg1 uploadProgress:(double)arg2;
- (void)onUploadFail:(MMCommonCgiUploader *)arg1 uploadId:(NSString *)arg2 retCode:(long long)arg3;
- (void)onUploadSuccess:(MMCommonCgiUploader *)arg1 result:(MMCommonUploadResult *)arg2;
@end

