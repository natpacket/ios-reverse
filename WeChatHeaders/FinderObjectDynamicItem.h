//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderObjectDynamicItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)mapKeyWithKey:(id)arg1 type:(long long)arg2;
+ (id)mapKeyWithId:(long long)arg1 type:(long long)arg2;
- (id)mapKey;

// Remaining properties
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) unsigned int name; // @dynamic name;
@property(retain, nonatomic) NSString *richText; // @dynamic richText;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

