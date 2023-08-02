//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QMUClusterAlgorithmProtocol-Protocol.h"
#import "QMapViewDelegate-Protocol.h"

@class NSMutableSet, NSString, QMUPointQuadTree, QMUUnivisalClusterAlgorithm, QMapView;
@protocol QMUClusterProtocol;

@interface QMUClusterManager : NSObject <QMapViewDelegate, QMUClusterAlgorithmProtocol>
{
    double _distance;
    id <QMUClusterProtocol> _delegate;
    QMapView *_map;
    QMUPointQuadTree *_tree;
    NSMutableSet *_items;
    QMUUnivisalClusterAlgorithm *_clusterStrategy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMUUnivisalClusterAlgorithm *clusterStrategy; // @synthesize clusterStrategy=_clusterStrategy;
@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property(retain, nonatomic) QMUPointQuadTree *tree; // @synthesize tree=_tree;
@property(nonatomic) __weak QMapView *map; // @synthesize map=_map;
@property(nonatomic) __weak id <QMUClusterProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void)doRemove:(id)arg1;
- (void)doAdd:(id)arg1;
- (void)clearAnnotations;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotaion:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)addAnnotaion:(id)arg1;
- (_Bool)algorithm:(id)arg1 clusterAnnotation:(id)arg2 withAnnotation:(id)arg3;
- (void)refreshCluster;
- (void)onRegionChanged:(id)arg1;
@property(nonatomic) int thresholdZoomlevel;
- (void)dealloc;
- (id)initWithMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
