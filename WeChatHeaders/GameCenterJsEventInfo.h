//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSEvent, NSDictionary, NSString;

@interface GameCenterJsEventInfo : NSObject
{
    NSString *_methodName;
    NSString *_identifier;
    NSDictionary *_params;
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (id)getResultDictWithMessage:(id)arg1 success:(_Bool)arg2 dict:(id)arg3;
- (void)completeWithMessage:(id)arg1 success:(_Bool)arg2 dict:(id)arg3;
- (void)completeWithMessage:(id)arg1 success:(_Bool)arg2;
- (void)failWithMessage:(id)arg1;
- (void)successWithMessage:(id)arg1;

@end

