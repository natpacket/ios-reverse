//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIView, WCFinderDataItem;
@protocol WCFinderMinimizeContentViewProtocol;

@interface WCFinderMinimizePlayInfo : NSObject
{
    _Bool _allowPlay;
    _Bool _mediaIsMute;
    NSString *_forbidenPlayToast;
    NSMutableDictionary *_extInfo;
    UIView<WCFinderMinimizeContentViewProtocol> *_contentView;
    UIView *_minimizeAnimatingView;
    long long _infoState;
    WCFinderDataItem *_dataItem;
    double _playProgress;
    double _playbackTime;
}

- (void).cxx_destruct;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) double playProgress; // @synthesize playProgress=_playProgress;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long infoState; // @synthesize infoState=_infoState;
@property(retain, nonatomic) UIView *minimizeAnimatingView; // @synthesize minimizeAnimatingView=_minimizeAnimatingView;
@property(retain, nonatomic) UIView<WCFinderMinimizeContentViewProtocol> *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool mediaIsMute; // @synthesize mediaIsMute=_mediaIsMute;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *forbidenPlayToast; // @synthesize forbidenPlayToast=_forbidenPlayToast;
@property(nonatomic) _Bool allowPlay; // @synthesize allowPlay=_allowPlay;
- (id)description;

@end

