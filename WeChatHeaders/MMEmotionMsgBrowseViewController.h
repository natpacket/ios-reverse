//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEmotionMsgBaseBrowseViewController.h"

#import "IEmoticonDownloadExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"

@class CMessageWrap;

@interface MMEmotionMsgBrowseViewController : MMEmotionMsgBaseBrowseViewController <IEmoticonDownloadExt, IMsgRevokeExt>
{
    CMessageWrap *_wrapMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (_Bool)isInChatroom;
- (id)msgWrapForOperation;
- (id)emoticonWrapForAdd;
- (id)getChatName;
- (id)getReportFromUsr;
- (id)getDesc;
- (void)removeSmallLoadingView;
- (void)addSmallLoadingView;
- (void)initImageViewWithFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)setMsgWrap:(id)arg1;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1;

@end

