//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAAppBrandNotifyWidgetInfo : NSObject <PBCoding>
{
    unsigned int _WidgetPkgType;
    unsigned int _WidgePkgSize;
    NSString *_WidgetPkgMd5;
}

+ (void)initialize;
+ (void)PBArrayAdd_WidgePkgSize;
+ (void)PBArrayAdd_WidgetPkgMd5;
+ (void)PBArrayAdd_WidgetPkgType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int WidgePkgSize; // @synthesize WidgePkgSize=_WidgePkgSize;
@property(retain, nonatomic) NSString *WidgetPkgMd5; // @synthesize WidgetPkgMd5=_WidgetPkgMd5;
@property(nonatomic) unsigned int WidgetPkgType; // @synthesize WidgetPkgType=_WidgetPkgType;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

