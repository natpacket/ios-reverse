//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface WCFinderDynamicIconFetchArgs : NSObject <NSCopying>
{
    long long _type;
    SEL _iconIdentify;
    UIColor *_iconColor;
    long long _iconId;
    NSString *_key;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long iconId; // @synthesize iconId=_iconId;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) SEL iconIdentify; // @synthesize iconIdentify=_iconIdentify;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
