//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURL_WechatUrl)
+ (id)queryDictionaryFromUrl:(id)arg1;
+ (id)wwkapi_nilobj;
+ (id)safeUrlWithString:(id)arg1;
- (_Bool)isInDmoain:(id)arg1;
- (id)hostPort;
- (_Bool)isHostPathHasPrefixWithConfigKey:(id)arg1 defaultValue:(id)arg2;
- (_Bool)isOAuthUrl;
- (_Bool)isNeedForceSyncA8Key;
- (_Bool)isWechatRedirect;
- (id)getUrlPartAfterSharp;
- (id)SC_URLWithQueries:(id)arg1;
- (void)setCodeCacheDetail:(id)arg1;
- (id)codeCacheDetail;
- (void)setByteCodeIdentifier:(id)arg1;
- (id)byteCodeIdentifier;
- (void)setByteCodeDirPath:(id)arg1;
- (id)byteCodeDirPath;
- (unsigned long long)byteCodeSwitchType;
- (void)setByteCodeSwitchType:(unsigned long long)arg1;
@end
