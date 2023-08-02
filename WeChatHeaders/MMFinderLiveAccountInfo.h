//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveAccountInfo : NSObject
{
    _Bool _isReName;
    unsigned int _roleType;
    NSString *_nickName;
    NSString *_headImgUrl;
    NSString *_roleName;
    NSString *_roleWording;
}

+ (id)getDigestLogWithLiveAccountInfoList:(id)arg1;
+ (void)reName:(id)arg1 forAccountInfos:(id)arg2;
+ (id)tranferToLiveAccountInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isReName; // @synthesize isReName=_isReName;
@property(readonly, nonatomic) NSString *roleWording; // @synthesize roleWording=_roleWording;
@property(readonly, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(nonatomic) unsigned int roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (id)description;
- (void)copyFromLiveAliasInfo:(id)arg1;
- (id)initWithLiveAliasInfo:(id)arg1;

@end
