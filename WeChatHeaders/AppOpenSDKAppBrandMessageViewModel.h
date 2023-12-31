//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString, UIImage;

@interface AppOpenSDKAppBrandMessageViewModel : CommonMessageViewModel
{
    double _cacheTitleHeight;
    double _cacheDescHeight;
    double m_titleHeight;
    NSString *_sessionId;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)onReportClickWithUserInfo:(id)arg1;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (void)onMessageDownloadThumbImageOK;
- (id)additionalAccessibilityDescription;
- (double)imageViewHieghtScale;
- (_Bool)shouldShowFlagshipFlag;
- (_Bool)shouldShowEasyBuyFlag;
- (id)tagsArray;
- (id)getWAAppName;
@property(readonly, nonatomic) NSString *pagePath;
@property(readonly, nonatomic) NSString *appId;
@property(readonly, nonatomic) NSString *appIconUrl;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) double imageHeight;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

