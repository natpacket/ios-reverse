//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrightnessDevice, NSTimer;
@protocol YTOnGetBrightness;

@interface YTBrightnessManager : NSObject
{
    vector_8ca568ff vec;
    int _recordCount;
    id <YTOnGetBrightness> _onGetBrightnessDelegate;
    BrightnessDevice *_brightnessDevice;
    NSTimer *_timer;
}

+ (id)getUploadDic:(float)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BrightnessDevice *brightnessDevice; // @synthesize brightnessDevice=_brightnessDevice;
@property(nonatomic) __weak id <YTOnGetBrightness> onGetBrightnessDelegate; // @synthesize onGetBrightnessDelegate=_onGetBrightnessDelegate;
- (void)onGetBrightnessInner:(float)arg1;
- (void)stopBrightness;
- (int)getBrightness:(id)arg1 overTime:(double)arg2;

@end

