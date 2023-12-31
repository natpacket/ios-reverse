//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OMJTemplateServiceProvider-Protocol.h"

@class MMContext, NSString;

@interface MJTemplateServiceProvider : NSObject <OMJTemplateServiceProvider>
{
    MMContext *_mmContext;
    unsigned long long _scene;
    unsigned long long _templateType;
}

+ (id)hardcodeMetaDataWithTemplateId:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)requestTemplateMetadataWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

