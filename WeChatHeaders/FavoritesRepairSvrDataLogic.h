//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesItemDB, NSMutableArray;

@interface FavoritesRepairSvrDataLogic : MMObject <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_resendFavItems;
    _Bool _isCurrentUploading;
    NSMutableArray *_resendingFavItems;
}

- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)handleModFavItem:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCheckFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)updateItemXml:(id)arg1 withResendItem:(id)arg2;
- (void)startCheckResendFavItem:(unsigned int)arg1 resendFavItem:(id)arg2;
- (_Bool)checkAllowUpdateItem:(unsigned int)arg1;
- (void)tryUploadAndSendFavItem;
- (void)checkResendFavItem:(id)arg1;
- (void)processResendFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processUploadFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)doCheckFavItem:(id)arg1;
- (void)saveResendFavItem;
- (void)loadResendFavItem;
- (id)resendFavItemSaveFilePath;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

