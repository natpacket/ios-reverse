//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WCFinderJustWatchCollectionFeedItem;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderPushProfileParams : NSObject
{
    _Bool _showJustWatch;
    _Bool _showLongTab;
    _Bool _isNotRefFeedAuthor;
    _Bool _fromEventDescriptionContact;
    _Bool _fromOtherBusiness;
    _Bool _showsMoreNoticesAutomatically;
    _Bool _showHalfScreen;
    _Bool _isInsideFinderCallJsapi;
    _Bool _forbidenRecursiveSameContactJump;
    unsigned long long _reportScene;
    NSString *_feedID;
    NSString *_nonceID;
    unsigned long long _cardType;
    NSString *_adParamInfoStr;
    NSString *_commentAdInfo;
    unsigned long long _enterScene;
    NSString *_refPageType;
    unsigned long long _streamEntranceType;
    NSString *_otherBusinessExtraInfo;
    NSString *_enterSourceFeedID;
    long long _qrcodeScene;
    NSString *_liveNoticeEncryptedId;
    NSString *_promoterToken;
    double _timeoutIntervalForShowingMoreNoticesAutomatically;
    NSString *_redPacketLinkUrl;
    NSString *_redPacketCoverId;
    long long _redPacketJumpFrom;
    NSString *_selectedTab;
    NSString *_searchWord;
    NSString *_fromLiveId;
    NSString *_fromScene;
    UIViewController<WCFinderFeedBaseViewControllerProtocol> *_fromVC;
    NSString *_fromUsername;
    NSString *_talkerName;
    WCFinderJustWatchCollectionFeedItem *_justWatchCollectionFeedItem;
    NSString *_ecSource;
    NSString *_noticeJumperAdReportInfo;
    NSString *_livingJumperAdReportInfo;
    CDUnknownBlockType _profileCloseCallback;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType profileCloseCallback; // @synthesize profileCloseCallback=_profileCloseCallback;
@property(retain, nonatomic) NSString *livingJumperAdReportInfo; // @synthesize livingJumperAdReportInfo=_livingJumperAdReportInfo;
@property(retain, nonatomic) NSString *noticeJumperAdReportInfo; // @synthesize noticeJumperAdReportInfo=_noticeJumperAdReportInfo;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(nonatomic) _Bool forbidenRecursiveSameContactJump; // @synthesize forbidenRecursiveSameContactJump=_forbidenRecursiveSameContactJump;
@property(nonatomic) _Bool isInsideFinderCallJsapi; // @synthesize isInsideFinderCallJsapi=_isInsideFinderCallJsapi;
@property(retain, nonatomic) WCFinderJustWatchCollectionFeedItem *justWatchCollectionFeedItem; // @synthesize justWatchCollectionFeedItem=_justWatchCollectionFeedItem;
@property(copy, nonatomic) NSString *talkerName; // @synthesize talkerName=_talkerName;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(nonatomic) __weak UIViewController<WCFinderFeedBaseViewControllerProtocol> *fromVC; // @synthesize fromVC=_fromVC;
@property(copy, nonatomic) NSString *fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSString *fromLiveId; // @synthesize fromLiveId=_fromLiveId;
@property(retain, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(retain, nonatomic) NSString *selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) long long redPacketJumpFrom; // @synthesize redPacketJumpFrom=_redPacketJumpFrom;
@property(retain, nonatomic) NSString *redPacketCoverId; // @synthesize redPacketCoverId=_redPacketCoverId;
@property(retain, nonatomic) NSString *redPacketLinkUrl; // @synthesize redPacketLinkUrl=_redPacketLinkUrl;
@property(nonatomic) _Bool showHalfScreen; // @synthesize showHalfScreen=_showHalfScreen;
@property(nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically; // @synthesize timeoutIntervalForShowingMoreNoticesAutomatically=_timeoutIntervalForShowingMoreNoticesAutomatically;
@property(nonatomic) _Bool showsMoreNoticesAutomatically; // @synthesize showsMoreNoticesAutomatically=_showsMoreNoticesAutomatically;
@property(copy, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(copy, nonatomic) NSString *liveNoticeEncryptedId; // @synthesize liveNoticeEncryptedId=_liveNoticeEncryptedId;
@property(nonatomic) long long qrcodeScene; // @synthesize qrcodeScene=_qrcodeScene;
@property(copy, nonatomic) NSString *enterSourceFeedID; // @synthesize enterSourceFeedID=_enterSourceFeedID;
@property(copy, nonatomic) NSString *otherBusinessExtraInfo; // @synthesize otherBusinessExtraInfo=_otherBusinessExtraInfo;
@property(nonatomic, getter=isFromOtherBusiness) _Bool fromOtherBusiness; // @synthesize fromOtherBusiness=_fromOtherBusiness;
@property(nonatomic) _Bool fromEventDescriptionContact; // @synthesize fromEventDescriptionContact=_fromEventDescriptionContact;
@property(nonatomic) unsigned long long streamEntranceType; // @synthesize streamEntranceType=_streamEntranceType;
@property(retain, nonatomic) NSString *refPageType; // @synthesize refPageType=_refPageType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *commentAdInfo; // @synthesize commentAdInfo=_commentAdInfo;
@property(copy, nonatomic) NSString *adParamInfoStr; // @synthesize adParamInfoStr=_adParamInfoStr;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) _Bool isNotRefFeedAuthor; // @synthesize isNotRefFeedAuthor=_isNotRefFeedAuthor;
@property(nonatomic) _Bool showLongTab; // @synthesize showLongTab=_showLongTab;
@property(nonatomic) _Bool showJustWatch; // @synthesize showJustWatch=_showJustWatch;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
- (id)copy;
- (id)init;

@end

