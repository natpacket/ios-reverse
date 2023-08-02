//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AssetExporterProtocol-Protocol.h"

@class AssetSetItemDataField, MMAsset, MessageAssetThreshold, NSString;
@protocol AssetExporterDelegate;

@interface ImageAssetExporter : NSObject <AssetExporterProtocol>
{
    id <AssetExporterDelegate> delegate;
    AssetSetItemDataField *dataField;
    NSString *exportID;
    MessageAssetThreshold *_assetThreshold;
    MMAsset *_asset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) MessageAssetThreshold *assetThreshold; // @synthesize assetThreshold=_assetThreshold;
@property(retain, nonatomic) NSString *exportID; // @synthesize exportID;
@property(retain, nonatomic) AssetSetItemDataField *dataField; // @synthesize dataField;
@property(nonatomic) __weak id <AssetExporterDelegate> delegate; // @synthesize delegate;
- (void)generateMiddleImageWithBigImage;
- (void)genMiddleImg:(id)arg1 originImgData:(id)arg2;
- (void)onGenerateMiddleImage:(id)arg1 imageData:(id)arg2;
- (void)onPreprocessedImageData:(id)arg1 imageData:(id)arg2;
- (void)onExportImage:(id)arg1 imageData:(id)arg2;
- (void)startExport;
- (id)initWithAssetDataField:(id)arg1 threshold:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

