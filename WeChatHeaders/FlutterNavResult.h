//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FlutterNavResult : NSObject
{
    _Bool _resolved;
    NSDictionary *_resultData;
}

@property(nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
@property(nonatomic) _Bool resolved; // @synthesize resolved=_resolved;
- (id)initWithResolved:(_Bool)arg1 resultData:(id)arg2;
- (id)init;

@end

