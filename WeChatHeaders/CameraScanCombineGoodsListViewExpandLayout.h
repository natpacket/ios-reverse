//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol CameraScanCombineGoodsListViewLayoutDelegate;

@interface CameraScanCombineGoodsListViewExpandLayout : UICollectionViewLayout
{
    id <CameraScanCombineGoodsListViewLayoutDelegate> _delegate;
    NSMutableArray *_attributesArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *attributesArray; // @synthesize attributesArray=_attributesArray;
@property(nonatomic) __weak id <CameraScanCombineGoodsListViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (double)topBlankAreaHeight;
- (double)contentHeight;
- (double)gradienLayerMaskHeight;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

