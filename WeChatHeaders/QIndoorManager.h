//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QIndoorPickerDelegate-Protocol.h"
#import "QMapContextDelegate-Protocol.h"

@class NSString, QIndoorBuilding, QIndoorLevel, QIndoorMapData, QIndoorPicker, QMapContext, QStatisticer, QUniversalMapCounter, UIView;
@protocol QIndoorManagerDelegate;

@interface QIndoorManager : NSObject <QMapContextDelegate, QIndoorPickerDelegate>
{
    _Bool _indoorEnabled;
    _Bool _indoorPrevilege;
    _Bool _indoorPickerEnabled;
    _Bool _darkMode;
    _Bool _isLogoRightBottom;
    id <QIndoorManagerDelegate> _delegate;
    NSString *_customFont;
    UIView *_hostView;
    QIndoorBuilding *_activeBuilding;
    QStatisticer *_statisticer;
    QUniversalMapCounter *_indoorUBSCounter;
    double _logoAndMapCenterHeight;
    QIndoorPicker *_picker;
    unsigned long long _activeLevelIndex;
    QIndoorMapData *_indoorMapData;
    NSString *_businessKey;
    NSString *_configDirectoryPath;
    NSString *_indoorPlistPath;
    QMapContext *_mapContext;
    struct CGPoint _indoorPickerOffset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(copy, nonatomic) NSString *indoorPlistPath; // @synthesize indoorPlistPath=_indoorPlistPath;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(retain, nonatomic) QIndoorMapData *indoorMapData; // @synthesize indoorMapData=_indoorMapData;
@property(nonatomic) unsigned long long activeLevelIndex; // @synthesize activeLevelIndex=_activeLevelIndex;
@property(retain, nonatomic) QIndoorPicker *picker; // @synthesize picker=_picker;
@property(nonatomic) _Bool isLogoRightBottom; // @synthesize isLogoRightBottom=_isLogoRightBottom;
@property(nonatomic) double logoAndMapCenterHeight; // @synthesize logoAndMapCenterHeight=_logoAndMapCenterHeight;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) __weak QUniversalMapCounter *indoorUBSCounter; // @synthesize indoorUBSCounter=_indoorUBSCounter;
@property(retain, nonatomic) QStatisticer *statisticer; // @synthesize statisticer=_statisticer;
@property(retain, nonatomic) QIndoorBuilding *activeBuilding; // @synthesize activeBuilding=_activeBuilding;
@property(nonatomic) struct CGPoint indoorPickerOffset; // @synthesize indoorPickerOffset=_indoorPickerOffset;
@property(nonatomic) _Bool indoorPickerEnabled; // @synthesize indoorPickerEnabled=_indoorPickerEnabled;
@property(nonatomic) _Bool indoorPrevilege; // @synthesize indoorPrevilege=_indoorPrevilege;
@property(nonatomic, getter=isIndoorEnabled) _Bool indoorEnabled; // @synthesize indoorEnabled=_indoorEnabled;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(copy, nonatomic) NSString *customFont; // @synthesize customFont=_customFont;
@property(nonatomic) __weak id <QIndoorManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)reloadCurrentState;
- (void)setupIndoorMapData;
- (void)setupIndoorPlist;
- (id)initWithContext:(id)arg1 configPreference:(id)arg2;
- (void)setActiveBuildsFilter:(id)arg1;
- (double)getIndoorOutlineZoom:(id)arg1;
- (void)setIndoorMaskColor:(id)arg1;
- (void)setActiveIndoorInfo:(id)arg1;
- (void)reloadIndoorMap;
- (void)resetIndoorMapData;
- (void)updateIndoorMapData:(id)arg1;
@property(retain, nonatomic) QIndoorLevel *activeLevel;
- (void)mapContext:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)indoorPicker:(id)arg1 didSelectLevelIndex:(unsigned long long)arg2;
- (void)validatePickerFrame:(double)arg1;
- (void)updatePicker;
- (void)updatePickStatus;
- (void)createPicker;
@property(readonly, nonatomic) long long keyType;
- (_Bool)isAnyIndoorShown;
- (void)callDelegateDidChangeActiveLevel:(id)arg1;
- (void)callDelegateDidChangeActiveBuilding:(id)arg1;
- (void)resetIndoorCell;
- (void)setInoorCellInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

