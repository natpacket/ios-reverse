//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderGeneralExtConfigModel;

@interface WCFinderGeneralJumpButton : NSObject
{
    int _jumpType;
    NSString *_content;
    unsigned long long _buttonStyle;
    WCFinderGeneralExtConfigModel *_extConfig;
    CDUnknownBlockType _jumpNextPostAction;
    CDUnknownBlockType _hookWebVCBlock;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hookWebVCBlock; // @synthesize hookWebVCBlock=_hookWebVCBlock;
@property(copy, nonatomic) CDUnknownBlockType jumpNextPostAction; // @synthesize jumpNextPostAction=_jumpNextPostAction;
@property(nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) WCFinderGeneralExtConfigModel *extConfig; // @synthesize extConfig=_extConfig;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void)jumpAction;

@end

