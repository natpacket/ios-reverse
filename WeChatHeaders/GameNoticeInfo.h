//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameNoticeAdditionalInfo, NSString;

@interface GameNoticeInfo : NSObject
{
    _Bool _hasAdditionalInfo;
    _Bool _hasCheckBtn;
    _Bool _checkState;
    NSString *_noticeIconUrl;
    NSString *_noticeTitle;
    GameNoticeAdditionalInfo *_additionalInfo;
    NSString *_buttonTitle;
    NSString *_checkTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checkState; // @synthesize checkState=_checkState;
@property(copy, nonatomic) NSString *checkTitle; // @synthesize checkTitle=_checkTitle;
@property(nonatomic) _Bool hasCheckBtn; // @synthesize hasCheckBtn=_hasCheckBtn;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) GameNoticeAdditionalInfo *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(nonatomic) _Bool hasAdditionalInfo; // @synthesize hasAdditionalInfo=_hasAdditionalInfo;
@property(copy, nonatomic) NSString *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(copy, nonatomic) NSString *noticeIconUrl; // @synthesize noticeIconUrl=_noticeIconUrl;

@end

