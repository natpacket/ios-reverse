//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SimpleSearchMatchTip : NSObject
{
    NSString *_searchText;
    unsigned long long _matchType;
    NSString *_matchWord;
    NSString *_matchWordTip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *matchWordTip; // @synthesize matchWordTip=_matchWordTip;
@property(retain, nonatomic) NSString *matchWord; // @synthesize matchWord=_matchWord;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;

@end

