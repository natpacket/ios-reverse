//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UploadVideoUtils : NSObject
{
}

+ (_Bool)isCanRetryUploadVideoRawData:(id)arg1;
+ (_Bool)isCanRetryUploadVideoCompressData:(id)arg1;
+ (_Bool)isCanRetryUpload:(id)arg1;
+ (unsigned long long)getVideoUploadValidateTime;
+ (unsigned long long)getLimitSendFileSize;
+ (_Bool)isOpenOccupyMsgSend;
+ (_Bool)isOpenSelectRawVideo;
+ (int)getMaxRetryCount;
+ (unsigned int)getMediaSource:(unsigned int)arg1;
+ (int)getNetworkType;
+ (_Bool)canUseMultiSocket:(id)arg1;
+ (id)getRawOutputFilePathFrom:(id)arg1;
+ (id)getRawCacheFilePathFrom:(id)arg1;

@end

