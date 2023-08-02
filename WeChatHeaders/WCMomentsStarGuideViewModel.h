//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCDataItem;

@interface WCMomentsStarGuideViewModel : NSObject
{
    _Bool _hasRecordedDisplay;
    _Bool _hasRecordedClick;
    _Bool _canShowStarGuideButton;
    WCDataItem *_dataItem;
    long long _scene;
    NSString *_starGuideTips;
    NSString *_starGuideActionTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *starGuideActionTitle; // @synthesize starGuideActionTitle=_starGuideActionTitle;
@property(copy, nonatomic) NSString *starGuideTips; // @synthesize starGuideTips=_starGuideTips;
@property(nonatomic) _Bool canShowStarGuideButton; // @synthesize canShowStarGuideButton=_canShowStarGuideButton;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)didClickGuideButton;
- (void)willDisplayGuideButton;
- (_Bool)hasActionRecordForShowingStarGuideButton;
- (_Bool)shouldShowStarGuideButton;
- (_Bool)validateMediaItemListForScene;
- (_Bool)validateMediaItemList;
- (_Bool)validateDataItem;
- (_Bool)validateDevice;
- (void)updateDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 scene:(long long)arg2;

@end
