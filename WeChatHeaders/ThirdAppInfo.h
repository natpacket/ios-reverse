//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface ThirdAppInfo : NSObject
{
    NSString *_appId;
    NSString *_name;
    FlutterStandardTypedData *_iconData;
    FlutterStandardTypedData *_grayIconData;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithAppId:(id)arg1 name:(id)arg2 iconData:(id)arg3 grayIconData:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *grayIconData; // @synthesize grayIconData=_grayIconData;
@property(retain, nonatomic) FlutterStandardTypedData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toMap;

@end

