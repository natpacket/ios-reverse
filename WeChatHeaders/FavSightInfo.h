//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FavStreamVideoItem, FavoritesItem, FavoritesItemDataField, NSString;

@interface FavSightInfo : NSObject
{
    _Bool _needLazyDownload;
    int _duration;
    int _type;
    int _illegalType;
    NSString *_dataPath;
    NSString *_thumbPath;
    FavStreamVideoItem *_streamVideoItem;
    NSString *_statExtStr;
    long long _dataSize;
    NSString *_videoUrl;
    NSString *_thumbUrl;
    FavoritesItem *_favItem;
    FavoritesItemDataField *_favData;
}

+ (id)createSightInfoWithData:(id)arg1 AndItem:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool needLazyDownload; // @synthesize needLazyDownload=_needLazyDownload;
@property(retain, nonatomic) FavoritesItemDataField *favData; // @synthesize favData=_favData;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) long long dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) int illegalType; // @synthesize illegalType=_illegalType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) FavStreamVideoItem *streamVideoItem; // @synthesize streamVideoItem=_streamVideoItem;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;

@end

