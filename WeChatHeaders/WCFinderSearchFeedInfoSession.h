//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderSearchFeedInfoSession : NSObject
{
    _Bool _continueFlag;
    NSMutableArray *_searchInfos;
    NSData *_lastBuff;
    NSString *_reqId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *searchInfos; // @synthesize searchInfos=_searchInfos;
@property(readonly, nonatomic) _Bool isEmpty;

@end
