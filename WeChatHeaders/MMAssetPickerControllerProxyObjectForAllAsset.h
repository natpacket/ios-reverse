//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImagePreviewBrowserControllerDataSource-Protocol.h"

@class MMAlbum, NSMutableArray, NSString;
@protocol MMImagePickerControlCenter;

@interface MMAssetPickerControllerProxyObjectForAllAsset : NSObject <MMImagePreviewBrowserControllerDataSource>
{
    _Bool _bPickerStyleForFile;
    MMAlbum *m_album;
    NSMutableArray *_selectedInfos;
    NSMutableArray *_m_assetArray;
    id <MMImagePickerControlCenter> _controlCenter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) NSMutableArray *m_assetArray; // @synthesize m_assetArray=_m_assetArray;
@property(nonatomic) _Bool bPickerStyleForFile; // @synthesize bPickerStyleForFile=_bPickerStyleForFile;
@property(retain, nonatomic) NSMutableArray *selectedInfos; // @synthesize selectedInfos=_selectedInfos;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album;
- (unsigned long long)getSelectedAssetTotalSize;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)selectedAssetInfosForPreview;
- (_Bool)isPreviewStyleForFile;
- (_Bool)isPreviewSelectedOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

