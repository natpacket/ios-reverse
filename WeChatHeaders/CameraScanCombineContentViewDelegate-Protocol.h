//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CameraScanGoodsItemViewModel;

@protocol CameraScanCombineContentViewDelegate <NSObject>
- (void)callSetupHoleMaskViewWithHoleFrame:(struct CGRect)arg1;
- (void)onClikcItemCardWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onAddItemFromDetectorsWithItemViewModel:(CameraScanGoodsItemViewModel *)arg1 index:(unsigned long long)arg2;
- (void)onListViewWillEndDragging;
- (void)onListViewWillStartDragging;
- (void)listViewDidFold:(_Bool)arg1;
- (void)listViewWillFold:(_Bool)arg1;
- (double)getTabViewHeight;
- (double)getContentBottomMarginToTabView;
- (double)getWidthBetweenAlbumButtonAndMyQRCodeButton;
- (double)getContentBottomMargin;
@end

