//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKXMLPayRedDot : NSObject
{
    NSString *_reddotId;
    long long _expireTime;
    NSString *_wording;
}

+ (id)KXMLPayRedDotWithReddotId:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, nonatomic) NSString *reddotId; // @synthesize reddotId=_reddotId;
- (id)description;
- (id)initWithReddotId:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;

@end

