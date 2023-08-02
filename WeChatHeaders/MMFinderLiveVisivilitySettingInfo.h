//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface MMFinderLiveVisivilitySettingInfo : NSObject <NSCopying>
{
    _Bool _isModified;
    int _currentLiveMode;
    long long _currentVisibilityMode;
    NSArray *_allVisibilityFileList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isModified; // @synthesize isModified=_isModified;
@property(retain, nonatomic) NSArray *allVisibilityFileList; // @synthesize allVisibilityFileList=_allVisibilityFileList;
@property(nonatomic) long long currentVisibilityMode; // @synthesize currentVisibilityMode=_currentVisibilityMode;
@property(nonatomic) int currentLiveMode; // @synthesize currentLiveMode=_currentLiveMode;
- (id)getDefaultDescription;
- (id)getDescriptionForCurrentSetting;
- (id)getSettingDescription;
- (_Bool)isSettingEnabled;
- (void)recoverInfosToInitParam:(id)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

