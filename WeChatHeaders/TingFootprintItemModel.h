//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface TingFootprintItemModel : MMObject
{
    _Bool _isCreateFootprint;
    _Bool _isSelf;
    NSString *_headImageUrl;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) _Bool isCreateFootprint; // @synthesize isCreateFootprint=_isCreateFootprint;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;

@end

