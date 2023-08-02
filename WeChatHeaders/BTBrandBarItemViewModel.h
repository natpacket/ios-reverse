//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTBarItemViewModelProtocol-Protocol.h"
#import "BrandTimelineMsgMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"

@class BTBaseBarItemView, CContact, NSString;

@interface BTBrandBarItemViewModel : NSObject <IContactMgrExt, BrandTimelineMsgMgrExt, BTBarItemViewModelProtocol>
{
    _Bool _hasLine;
    _Bool _isLiveForcePreposed;
    NSString *_username;
    NSString *_nickName;
    BTBaseBarItemView *_barItemView;
    CContact *_contact;
}

+ (id)itemViewClassName;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLiveForcePreposed; // @synthesize isLiveForcePreposed=_isLiveForcePreposed;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak BTBaseBarItemView *barItemView; // @synthesize barItemView=_barItemView;
@property(nonatomic) _Bool hasLine; // @synthesize hasLine=_hasLine;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void)onUpdateOftenReadContactByOpenLive:(id)arg1;
- (void)onUpdateOftenReadContactByEnterProfile:(id)arg1;
- (void)onUpdateOftenReadContactByEnterSession:(id)arg1;
- (void)onModifyContact:(id)arg1;
@property(readonly, nonatomic) _Bool hasArrow;
@property(readonly, nonatomic) unsigned long long greenDotType;
@property(readonly, nonatomic) _Bool isBrandLiving;
@property(readonly, nonatomic) _Bool hasNewFinderLiving;
@property(readonly, nonatomic) _Bool hasGreenDot;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headImgUrl;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

