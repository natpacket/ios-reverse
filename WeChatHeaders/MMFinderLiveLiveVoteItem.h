//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveLiveVoteItem : NSObject
{
    _Bool _allowMultipleSelection;
    NSString *_question;
    NSMutableArray *_choices;
    unsigned long long _timeLimit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(nonatomic) unsigned long long timeLimit; // @synthesize timeLimit=_timeLimit;
@property(retain, nonatomic) NSMutableArray *choices; // @synthesize choices=_choices;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;

@end

