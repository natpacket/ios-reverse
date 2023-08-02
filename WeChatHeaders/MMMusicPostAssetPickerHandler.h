//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMMusicPostVideoDelegate-Protocol.h"
#import "MMMusicPostVideoVCDataSource-Protocol.h"

@class NSMutableArray, NSString;

@interface MMMusicPostAssetPickerHandler : NSObject <MMMusicPostVideoVCDataSource, MMMusicPostVideoDelegate>
{
    CDUnknownBlockType _onSelectedAssetChanged;
    NSMutableArray *_selectedModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedModels; // @synthesize selectedModels=_selectedModels;
@property(copy, nonatomic) CDUnknownBlockType onSelectedAssetChanged; // @synthesize onSelectedAssetChanged=_onSelectedAssetChanged;
- (void)postVideoViewController:(id)arg1 onFinderVideoSelectedBtnChecked:(id)arg2;
- (void)postVideoViewController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (_Bool)addOrRemoveSelectedModel:(id)arg1 addHandler:(CDUnknownBlockType)arg2 removeHandler:(CDUnknownBlockType)arg3;
- (_Bool)addOrRemoveSelectedModel:(id)arg1;
- (void)onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(struct CGRect)arg3;
- (void)onTabFinderSearch:(id)arg1;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(struct CGRect)arg3;
- (id)getSelectedArr;
- (id)getSelectedModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

