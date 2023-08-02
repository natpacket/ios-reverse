//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, OrderedDictionary;

@interface TextStateTopicModel : NSObject <NSCopying>
{
    NSString *_topicId;
    OrderedDictionary *_usernameToTextState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *usernameToTextState; // @synthesize usernameToTextState=_usernameToTextState;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (_Bool)localJudgeClusterWithTopicId:(id)arg1;
- (id)clusterPresent;
- (void)onTopicDeleteWithTextState:(id)arg1;
- (void)onTopicAddOrUpdateWithTextState:(id)arg1;
- (id)topicPresentType;
- (void)inserSelfStatus;
- (long long)compare:(id)arg1;
- (void)sortUsernames;
- (id)anyTextState;
- (id)textStateForUsername:(id)arg1;
- (void)deleteUsername:(id)arg1;
- (void)addOrUpdateUsername:(id)arg1 textState:(id)arg2;
- (id)usernames;
- (id)iconWrap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

