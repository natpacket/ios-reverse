//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface AsyncResult : NSObject
{
    NSNumber *_ret;
    NSString *_errorMessage;
    FlutterStandardTypedData *_data;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithRet:(id)arg1 errorMessage:(id)arg2 data:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSNumber *ret; // @synthesize ret=_ret;
- (id)toMap;

@end

