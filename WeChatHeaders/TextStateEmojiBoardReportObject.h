//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateEmojiBoardReportObject : NSObject
{
    _Bool _isRecentUsedSectionValid;
    unsigned long long _showTimeStamp;
    unsigned long long _hideTimeStamp;
    NSString *_publishId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecentUsedSectionValid; // @synthesize isRecentUsedSectionValid=_isRecentUsedSectionValid;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(nonatomic) unsigned long long hideTimeStamp; // @synthesize hideTimeStamp=_hideTimeStamp;
@property(nonatomic) unsigned long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
- (void)tapEmojiIcon:(id)arg1 groupDescription:(id)arg2;
- (void)hideEmojiBoard;
- (void)showEmojiBoard;

@end

