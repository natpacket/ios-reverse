//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderFeedSearchParams : NSObject
{
    NSString *_searchSessionID;
    NSString *_requestID;
    NSArray *_tagTexts;
    NSString *_queryText;
    unsigned long long _searchScene;
    unsigned long long _commentScene;
    unsigned long long _interactionScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long interactionScene; // @synthesize interactionScene=_interactionScene;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(retain, nonatomic) NSArray *tagTexts; // @synthesize tagTexts=_tagTexts;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSString *searchSessionID; // @synthesize searchSessionID=_searchSessionID;

@end

