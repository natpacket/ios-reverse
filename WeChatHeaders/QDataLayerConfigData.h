//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface QDataLayerConfigData : NSObject
{
    _Bool _enable;
    NSString *_url;
    NSDictionary *_layers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *layers; // @synthesize layers=_layers;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool enable; // @synthesize enable=_enable;
- (id)getConfigByID:(id)arg1;
- (id)getAllConfigNames;
- (id)initWithJSON:(id)arg1;

@end
