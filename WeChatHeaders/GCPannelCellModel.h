//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseCellModel.h"

@class GCPannelItem;

@interface GCPannelCellModel : GCBaseCellModel
{
    GCPannelItem *_pannelItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCPannelItem *pannelItem; // @synthesize pannelItem=_pannelItem;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;

@end

