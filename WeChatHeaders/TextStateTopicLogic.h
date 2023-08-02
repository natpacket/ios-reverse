//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString, TextStateTopicFactory;
@protocol TextStateTopicLogicDelegate;

@interface TextStateTopicLogic : NSObject
{
    id <TextStateTopicLogicDelegate> _delegate;
    TextStateTopicFactory *_factory;
    NSMutableArray *_topics;
    NSMutableDictionary *_idToTopic;
    NSMutableDictionary *_usernameToTopicId;
    NSMutableOrderedSet *_sortedUsernameSet;
    NSString *_presentType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *presentType; // @synthesize presentType=_presentType;
@property(retain, nonatomic) NSMutableOrderedSet *sortedUsernameSet; // @synthesize sortedUsernameSet=_sortedUsernameSet;
@property(retain, nonatomic) NSMutableDictionary *usernameToTopicId; // @synthesize usernameToTopicId=_usernameToTopicId;
@property(retain, nonatomic) NSMutableDictionary *idToTopic; // @synthesize idToTopic=_idToTopic;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) TextStateTopicFactory *factory; // @synthesize factory=_factory;
@property(nonatomic) __weak id <TextStateTopicLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sortTopics;
- (void)privateDeleteTopicWithUsername:(id)arg1;
- (void)privateAddOrUpdateTopicWithUsername:(id)arg1 textState:(id)arg2;
- (void)updateTopicWithUsername:(id)arg1 textState:(id)arg2;
- (void)constructTopicsFromData:(id)arg1 presentType:(id)arg2;
- (id)topicForId:(id)arg1;
- (id)getTopics;
- (id)topicSortedUsernameList;
- (id)topicTextStateForUsername:(id)arg1;
- (unsigned long long)topicUsernameCount;
- (void)initData;
- (id)init;

@end
