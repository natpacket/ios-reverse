//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderSubTabItem, NSString;

@interface WCFinderFollowTabDetailVCReporter : NSObject
{
    FinderSubTabItem *_subTab;
    NSString *_originExtraInfo;
    NSString *_firstFeedId;
    NSString *_firstTraceId;
    unsigned long long _commentScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *firstTraceId; // @synthesize firstTraceId=_firstTraceId;
@property(copy, nonatomic) NSString *firstFeedId; // @synthesize firstFeedId=_firstFeedId;
@property(copy, nonatomic) NSString *originExtraInfo; // @synthesize originExtraInfo=_originExtraInfo;
@property(copy, nonatomic) FinderSubTabItem *subTab; // @synthesize subTab=_subTab;
- (void)endReportInfo;
- (void)startupReportInfo;
- (void)setupFirstFeedID:(id)arg1;

@end

