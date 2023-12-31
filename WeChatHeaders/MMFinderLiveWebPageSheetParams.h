//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface MMFinderLiveWebPageSheetParams : NSObject
{
    _Bool _showDislike;
    _Bool _supportSharing;
    _Bool _overrideCache;
    NSString *_uri;
    double _screenRatio;
    UIViewController *_fromVc;
}

+ (id)paramsWithUri:(id)arg1 showDislike:(_Bool)arg2 supportSharing:(_Bool)arg3 screenRatio:(double)arg4 overrideCache:(_Bool)arg5;
+ (id)paramsWithUri:(id)arg1 showDislike:(_Bool)arg2 supportSharing:(_Bool)arg3 screenRatio:(double)arg4;
+ (id)paramsWithUri:(id)arg1 showDislike:(_Bool)arg2 supportSharing:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *fromVc; // @synthesize fromVc=_fromVc;
@property(nonatomic) _Bool overrideCache; // @synthesize overrideCache=_overrideCache;
@property(nonatomic) double screenRatio; // @synthesize screenRatio=_screenRatio;
@property(nonatomic) _Bool supportSharing; // @synthesize supportSharing=_supportSharing;
@property(nonatomic) _Bool showDislike; // @synthesize showDislike=_showDislike;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (_Bool)isEqual:(id)arg1;

@end

