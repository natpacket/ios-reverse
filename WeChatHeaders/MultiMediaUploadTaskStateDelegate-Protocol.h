//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, FavoritesItemDataField, MultiMediaUploadBaseState;

@protocol MultiMediaUploadTaskStateDelegate <NSObject>
- (void)changeToState:(MultiMediaUploadBaseState *)arg1;
- (void)onUploadTaskProcessFailType:(int)arg1;
- (void)onUploadTaskProcessSucc;
- (void)onUploadProgressChangeWithTotal:(unsigned long long)arg1 finished:(unsigned long long)arg2;
- (_Bool)isCanCheckHitUpload;
- (void)setHadUploadData;
- (_Bool)isHadUploadData;
- (FavoritesItemDataField *)getDataField;
- (CMessageWrap *)getMessageWrap;
@end
