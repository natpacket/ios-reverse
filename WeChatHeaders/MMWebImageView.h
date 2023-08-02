//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "MMImageLoaderObserver-Protocol.h"

@class MMAnimatedImageDecoder, MMImageLoaderReqContext, MMWebImageViewChainModel, NSNumber, NSObject, NSString, NSURL, UIImage, UIView;
@protocol MMWebImageViewDelegate, OS_dispatch_queue;

@interface MMWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    UIImage *_defaultImage;
    NSURL *_url;
    NSURL *_darkModeUrl;
    NSURL *_requestUrl;
    NSURL *_darkRequestUrl;
    _Bool _loadCachedImageFileOnMainThread;
    MMAnimatedImageDecoder *m_animatedImageDecoder;
    UIView *m_view;
    UIImage *m_cacheImage;
    NSObject<OS_dispatch_queue> *m_scaleQueue;
    NSNumber *m_latestImageDataSize;
    NSURL *m_latestImageDataUrl;
    _Bool _asyncWaitSubThreadLoadDataIfNotInCacheYet;
    _Bool _isImageStatic;
    _Bool _autoScale;
    _Bool _alwaysTemplateRenderingMode;
    _Bool _ignoreEmptyDefaultImage;
    _Bool _useDissloveImageUpdate;
    _Bool _forceUpdate;
    id <MMWebImageViewDelegate> m_loadingDelegate;
    double _imageScale;
    MMImageLoaderReqContext *_reqContext;
    UIImage *_lastedImageSnapShot;
    long long _scene;
}

+ (id)getLoadedImageData:(id)arg1;
+ (_Bool)CanLoadImage:(id)arg1;
+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIImage *lastedImageSnapShot; // @synthesize lastedImageSnapShot=_lastedImageSnapShot;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain, nonatomic) MMImageLoaderReqContext *reqContext; // @synthesize reqContext=_reqContext;
@property(nonatomic) _Bool useDissloveImageUpdate; // @synthesize useDissloveImageUpdate=_useDissloveImageUpdate;
@property(nonatomic) _Bool ignoreEmptyDefaultImage; // @synthesize ignoreEmptyDefaultImage=_ignoreEmptyDefaultImage;
@property(nonatomic) _Bool alwaysTemplateRenderingMode; // @synthesize alwaysTemplateRenderingMode=_alwaysTemplateRenderingMode;
@property(nonatomic) _Bool autoScale; // @synthesize autoScale=_autoScale;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) _Bool isImageStatic; // @synthesize isImageStatic=_isImageStatic;
@property(nonatomic) _Bool asyncWaitSubThreadLoadDataIfNotInCacheYet; // @synthesize asyncWaitSubThreadLoadDataIfNotInCacheYet=_asyncWaitSubThreadLoadDataIfNotInCacheYet;
@property(nonatomic) _Bool loadCachedImageFileOnMainThread; // @synthesize loadCachedImageFileOnMainThread=_loadCachedImageFileOnMainThread;
@property(nonatomic) __weak id <MMWebImageViewDelegate> m_loadingDelegate; // @synthesize m_loadingDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)setImageFromCacheImage:(id)arg1 dataSize:(id)arg2 url:(id)arg3;
- (void)removeGifView;
- (id)getImageDataSizeFromLatestUrl:(id)arg1;
- (void)updateImageDataSize:(id)arg1 withUrl:(id)arg2;
- (_Bool)setImageFromImageLoaderForUrl:(id)arg1 orAsyncLoadIfNotInCacheYet:(_Bool *)arg2 reqContext:(id)arg3;
- (_Bool)setImageFromImageLoaderForUrl:(id)arg1;
- (_Bool)setImageFromData:(id)arg1 url:(id)arg2;
- (_Bool)setImageFromData:(id)arg1;
- (void)dealloc;
- (void)ImageDidAsyncLoadEndWithImage:(id)arg1 imageDataSize:(id)arg2 data:(id)arg3 Url:(id)arg4 userInfo:(id)arg5;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
- (void)setImageWithDefaultImage;
@property(readonly, nonatomic) _Bool isSingleFrame;
- (id)getCurrentRequestUrl;
- (id)getCurrentUrl;
- (id)getDarkModeUrl;
- (id)getUrl;
- (id)syncGetLatestImage;
- (id)getDefaultImage;
- (id)getImage;
- (void)setDefaultImage:(id)arg1;
- (void)callLoadingDelegateOnLoadImageFail;
- (void)callLoadingDelegateOnLoadImageOk:(id)arg1;
- (void)stopImageLoadingAndResetForCurrentUrl;
- (void)reloadImage;
- (void)setLightImageURL:(id)arg1 lightImgRequestURL:(id)arg2 darkImageURL:(id)arg3 darkImgRequestURL:(id)arg4 reqContext:(id)arg5 forceUpdate:(_Bool)arg6 scene:(long long)arg7;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 reqContext:(id)arg3 forceUpdate:(_Bool)arg4 scene:(long long)arg5;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 reqContext:(id)arg3;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2;
- (void)setImageWithUrlStr:(id)arg1;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1 scene:(long long)arg2;
- (void)setImageURL:(id)arg1 requestURL:(id)arg2;
- (void)setImageURL:(id)arg1;
- (void)setEmptyImageURL;
- (void)setFrame:(struct CGRect)arg1;
- (void)privateSetImage:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)configureWithUrlStr:(id)arg1;
- (void)configureWithShowIcon:(id)arg1;
- (void)leftAlignAspectFitImage;
- (void)setWXGWidgetlocalImage:(id)arg1;
- (void)setWXGWidgetsrc:(id)arg1;
@property(readonly, copy, nonatomic) MMWebImageViewChainModel *zz_setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

