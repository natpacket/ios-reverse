//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface WCFinderCustomCollectionFlowLayout : UICollectionViewFlowLayout
{
    _Bool _useDamping;
    struct CGSize _minimumSize;
}

@property(nonatomic) _Bool useDamping; // @synthesize useDamping=_useDamping;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)collectionViewContentSize;

@end

