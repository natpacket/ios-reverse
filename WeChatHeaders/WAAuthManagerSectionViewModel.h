//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WxaUseUserInfoItem;

@interface WAAuthManagerSectionViewModel : NSObject
{
    _Bool _isPlugin;
    _Bool _isEdit;
    NSString *_appId;
    WxaUseUserInfoItem *_userInfoItem;
    CDUnknownBlockType _deleteAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) _Bool isPlugin; // @synthesize isPlugin=_isPlugin;
@property(retain, nonatomic) WxaUseUserInfoItem *userInfoItem; // @synthesize userInfoItem=_userInfoItem;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithAppId:(id)arg1 isPlugin:(_Bool)arg2 userInfoItem:(id)arg3 isEdit:(_Bool)arg4;

@end

