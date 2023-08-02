//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OMJTemplateServiceProvider;

@interface OMJTemplateServiceParams : NSObject
{
    id <OMJTemplateServiceProvider> _instaMovieServiceProvider;
    id <OMJTemplateServiceProvider> _camFunServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <OMJTemplateServiceProvider> camFunServiceProvider; // @synthesize camFunServiceProvider=_camFunServiceProvider;
@property(readonly, nonatomic) id <OMJTemplateServiceProvider> instaMovieServiceProvider; // @synthesize instaMovieServiceProvider=_instaMovieServiceProvider;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2;
- (id)initWithCamFunTemplateServiceProvider:(id)arg1;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1;

@end
