//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionView;

@interface WCFinderProfileOverviewCollectionCellRegister : NSObject
{
    UICollectionView *_collectionView;
}

+ (id)newWithCollectionView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)registerHeader:(Class)arg1 identifier:(id)arg2;
- (void)registerFooter:(Class)arg1 identifier:(id)arg2;
- (void)registerCell:(Class)arg1;

@end
