//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface TingDanmakuViewModel : NSObject
{
    _Bool _isLiked;
    _Bool _isHightLight;
    double _targetTime;
    NSURL *_headerImageURL;
    NSString *_text;
    UIImage *_image;
    NSURL *_videoURL;
}

+ (_Bool)isLargeDanmaku:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHightLight; // @synthesize isHightLight=_isHightLight;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(nonatomic) double targetTime; // @synthesize targetTime=_targetTime;
- (unsigned int)calcType;
- (id)init;

@end

