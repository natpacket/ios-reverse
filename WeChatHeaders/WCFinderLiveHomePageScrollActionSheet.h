//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollActionSheet.h"

@class NSArray, WCFinderFeedContentVM;

@interface WCFinderLiveHomePageScrollActionSheet : MMScrollActionSheet
{
    _Bool _forceDarkMode;
    unsigned long long _containerId;
    WCFinderFeedContentVM *_contentVM;
    NSArray *_itemArrayConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) NSArray *itemArrayConfig; // @synthesize itemArrayConfig=_itemArrayConfig;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (_Bool)_itemEnable:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)getRowItems:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)genMenuIconArray:(id)arg1 contentVM:(id)arg2;
- (_Bool)hasItem:(unsigned long long)arg1;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2 scene:(unsigned long long)arg3 msgType:(unsigned int)arg4 innerAppMsgType:(unsigned int)arg5;
- (id)_getFinderDisableColor;
- (id)initWithContentVM:(id)arg1 containerId:(unsigned long long)arg2 forceDarkMode:(_Bool)arg3;
- (id)initWithContentVM:(id)arg1 containerId:(unsigned long long)arg2;

@end

