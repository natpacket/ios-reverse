//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCPayFetchQAInfoItem : NSObject <NSCoding>
{
    NSString *_title;
    long long _jump_type;
    NSString *_jump_url;
    NSString *_username;
    NSString *_path;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)genFromDic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

