//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderComment;

@interface WCFinderCommentPostInfo : NSObject
{
    NSString *_tid;
    NSString *_nonceID;
    unsigned long long _scene;
    long long _postScene;
    WCFinderComment *_replyComment;
    NSString *_commentText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) WCFinderComment *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) long long postScene; // @synthesize postScene=_postScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2;

@end

