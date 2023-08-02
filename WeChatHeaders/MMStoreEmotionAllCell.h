//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMStoreEmotionBaseAllCell.h"

@class EmoticonStoreItem;
@protocol MMStoreEmotionAllCellDelegate;

@interface MMStoreEmotionAllCell : MMStoreEmotionBaseAllCell
{
    id <MMStoreEmotionAllCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMStoreEmotionAllCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)updateCellCornerRadiusFor:(_Bool)arg1 isFirst:(_Bool)arg2;
- (void)changeLayoutForLastCell;
- (void)changeLayoutForFirstCell;
- (void)updateStoreItem:(id)arg1 Entrance:(unsigned int)arg2;
- (_Bool)layoutStaticBtnWidth;
@property(readonly, nonatomic) EmoticonStoreItem *m_storeItem;

@end

