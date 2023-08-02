//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItemDataField, NSIndexPath, NSString, RTEAttachmentViewProvider, RTESectionChangeInfo, UIAccessibilityElement, UIScrollView, WeNoteViewController;

@protocol WeNoteDataControllerDelegate <NSObject>
- (void)reloadTableView;
- (long long)currentOrientation;
- (void)contentViewWillBeginDragging;
- (void)willVisibleTextViewAt:(NSIndexPath *)arg1;
- (void)onOpenTopicWithUrl:(NSString *)arg1;
- (void)didContentViewScrollEnd;
- (void)showToastOnToolView:(NSString *)arg1;
- (void)noteScrollViewDidScroll:(UIScrollView *)arg1 extendHeight:(double)arg2;
- (void)onTableSectionChange:(RTESectionChangeInfo *)arg1;
- (void)onCellHeightChange;
- (void)onNoteDownloadResourceNone;
- (void)onNoteDownloadResourceFail;
- (void)onNoteDownloadResourceSuccess;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (NSString *)getPlaceHolder;
- (struct CGSize)getViewSize;
- (FavoritesItemDataField *)getScollToData;
- (WeNoteViewController *)getCurrentViewController;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProvider;
- (void)cancelSelect;
- (void)tryUpdateSelectionViewOnScroll;
- (void)hideMenu;
- (void)tryShowSelectionViewWithMenue:(_Bool)arg1;
- (_Bool)isSelectionViewShowing;
- (void)updateAllOrderedListView;
- (void)updateTypingAttribute;
- (void)updateToolViewStatus;
- (void)resetToolViewType;
- (void)updateSelection;
- (void)scrollElementToVisible:(UIAccessibilityElement *)arg1;
- (void)scrollSelectionToVisible;
- (void)setForbidUpdateToolViewEnable:(_Bool)arg1;
- (void)didGenerationFinished;
- (void)reloadSectionAtIndex:(unsigned long long)arg1;
- (void)reloadAll;
- (void)updateRightBarBtnStatus;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)stopLoading;
- (void)showLoading;
@end
