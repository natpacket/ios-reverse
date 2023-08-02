//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MusicInteractionStatistics <NSObject>
@property(readonly, nonatomic) _Bool isSelfLiked;
@property(readonly, nonatomic) unsigned long long forwardCount;
@property(readonly, nonatomic) unsigned long long likeCount;
@property(readonly, nonatomic) unsigned long long commentCount;
@property(readonly, nonatomic) NSString *musicInteractionidentifier;
- (_Bool)isValidMusicInteractionStatistics;
@end
