//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WebviewPageJumpReportInfo : NSObject
{
    NSString *_pageUrl;
    unsigned long long _enterTimestamp;
    unsigned long long _pageStayTime;
    NSString *_pageTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) unsigned long long pageStayTime; // @synthesize pageStayTime=_pageStayTime;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
- (id)description;

@end

