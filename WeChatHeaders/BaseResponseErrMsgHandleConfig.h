//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BaseResponseErrMsgHandleConfig : NSObject
{
    CDUnknownBlockType _handlerConfigBlock;
    NSString *_defaultMsg;
}

+ (id)configWithDefaultMsg:(id)arg1;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultMsg; // @synthesize defaultMsg=_defaultMsg;
@property(copy, nonatomic) CDUnknownBlockType handlerConfigBlock; // @synthesize handlerConfigBlock=_handlerConfigBlock;

@end

