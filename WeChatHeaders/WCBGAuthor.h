//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString, WCMediaItem;

@interface WCBGAuthor : NSObject <NSCoding, PBCoding>
{
    NSString *_name;
    NSString *_title;
    NSString *_quote;
    NSString *_desc;
    WCMediaItem *_icon;
}

+ (void)initialize;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_quote;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMediaItem *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *quote; // @synthesize quote=_quote;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

