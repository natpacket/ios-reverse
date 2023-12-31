//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SystemAuthConfig;

@interface SystemAuthConfigurator : NSObject
{
    SystemAuthConfig *_defaultConfig;
    SystemAuthConfig *_updatedConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SystemAuthConfig *updatedConfig; // @synthesize updatedConfig=_updatedConfig;
@property(retain, nonatomic) SystemAuthConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(readonly, nonatomic) NSDictionary *webSceneMap;
@property(readonly, nonatomic) SystemAuthConfig *curConfig;
- (id)appDefaultResoucePath;
- (id)tempResourceFilePath;
- (id)updatedResourceFilePath;
- (id)updatedResourcePath;
- (void)updateResource;
- (id)init;

@end

