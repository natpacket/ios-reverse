//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface EnhanceTranslatingImageCdnObject : NSObject
{
    UIImage *_captureImage;
    UIImage *_enhanceImage;
    UIImage *_translateImage;
    NSString *_captureImageCdnFiledId;
    NSString *_captureImageCdnAesKey;
    NSString *_enhanceImageCdnFiledId;
    NSString *_enhanceImageCdnAesKey;
    NSString *_translateImageCdnFiledId;
    NSString *_translateImageCdnAesKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *translateImageCdnAesKey; // @synthesize translateImageCdnAesKey=_translateImageCdnAesKey;
@property(retain, nonatomic) NSString *translateImageCdnFiledId; // @synthesize translateImageCdnFiledId=_translateImageCdnFiledId;
@property(retain, nonatomic) NSString *enhanceImageCdnAesKey; // @synthesize enhanceImageCdnAesKey=_enhanceImageCdnAesKey;
@property(retain, nonatomic) NSString *enhanceImageCdnFiledId; // @synthesize enhanceImageCdnFiledId=_enhanceImageCdnFiledId;
@property(retain, nonatomic) NSString *captureImageCdnAesKey; // @synthesize captureImageCdnAesKey=_captureImageCdnAesKey;
@property(retain, nonatomic) NSString *captureImageCdnFiledId; // @synthesize captureImageCdnFiledId=_captureImageCdnFiledId;
@property(retain, nonatomic) UIImage *translateImage; // @synthesize translateImage=_translateImage;
@property(retain, nonatomic) UIImage *enhanceImage; // @synthesize enhanceImage=_enhanceImage;
@property(retain, nonatomic) UIImage *captureImage; // @synthesize captureImage=_captureImage;

@end

