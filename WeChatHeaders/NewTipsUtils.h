//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NewTipsConfigCenter;

@interface NewTipsUtils : NSObject
{
    NewTipsConfigCenter *_configsCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewTipsConfigCenter *configsCenter; // @synthesize configsCenter=_configsCenter;
- (_Bool)canReceiveXmlWithTipsInfo:(id)arg1;
- (id)generateTipsInfoWithXml:(id)arg1;
- (id)LoadNewTipsBusinessInfos;
- (id)getAllConfigs;
- (id)getTipsConfigWithTipsId:(unsigned int)arg1;
- (void)SaveNewTipsBusinessInfos:(id)arg1;
- (id)getXLabNewTipsConfig;
- (id)GetPathOfNewTipsBusinessInfos;
- (_Bool)isLanguageValidate:(id)arg1;
- (_Bool)isRegionValidate:(id)arg1;
- (_Bool)isTipsInfoValidate:(id)arg1;
- (_Bool)isTimeValidate:(id)arg1;
- (_Bool)shouldShowTipsInfo:(id)arg1;
- (_Bool)isBlank:(id)arg1;
- (id)GetRootPathOfNewTips;
- (id)init;

@end

