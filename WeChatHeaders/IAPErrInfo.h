//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IAPErrInfo : NSObject
{
    unsigned int _errCode;
    long long _IAPErrCode;
    NSString *_IAPErrDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *IAPErrDesc; // @synthesize IAPErrDesc=_IAPErrDesc;
@property(nonatomic) long long IAPErrCode; // @synthesize IAPErrCode=_IAPErrCode;
@property(nonatomic) unsigned int errCode; // @synthesize errCode=_errCode;

@end

