//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LiteAppLauchMiniProgramParam : NSObject
{
    _Bool _openDataChannel;
    id _referrerData;
    id _privateReferrerData;
    NSString *_mode;
    NSDictionary *_halfScreenParam;
    NSDictionary *_singlePageParam;
    NSDictionary *_uiParam;
    long long _scene;
    NSString *_sceneNote;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSDictionary *uiParam; // @synthesize uiParam=_uiParam;
@property(retain, nonatomic) NSDictionary *singlePageParam; // @synthesize singlePageParam=_singlePageParam;
@property(retain, nonatomic) NSDictionary *halfScreenParam; // @synthesize halfScreenParam=_halfScreenParam;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool openDataChannel; // @synthesize openDataChannel=_openDataChannel;
@property(retain, nonatomic) id privateReferrerData; // @synthesize privateReferrerData=_privateReferrerData;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;

@end
