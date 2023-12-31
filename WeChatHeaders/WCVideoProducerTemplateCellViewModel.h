//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCVideoProducerLoadMoreViewModelProtocol-Protocol.h"

@class MJVideoTemplate, NSString, UIFont;

@interface WCVideoProducerTemplateCellViewModel : NSObject <WCVideoProducerLoadMoreViewModelProtocol>
{
    _Bool isLoadMoreCell;
    _Bool _isFocused;
    _Bool _isSelected;
    unsigned long long initialStateForLoadMoreCell;
    MJVideoTemplate *_mjVideoTemplate;
    UIFont *_cachedTemplateNameScaledFont;
    UIFont *_cachedSelectedTemplateNameScaledFont;
    NSString *_cachedPreviewAnimFilePath;
    long long _cellType;
    long long _selectedStyle;
    long long _cellOrder;
}

+ (struct CGSize)cellViewSizeForType:(long long)arg1;
+ (long long)cellTypeFromId:(id)arg1;
+ (id)sectionIdForType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long cellOrder; // @synthesize cellOrder=_cellOrder;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
@property(nonatomic) long long selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NSString *cachedPreviewAnimFilePath; // @synthesize cachedPreviewAnimFilePath=_cachedPreviewAnimFilePath;
@property(retain, nonatomic) UIFont *cachedSelectedTemplateNameScaledFont; // @synthesize cachedSelectedTemplateNameScaledFont=_cachedSelectedTemplateNameScaledFont;
@property(retain, nonatomic) UIFont *cachedTemplateNameScaledFont; // @synthesize cachedTemplateNameScaledFont=_cachedTemplateNameScaledFont;
@property(retain, nonatomic) MJVideoTemplate *mjVideoTemplate; // @synthesize mjVideoTemplate=_mjVideoTemplate;
@property(nonatomic) _Bool isLoadMoreCell; // @synthesize isLoadMoreCell;
@property(nonatomic) unsigned long long initialStateForLoadMoreCell; // @synthesize initialStateForLoadMoreCell;
- (_Bool)isCellTypeSupportedForPreviewAnimation;
- (_Bool)isCellTypeSelectable;
- (void)bindByCellView:(id)arg1;
- (id)initWithMJVideoTemplate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

