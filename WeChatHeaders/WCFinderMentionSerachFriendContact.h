//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderMentionSerachFriendContact : NSObject
{
    WCFinderContact *_finderContact;
    NSString *_matchDesc;
    NSString *_highlightDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *highlightDesc; // @synthesize highlightDesc=_highlightDesc;
@property(retain, nonatomic) NSString *matchDesc; // @synthesize matchDesc=_matchDesc;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;

@end

