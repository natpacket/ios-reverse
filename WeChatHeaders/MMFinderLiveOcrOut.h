//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MMFinderLiveOcrOut : NSObject
{
    NSData *_result;
    id _userInfo;
}

+ (id)buildOutputWithData:(id)arg1 userInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *result; // @synthesize result=_result;

@end

