//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HalfScreen, NSString;

@interface GameJumpInfo : NSObject
{
    NSString *_jumpId;
    long long _jumpType;
    NSString *_jumpUrl;
    HalfScreen *_halfScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HalfScreen *halfScreen; // @synthesize halfScreen=_halfScreen;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *jumpId; // @synthesize jumpId=_jumpId;
- (id)getXmlSectionString;

@end

