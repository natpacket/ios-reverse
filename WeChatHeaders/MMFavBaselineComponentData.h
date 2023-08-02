//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponentData.h"

@class FavoritesItem, NSArray, NSString, UIImage;

@interface MMFavBaselineComponentData : MMComponentData
{
    _Bool _bShowDataSize;
    _Bool _shouldHideSourceNameLabel;
    unsigned int _uiFavUpDateTime;
    NSString *_authorName;
    NSString *_nameId;
    unsigned long long _dataSize;
    NSArray *_tagList;
    FavoritesItem *_item;
    UIImage *_logoImage;
    NSString *_nameTailContent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideSourceNameLabel; // @synthesize shouldHideSourceNameLabel=_shouldHideSourceNameLabel;
@property(retain, nonatomic) NSString *nameTailContent; // @synthesize nameTailContent=_nameTailContent;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) FavoritesItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) _Bool bShowDataSize; // @synthesize bShowDataSize=_bShowDataSize;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) NSString *nameId; // @synthesize nameId=_nameId;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) unsigned int uiFavUpDateTime; // @synthesize uiFavUpDateTime=_uiFavUpDateTime;

@end

