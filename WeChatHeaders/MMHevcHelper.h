//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMHevcHelper : NSObject
{
    unsigned int _idKeyID;
    NSMutableArray *_idKeys;
    NSString *_imgUrl;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) unsigned int idKeyID; // @synthesize idKeyID=_idKeyID;
@property(retain, nonatomic) NSMutableArray *idKeys; // @synthesize idKeys=_idKeys;
- (void)reportKvStat:(unsigned int)arg1 value:(id)arg2;
- (void)flushIdKeyEvent:(_Bool)arg1;
- (void)reportIdKeyEvent:(unsigned long long)arg1 value:(unsigned int)arg2;
- (void)reportIdKeyEvent:(unsigned long long)arg1;
- (id)initWithIdKeyId:(unsigned int)arg1 imgUrl:(id)arg2;

@end

