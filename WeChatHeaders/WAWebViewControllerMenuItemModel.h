//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface WAWebViewControllerMenuItemModel : NSObject
{
    _Bool _disabled;
    NSString *_title;
    UIImage *_iconImage;
    double _alpha;
    unsigned long long _menuItemType;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toMMScrollActionSheetItem;
- (id)init;

@end

