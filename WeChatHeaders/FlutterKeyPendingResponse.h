//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlutterEmbedderKeyResponder;

@interface FlutterKeyPendingResponse : NSObject
{
    FlutterEmbedderKeyResponder *_responder;
    unsigned long long _responseId;
}

@property(nonatomic) unsigned long long responseId; // @synthesize responseId=_responseId;
@property(readonly) FlutterEmbedderKeyResponder *responder; // @synthesize responder=_responder;
- (id)initWithHandler:(id)arg1 responseId:(unsigned long long)arg2;

@end
