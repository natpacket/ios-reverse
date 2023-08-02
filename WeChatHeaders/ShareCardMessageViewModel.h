//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class BizNameCardProtectedInfo, CCardContact, NSString;

@interface ShareCardMessageViewModel : CommonMessageViewModel
{
    CCardContact *m_sharedContact;
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
    BizNameCardProtectedInfo *_protectedInfo;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BizNameCardProtectedInfo *protectedInfo; // @synthesize protectedInfo=_protectedInfo;
- (void)getReferImageAsync:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2;
- (_Bool)hasReferImage;
- (void)onMessageForceUpdateLayout;
- (id)personalVerifyIdentity;
- (id)certificationImage;
- (_Bool)shouldShowPersonalVerifyIdentity;
- (_Bool)shouldShowCertificationFlag;
@property(readonly, nonatomic) _Bool isShowUsername;
@property(readonly, nonatomic) NSString *sharedNickname;
@property(readonly, nonatomic) NSString *sharedUsername;
@property(readonly, nonatomic) CCardContact *sharedContact;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)reloadData;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

