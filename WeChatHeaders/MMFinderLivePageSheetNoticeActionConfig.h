//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMFinderLivePageSheetNoticeActionConfig : NSObject
{
    NSString *_actionTitle;
    CDUnknownBlockType _actionBlock;
    UIColor *_textColor;
    UIColor *_bgColor;
}

+ (id)commonAction;
+ (id)cancelAction;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;

@end

