//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUClusterAlgorithm.h"

@class QMUInScreenClusterAlgorithm, QMUWorldClusterAlgorithm;

@interface QMUUnivisalClusterAlgorithm : QMUClusterAlgorithm
{
    int _thresholdZoomlevel;
    QMUInScreenClusterAlgorithm *_highLevel;
    QMUWorldClusterAlgorithm *_lowLevel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QMUWorldClusterAlgorithm *lowLevel; // @synthesize lowLevel=_lowLevel;
@property(retain, nonatomic) QMUInScreenClusterAlgorithm *highLevel; // @synthesize highLevel=_highLevel;
@property(nonatomic) int thresholdZoomlevel; // @synthesize thresholdZoomlevel=_thresholdZoomlevel;
- (void)setMap:(id)arg1;
- (id)map;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDistance:(double)arg1;
- (double)distance;
- (void)refreshCluster;
- (id)initWithDateStorer:(id)arg1 originData:(id)arg2;

@end

