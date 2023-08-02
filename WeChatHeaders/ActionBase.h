//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface ActionBase : NSObject <NSCoding>
{
    int _actionType;
    int _showType;
    NSString *_key;
    id _actionItem;
    NSString *_imageUrl;
    NSString *_statId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *statId; // @synthesize statId=_statId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) id actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

