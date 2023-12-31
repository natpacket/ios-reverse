//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MMFinderLiveGiftResourceRequestBaseObject : NSObject
{
    unsigned int _retryCount;
    NSURL *_targetURL;
    long long _expectedContentLength;
    NSString *_contentType;
    unsigned long long _beginTimeStamp;
    NSString *_productID;
    long long _resType;
    long long _subResType;
    NSString *_fileMD5;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) long long subResType; // @synthesize subResType=_subResType;
@property(nonatomic) long long resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned long long beginTimeStamp; // @synthesize beginTimeStamp=_beginTimeStamp;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(retain, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;

@end

