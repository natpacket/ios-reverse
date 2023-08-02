//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage, UIView;

@interface WCTableViewCellRightConfig : NSObject
{
    _Bool _withRedDot;
    _Bool _selected;
    _Bool _enableCopy;
    _Bool _accssoryOn;
    _Bool _accssoryDisabled;
    unsigned long long _mode;
    NSString *_detail;
    UIColor *_detailColor;
    UIFont *_detailFont;
    UIImage *_image;
    UIView *_rightView;
    NSString *_imageUrl;
    NSString *_tipsImageUrl;
    long long _numberOfLines;
    unsigned long long _accessoryType;
    UIColor *_accessoryColor;
    UIColor *_accessoryDisclosureIndicatorColor;
    SEL _accssoryAction;
    id _accssoryTarget;
    double _customAccessoryRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double customAccessoryRightMargin; // @synthesize customAccessoryRightMargin=_customAccessoryRightMargin;
@property(nonatomic) _Bool accssoryDisabled; // @synthesize accssoryDisabled=_accssoryDisabled;
@property(nonatomic) _Bool accssoryOn; // @synthesize accssoryOn=_accssoryOn;
@property(nonatomic) __weak id accssoryTarget; // @synthesize accssoryTarget=_accssoryTarget;
@property(nonatomic) SEL accssoryAction; // @synthesize accssoryAction=_accssoryAction;
@property(retain, nonatomic) UIColor *accessoryDisclosureIndicatorColor; // @synthesize accessoryDisclosureIndicatorColor=_accessoryDisclosureIndicatorColor;
@property(retain, nonatomic) UIColor *accessoryColor; // @synthesize accessoryColor=_accessoryColor;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool enableCopy; // @synthesize enableCopy=_enableCopy;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool withRedDot; // @synthesize withRedDot=_withRedDot;
@property(retain, nonatomic) NSString *tipsImageUrl; // @synthesize tipsImageUrl=_tipsImageUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIFont *detailFont; // @synthesize detailFont=_detailFont;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)addAccessoryTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end

