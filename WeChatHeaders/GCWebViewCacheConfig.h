//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIViewController;

@interface GCWebViewCacheConfig : NSObject
{
    _Bool _isHalfScreen;
    _Bool _reCreateAfterUsed;
    NSString *_url;
    NSString *_customDataStr;
    UIViewController *_viewController;
    CDUnknownBlockType _onCloseBlock;
    double _webviewHeight;
    NSString *_reuseIndentifier;
    UIColor *_backGroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backGroundColor; // @synthesize backGroundColor=_backGroundColor;
@property(nonatomic) _Bool reCreateAfterUsed; // @synthesize reCreateAfterUsed=_reCreateAfterUsed;
@property(retain, nonatomic) NSString *reuseIndentifier; // @synthesize reuseIndentifier=_reuseIndentifier;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(nonatomic) double webviewHeight; // @synthesize webviewHeight=_webviewHeight;
@property(copy, nonatomic) CDUnknownBlockType onCloseBlock; // @synthesize onCloseBlock=_onCloseBlock;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *customDataStr; // @synthesize customDataStr=_customDataStr;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

