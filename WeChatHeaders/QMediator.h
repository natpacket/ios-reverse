//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QBasicMapView, QIndoorManager, QStyleManager;

@interface QMediator : NSObject
{
    QBasicMapView *_basicMapView;
    QIndoorManager *_indoorManager;
    QStyleManager *_styleManager;
}

+ (id)mediatorWithBasicMapView:(id)arg1 indoorManager:(id)arg2 styleManager:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak QStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(nonatomic) __weak QIndoorManager *indoorManager; // @synthesize indoorManager=_indoorManager;
@property(nonatomic) __weak QBasicMapView *basicMapView; // @synthesize basicMapView=_basicMapView;
- (id)initWithBasicMapView:(id)arg1 indoorManager:(id)arg2 styleManager:(id)arg3;
- (void)resetGLContext;
- (void)switchGLContext;
- (struct CGSize)viewSize;
- (float)pointRatio;
- (float)pixelRatio;
- (struct CGPoint)screenPointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)mapPointForScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)glPointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
- (CDStruct_c3b9c2ee)centerMapPoint;
- (int)renderType;
- (void)event_mapStatusChanged;
- (_Bool)currentMapContainsChina;
- (void)makeDirty;
- (double)scaleLevel;
- (double)skew;
- (double)rotation;
- (double)zoomLevel;
- (CDStruct_02837cd9)visibleMapRect;
- (void)updateMapToCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toMapPointFromView:(id)arg2;
- (struct CGPoint)convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (id)getStyleIDString;
- (_Bool)hasIndoorPrevilege;
- (long long)getKeyType;
- (id)getActiveLevelName;
- (id)getActiveBuildingGuid;
- (id)getBasicMapView;

@end
