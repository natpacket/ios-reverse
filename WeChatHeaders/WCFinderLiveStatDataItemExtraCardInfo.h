//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderJumpInfo, NSString, UIColor, UIImage;

@interface WCFinderLiveStatDataItemExtraCardInfo : NSObject
{
    UIColor *_bgColor;
    UIColor *_fontStartColor;
    UIColor *_fontEndColor;
    NSString *_title;
    UIImage *_fontColorImage;
    FinderJumpInfo *_jumpInfo;
}

+ (id)createFromJumpInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UIImage *fontColorImage; // @synthesize fontColorImage=_fontColorImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *fontEndColor; // @synthesize fontEndColor=_fontEndColor;
@property(retain, nonatomic) UIColor *fontStartColor; // @synthesize fontStartColor=_fontStartColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (void)genGradientImageForText;

@end

