//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IHttpCacheExt-Protocol.h"

@class NSString;

@interface WAJSEventHandler_addImageToFavorites : WAJSEventHandler_BaseEvent <IHttpCacheExt>
{
    NSString *_cacheKey;
}

- (void).cxx_destruct;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (id)genKeyForUrl:(id)arg1;
- (id)getImageDataWithPackageRelativeURL:(id)arg1;
- (id)getImageDataWithLocalId:(id)arg1;
- (unsigned long long)getImageDataWithHttpUrl:(id)arg1 dataPtr:(id *)arg2;
- (void)addToFavoritesWithImageData:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

