//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MPPageCommentParam : MMObject
{
    _Bool _isSubReply;
    unsigned int _personalCommentId;
    NSString *_title;
    unsigned long long _commentTopicId;
    NSString *_replyContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(nonatomic) unsigned int personalCommentId; // @synthesize personalCommentId=_personalCommentId;
@property(nonatomic) _Bool isSubReply; // @synthesize isSubReply=_isSubReply;
@property(nonatomic) unsigned long long commentTopicId; // @synthesize commentTopicId=_commentTopicId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

