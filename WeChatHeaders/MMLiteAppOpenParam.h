//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiteAppOpenParam : NSObject
{
    long long _isHalfScreen;
    double _heightPercent;
    NSString *_page;
    NSString *_query;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) long long isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
- (id)init;

@end

