//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, NSString;

@interface TingMusicInfoDetailModel : MMObject
{
    _Bool _shouldShowFinderIcon;
    unsigned long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_coverUrl;
    NSMutableDictionary *_userDataDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userDataDict; // @synthesize userDataDict=_userDataDict;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool shouldShowFinderIcon; // @synthesize shouldShowFinderIcon=_shouldShowFinderIcon;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

