//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EmoticonStoreItem;

@protocol IEmoticonPackageStateMgrExt
- (void)OnUpdateEmoticonPackageState:(EmoticonStoreItem *)arg1 toState:(long long)arg2;

@optional
- (void)OnBuyItemCancel:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemFailed:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemSuccess:(EmoticonStoreItem *)arg1 paidBefore:(_Bool)arg2;
- (void)OnBuyItemStarted:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemPrepareFinished:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemPrepareStarted:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemFirstBuyTipShow:(EmoticonStoreItem *)arg1;
- (void)OnDownloadProgressChanged:(EmoticonStoreItem *)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
@end
