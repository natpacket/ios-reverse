//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WxSmStorage : NSObject
{
    CDStruct_088880ef baseCtx;
    int gErrorCode;
}

- (_Bool)clearWxAllValue;
- (_Bool)clearWxValue:(id)arg1;
- (_Bool)hasWxValue:(id)arg1;
- (id)getWxValue:(id)arg1;
- (_Bool)setWxValue:(id)arg1 value:(id)arg2;
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;

@end

