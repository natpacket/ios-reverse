//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizNotifyTipsInfo : NSObject
{
    NSNumber *_msgCount;
    NSNumber *_msgId;
    NSString *_userName;
    NSNumber *_isBizContact;
    NSString *_coverUrl;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithMsgCount:(id)arg1 msgId:(id)arg2 userName:(id)arg3 isBizContact:(id)arg4 coverUrl:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSNumber *isBizContact; // @synthesize isBizContact=_isBizContact;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSNumber *msgCount; // @synthesize msgCount=_msgCount;
- (id)toMap;

@end

