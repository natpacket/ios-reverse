//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AbstractRingToneSubDetail : NSObject
{
    NSString *_title;
    NSString *_authorDesc;
    NSString *_thumbUrl;
    NSMutableArray *_searchHitWords;
    NSString *_outsideTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *outsideTitle; // @synthesize outsideTitle=_outsideTitle;
@property(retain, nonatomic) NSMutableArray *searchHitWords; // @synthesize searchHitWords=_searchHitWords;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *authorDesc; // @synthesize authorDesc=_authorDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

