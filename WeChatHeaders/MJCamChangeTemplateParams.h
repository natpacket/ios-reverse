//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OMJCamTemplateInfo, OMJCaptureOptions;

@interface MJCamChangeTemplateParams : NSObject
{
    OMJCaptureOptions *_templateOptions;
    OMJCamTemplateInfo *_templateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJCamTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) OMJCaptureOptions *templateOptions; // @synthesize templateOptions=_templateOptions;

@end
