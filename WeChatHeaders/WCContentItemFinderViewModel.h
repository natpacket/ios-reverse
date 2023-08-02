//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderShareToMomentsItem;

@interface WCContentItemFinderViewModel : NSObject
{
    _Bool _isVideoFeed;
    unsigned int _style;
    unsigned int _mediaCount;
    unsigned int _totalDuration;
    unsigned long long _mediaType;
    NSString *_thumbUrl;
    WCFinderShareToMomentsItem *_shareItem;
    struct CGSize _fittingSize;
    struct CGSize _thumbSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareToMomentsItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) unsigned int totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(nonatomic) unsigned int mediaCount; // @synthesize mediaCount=_mediaCount;
@property(nonatomic) _Bool isVideoFeed; // @synthesize isVideoFeed=_isVideoFeed;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (struct CGSize)fittingSizeWithCoverType:(unsigned long long)arg1 withWidth:(double)arg2 andHeight:(double)arg3;
- (struct CGSize)fittingSizeWithCoverItem:(id)arg1;
- (_Bool)isMemberShipFeed;
- (id)getShareItem:(id)arg1;
- (id)initWithContentItem:(id)arg1;
- (id)debugDescription;

@end
