//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBEventHandlerBaseAsync.h"

@class MLCGetSystemInfoImpl;

@interface MLCEventHandler_getSystemInfoAsync : MBEventHandlerBaseAsync
{
    MLCGetSystemInfoImpl *_impl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLCGetSystemInfoImpl *impl; // @synthesize impl=_impl;
- (void)invoke:(id)arg1;
- (id)apiName;
- (id)init;

@end

