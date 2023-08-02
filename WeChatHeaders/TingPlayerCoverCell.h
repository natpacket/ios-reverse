//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TingCoverItem;
@protocol TingPlayerCoverCellDelegate;

@interface TingPlayerCoverCell : UICollectionViewCell
{
    id <TingPlayerCoverCellDelegate> _delegate;
    TingCoverItem *_coverItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingCoverItem *coverItem; // @synthesize coverItem=_coverItem;
@property(nonatomic) __weak id <TingPlayerCoverCellDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)contentSizeForConstrainedSize:(struct CGSize)arg1;
- (unsigned long long)displayType;
- (id)displayBackgroundColor;
- (id)displayView;
- (void)updateDisplay:(id)arg1;
@property(readonly, nonatomic) unsigned long long mode;

@end

