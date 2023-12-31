//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QAOILayerPolygonView, QAOIMarkerManager;

@interface QAOILayer : NSObject
{
    NSString *_uid;
    double _minZoom;
    double _maxZoom;
    double _internalMinZoom;
    double _internalMaxZoom;
    NSMutableArray *_markers;
    QAOILayerPolygonView *_polygonView;
    QAOIMarkerManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QAOIMarkerManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) QAOILayerPolygonView *polygonView; // @synthesize polygonView=_polygonView;
@property(retain, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(nonatomic) double internalMaxZoom; // @synthesize internalMaxZoom=_internalMaxZoom;
@property(nonatomic) double internalMinZoom; // @synthesize internalMinZoom=_internalMinZoom;
@property(nonatomic) double maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) double minZoom; // @synthesize minZoom=_minZoom;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)showSubPois:(_Bool)arg1;
- (id)initWithUID:(id)arg1;

@end

