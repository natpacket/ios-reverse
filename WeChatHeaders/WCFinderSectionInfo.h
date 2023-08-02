//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderGetRelatedListResp, FinderGetTopicListResponse, FinderStreamResponse, NSString;

@interface WCFinderSectionInfo : NSObject
{
    unsigned int _recommendType;
    NSString *_sectionTitle;
    NSString *_sectionId;
    NSString *_sectionDesc;
    long long _sectionType;
    long long _iconType;
    NSString *_sectionSubTitle;
    NSString *_iconUrlLight;
    NSString *_iconUrlDark;
    long long _moreActionType;
    FinderGetTopicListResponse *_topicResp;
    FinderStreamResponse *_streamResp;
    FinderGetRelatedListResp *_relatedResp;
    unsigned long long _refreshTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned int recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) FinderGetRelatedListResp *relatedResp; // @synthesize relatedResp=_relatedResp;
@property(retain, nonatomic) FinderStreamResponse *streamResp; // @synthesize streamResp=_streamResp;
@property(retain, nonatomic) FinderGetTopicListResponse *topicResp; // @synthesize topicResp=_topicResp;
@property(nonatomic) long long moreActionType; // @synthesize moreActionType=_moreActionType;
@property(retain, nonatomic) NSString *iconUrlDark; // @synthesize iconUrlDark=_iconUrlDark;
@property(retain, nonatomic) NSString *iconUrlLight; // @synthesize iconUrlLight=_iconUrlLight;
@property(retain, nonatomic) NSString *sectionSubTitle; // @synthesize sectionSubTitle=_sectionSubTitle;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *sectionDesc; // @synthesize sectionDesc=_sectionDesc;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (id)genPBSectionInfo;

@end

