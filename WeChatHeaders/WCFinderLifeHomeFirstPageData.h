//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface WCFinderLifeHomeFirstPageData : NSObject
{
    NSMutableArray *_pages;
    NSArray *_rootTags;
    long long _defaultSelectedIdx;
}

- (void).cxx_destruct;
@property(nonatomic) long long defaultSelectedIdx; // @synthesize defaultSelectedIdx=_defaultSelectedIdx;
@property(retain, nonatomic) NSArray *rootTags; // @synthesize rootTags=_rootTags;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;

@end
