//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem28528 : KvReportBaseItem
{
    unsigned int _numberOfSections_21;
    unsigned int _offsetDiff_22;
    unsigned int _markCellY_23;
    unsigned int _currentCellY_24;
    unsigned int _markCellSection_25;
    unsigned int _markCellRow_26;
    NSString *_identifier_27;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier_27; // @synthesize identifier_27=_identifier_27;
@property(nonatomic) unsigned int markCellRow_26; // @synthesize markCellRow_26=_markCellRow_26;
@property(nonatomic) unsigned int markCellSection_25; // @synthesize markCellSection_25=_markCellSection_25;
@property(nonatomic) unsigned int currentCellY_24; // @synthesize currentCellY_24=_currentCellY_24;
@property(nonatomic) unsigned int markCellY_23; // @synthesize markCellY_23=_markCellY_23;
@property(nonatomic) unsigned int offsetDiff_22; // @synthesize offsetDiff_22=_offsetDiff_22;
@property(nonatomic) unsigned int numberOfSections_21; // @synthesize numberOfSections_21=_numberOfSections_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

