//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCBusyThreadProfile : NSObject
{
    unsigned int _thread;
    NSArray *_callTree;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *callTree; // @synthesize callTree=_callTree;
@property(nonatomic) unsigned int thread; // @synthesize thread=_thread;
- (id)initWithThread:(unsigned int)arg1 callTree:(id)arg2;

@end

