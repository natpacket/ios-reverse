//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderJumpNativeHotWord;

@interface WCFinderJumpNativeSearchParams : NSObject
{
    NSString *_feedTid;
    unsigned long long _scene;
    unsigned long long _streamEntranceType;
    WCFinderJumpNativeHotWord *_objectHotWord;
    NSString *_objHotwordInfoBuffString;
    NSData *_objHotwordInfoBuff;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @synthesize objHotwordInfoBuff=_objHotwordInfoBuff;
@property(copy, nonatomic) NSString *objHotwordInfoBuffString; // @synthesize objHotwordInfoBuffString=_objHotwordInfoBuffString;
@property(retain, nonatomic) WCFinderJumpNativeHotWord *objectHotWord; // @synthesize objectHotWord=_objectHotWord;
@property(nonatomic) unsigned long long streamEntranceType; // @synthesize streamEntranceType=_streamEntranceType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *feedTid; // @synthesize feedTid=_feedTid;

@end

