//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidasKeyStore, NSMutableDictionary, NSString;

@interface MidasIAPHttpResp : NSObject
{
    unsigned long long _msgTag;
    MidasKeyStore *_keyStore;
    CDUnknownBlockType _respParseBlock;
    CDUnknownBlockType _netErrorBlock;
    CDUnknownBlockType _cgiErrorBlock;
    CDUnknownBlockType _cgiSuccessBlock;
    long long _responseCode;
    NSString *_responseMsg;
    NSMutableDictionary *_responseBody;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *responseBody; // @synthesize responseBody=_responseBody;
@property(copy, nonatomic) NSString *responseMsg; // @synthesize responseMsg=_responseMsg;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(copy, nonatomic) CDUnknownBlockType cgiSuccessBlock; // @synthesize cgiSuccessBlock=_cgiSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType cgiErrorBlock; // @synthesize cgiErrorBlock=_cgiErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType netErrorBlock; // @synthesize netErrorBlock=_netErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType respParseBlock; // @synthesize respParseBlock=_respParseBlock;
@property(nonatomic) __weak MidasKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(nonatomic) unsigned long long msgTag; // @synthesize msgTag=_msgTag;

@end

