//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface WCFinderLongServiceEncodeCompletionParam : NSObject
{
    _Bool _isSkipEncode;
    _Bool _isCancel;
    NSString *_path;
    double _timeDiff;
    NSError *_error;
    unsigned long long _retryType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long retryType; // @synthesize retryType=_retryType;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double timeDiff; // @synthesize timeDiff=_timeDiff;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isSkipEncode; // @synthesize isSkipEncode=_isSkipEncode;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;

@end
