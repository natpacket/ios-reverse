//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WNTextUrlData : NSObject
{
    NSURL *_url;
    NSString *_linkStr;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *linkStr; // @synthesize linkStr=_linkStr;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;

@end

