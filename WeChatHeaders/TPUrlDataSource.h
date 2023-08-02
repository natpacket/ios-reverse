//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TPUrlDataSource : NSObject
{
    int _playId;
    NSString *_originUrl;
    NSString *_thumbPlayerUrl;
    NSString *_systemPlayerUrl;
    NSDictionary *_httpHeader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(retain, nonatomic) NSString *systemPlayerUrl; // @synthesize systemPlayerUrl=_systemPlayerUrl;
@property(retain, nonatomic) NSString *thumbPlayerUrl; // @synthesize thumbPlayerUrl=_thumbPlayerUrl;
@property(retain, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(nonatomic) int playId; // @synthesize playId=_playId;
- (_Bool)isValid;
- (id)initWithOriginUrl:(id)arg1 thumbPlayerUrl:(id)arg2 systemPlayerUrl:(id)arg3 httpHeader:(id)arg4;

@end

