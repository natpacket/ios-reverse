//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface WCSearchUIConfig : NSObject
{
    _Bool _useHeroDismissAnimation;
    _Bool _forbidDismissAnimation;
    _Bool _forceUseDarkMode;
    _Bool _useNoSnapshotTransition;
    _Bool _useHeroNavPopAnimation;
    UIColor *_mainViewBackgroundColor;
    UIColor *_navBarBackgroundColor;
    UIColor *_searchBoxBackgroundColor;
    UIColor *_searchBarBackgroundColor;
    UIImage *_leftIconImage;
    double _searchBarHeight;
    double _searchBarTextFontSize;
    double _searchBarTransitionOffset;
    struct UIEdgeInsets _searchBarLayoutMargin;
}

+ (id)transparentConfigFor:(id)arg1;
+ (id)verticalSearchConfigFor:(id)arg1;
+ (id)commonConfigFor:(id)arg1;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) double searchBarTransitionOffset; // @synthesize searchBarTransitionOffset=_searchBarTransitionOffset;
@property(nonatomic) _Bool useHeroNavPopAnimation; // @synthesize useHeroNavPopAnimation=_useHeroNavPopAnimation;
@property(nonatomic) _Bool useNoSnapshotTransition; // @synthesize useNoSnapshotTransition=_useNoSnapshotTransition;
@property(nonatomic) _Bool forceUseDarkMode; // @synthesize forceUseDarkMode=_forceUseDarkMode;
@property(nonatomic) _Bool forbidDismissAnimation; // @synthesize forbidDismissAnimation=_forbidDismissAnimation;
@property(nonatomic) _Bool useHeroDismissAnimation; // @synthesize useHeroDismissAnimation=_useHeroDismissAnimation;
@property(nonatomic) double searchBarTextFontSize; // @synthesize searchBarTextFontSize=_searchBarTextFontSize;
@property(nonatomic) struct UIEdgeInsets searchBarLayoutMargin; // @synthesize searchBarLayoutMargin=_searchBarLayoutMargin;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(retain, nonatomic) UIImage *leftIconImage; // @synthesize leftIconImage=_leftIconImage;
@property(retain, nonatomic) UIColor *searchBarBackgroundColor; // @synthesize searchBarBackgroundColor=_searchBarBackgroundColor;
@property(retain, nonatomic) UIColor *searchBoxBackgroundColor; // @synthesize searchBoxBackgroundColor=_searchBoxBackgroundColor;
@property(retain, nonatomic) UIColor *navBarBackgroundColor; // @synthesize navBarBackgroundColor=_navBarBackgroundColor;
@property(retain, nonatomic) UIColor *mainViewBackgroundColor; // @synthesize mainViewBackgroundColor=_mainViewBackgroundColor;
- (id)init;

@end

