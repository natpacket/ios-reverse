//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPSettingUtil : NSObject
{
}

+ (_Bool)changeVoipMicToRemoteIO;
+ (_Bool)saveVoipVideoScoreSettingLastScoreTime:(unsigned int)arg1;
+ (unsigned int)getVoipVideoScoreSettingLastScoreTime;
+ (id)getVoipVideoScoreSettingPath;
+ (long long)FrontMicCheckAndSetConfig:(int)arg1 enbleConfig:(int)arg2 playVolume:(int)arg3;
+ (id)getParamOfKeyStaticCap:(id)arg1 defaultVal:(id)arg2;
+ (id)getParamOfKey:(id)arg1 defaultVal:(id)arg2;
+ (id)getParamOfKeyItem:(id)arg1 filePath:(id)arg2 defaultVal:(id)arg3;
+ (_Bool)saveParamsStaticCab:(id)arg1;
+ (_Bool)saveParams:(id)arg1;
+ (_Bool)saveParamsItem:(id)arg1 filePath:(id)arg2 paramFilter:(id)arg3;
+ (id)getVoipSettingStaticCapPath;
+ (id)getVoipSettingConfinPath;
+ (id)getVoipSettingConfigRootDir;
+ (int)getMicPortChange;

@end

