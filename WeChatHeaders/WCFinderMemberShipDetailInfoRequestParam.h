//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMemberShipDetailInfoRequestParam : NSObject
{
    NSString *_finderUsername;
    NSString *_liveNoticeEncryptedId;
    unsigned long long _commentScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (id)description;

@end

