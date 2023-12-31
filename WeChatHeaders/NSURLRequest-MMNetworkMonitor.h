//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLRequest.h>

@class NSArray, NSDictionary;

@interface NSURLRequest (MMNetworkMonitor)
- (unsigned long long)mmGetBodyLength;
- (id)mmGetCookies;
- (unsigned long long)mmGetHeadersLengthWithCookie;
- (unsigned long long)mmGetLineLength;
- (unsigned long long)mmGetBytesSent;
@property(readonly, nonatomic) unsigned long long qmapFlowSize;
@property(retain, nonatomic) NSDictionary *qmapStateData;
@property(readonly, nonatomic) _Bool WX_TLSSkipHostnameCheck;
@property(readonly, nonatomic) NSArray *WX_SR_SSLPinnedCertificates;
- (id)URLByRemoveQBPostSuffix;
- (id)requestByRemovingPostCheckKey;
- (_Bool)isQBPostSuffixURL;
@end

