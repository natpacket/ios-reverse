//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebImageView.h"

#import "ICdnComMgrExt-Protocol.h"

@class NSString;
@protocol WNImageViewDelegate;

@interface WNImageView : MMWebImageView <ICdnComMgrExt>
{
    NSString *localSrcPath;
    NSString *cdnUrl;
    unsigned long long dataSize;
    id <WNImageViewDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WNImageViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *localSrcPath; // @synthesize localSrcPath;
- (void)dealloc;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)stopLoadingImage;
- (void)loadingImageWithGCD;
- (void)forceLoadImage;
- (_Bool)startLoadingImage;
- (id)getCompressImageWithPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

