//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMWebAttachmentReporter : NSObject
{
}

+ (void)reportWKDownloadKVWithWebViewUrlStr:(id)arg1 fileUrlStr:(id)arg2 contentType:(id)arg3 contentDispositionType:(id)arg4 contentDispositionFileExtName:(id)arg5;
+ (void)reportKVWithWebViewUrlStr:(id)arg1 fileUrlStr:(id)arg2 contentType:(id)arg3 contentDispositionType:(id)arg4 contentDispositionFileExtName:(id)arg5;
+ (void)reportWKDownloadIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
+ (void)reportIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
+ (void)reportWKDownloadIdKeyWithContentDispositionType:(id)arg1;
+ (void)reportIdKeyWithContentDispositionType:(id)arg1;
+ (void)reportWKDownloadIdKeyWithContentType:(id)arg1;
+ (void)reportIdKeyWithContentType:(id)arg1;

@end

