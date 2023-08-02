//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WAAppStateChangedContextInfoBluetoothInfo, WAAppStateChangedContextInfoLocationInfo, WAAppStateChangedContextInfoMusicInfo, WAAppStateChangedContextInfoWXABGAudioInfo;

@interface WAAppStateChangedContextInfo : MMObject
{
    WAAppStateChangedContextInfoMusicInfo *_musicInfo;
    WAAppStateChangedContextInfoLocationInfo *_locationInfo;
    WAAppStateChangedContextInfoWXABGAudioInfo *_wxaBGAudioInfo;
    WAAppStateChangedContextInfoBluetoothInfo *_bluetoothInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppStateChangedContextInfoBluetoothInfo *bluetoothInfo; // @synthesize bluetoothInfo=_bluetoothInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoWXABGAudioInfo *wxaBGAudioInfo; // @synthesize wxaBGAudioInfo=_wxaBGAudioInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) WAAppStateChangedContextInfoMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)description;
- (id)init;

@end

