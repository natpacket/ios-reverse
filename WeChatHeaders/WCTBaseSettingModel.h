//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTBaseSettingModel : NSObject
{
    _Bool _disableSelect;
    NSString *_title;
    id _userInfo;
    long long _tag;
    unsigned long long _accessibilityTraits;
}

+ (id)createWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool disableSelect; // @synthesize disableSelect=_disableSelect;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

