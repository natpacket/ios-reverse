//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderNpsSurveyContextInfo : NSObject
{
    int _pageScene;
    unsigned long long _enterIndexInFeedStream;
    unsigned long long _currentIndexInFeedStream;
    NSString *_contentTid;
    unsigned long long _contentMediaType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentMediaType; // @synthesize contentMediaType=_contentMediaType;
@property(copy, nonatomic) NSString *contentTid; // @synthesize contentTid=_contentTid;
@property(nonatomic) unsigned long long currentIndexInFeedStream; // @synthesize currentIndexInFeedStream=_currentIndexInFeedStream;
@property(nonatomic) unsigned long long enterIndexInFeedStream; // @synthesize enterIndexInFeedStream=_enterIndexInFeedStream;
@property(nonatomic) int pageScene; // @synthesize pageScene=_pageScene;

@end

