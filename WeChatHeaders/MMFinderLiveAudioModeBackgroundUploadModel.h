//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMFinderLiveAudioModeBackgroundUploadModel : NSObject
{
    _Bool _uploaded;
    unsigned int _backgroundType;
    NSData *_image;
    NSString *_video;
    NSString *_imageUri;
    NSString *_videoUri;
}

+ (id)animatedBackgroundUploadModelWithVideoPath:(id)arg1 fallbackImageData:(id)arg2;
+ (id)staticBackgroundUploadModelWithImageData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoUri; // @synthesize videoUri=_videoUri;
@property(retain, nonatomic) NSString *imageUri; // @synthesize imageUri=_imageUri;
@property(retain, nonatomic) NSString *video; // @synthesize video=_video;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(nonatomic) _Bool uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) unsigned int backgroundType; // @synthesize backgroundType=_backgroundType;
- (_Bool)validPostUpload;
- (_Bool)validPreUpload;
- (id)backgroundConfiguration;
- (void)updateUploadedAnimatedVideoUri:(id)arg1 fallbackImageUri:(id)arg2;
- (void)updateUploadedStaticImageUri:(id)arg1;
@property(readonly, nonatomic) _Bool valid;

@end

