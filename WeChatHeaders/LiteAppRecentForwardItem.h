//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppRecentForwardItem : NSObject
{
    NSString *_nsEncryUserName;
    NSString *_nsNickName;
    NSString *_nsHeadImgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsHeadImgUrl; // @synthesize nsHeadImgUrl=_nsHeadImgUrl;
@property(retain, nonatomic) NSString *nsNickName; // @synthesize nsNickName=_nsNickName;
@property(retain, nonatomic) NSString *nsEncryUserName; // @synthesize nsEncryUserName=_nsEncryUserName;
- (id)toNSDictionary;
- (id)initWithUserName:(id)arg1 nickName:(id)arg2 headImageUrl:(id)arg3;

@end

