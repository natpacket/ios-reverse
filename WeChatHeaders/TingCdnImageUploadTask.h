//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TingCdnImageUploadTask : NSObject
{
    _Bool _startCdnUpload;
    _Bool _uploadCDNSuccessful;
    int _retCode;
    NSString *_clientID;
    NSString *_uploadLocalImageURL;
    NSString *_coverUrl;
    NSString *_coverMd5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coverMd5; // @synthesize coverMd5=_coverMd5;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) _Bool uploadCDNSuccessful; // @synthesize uploadCDNSuccessful=_uploadCDNSuccessful;
@property(nonatomic) _Bool startCdnUpload; // @synthesize startCdnUpload=_startCdnUpload;
@property(copy, nonatomic) NSString *uploadLocalImageURL; // @synthesize uploadLocalImageURL=_uploadLocalImageURL;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;

@end

