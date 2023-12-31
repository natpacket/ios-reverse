//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMListenCommentInfo, NSString, TingAddFootprintController;

@interface TingFootprintHandler : MMObject
{
    TingAddFootprintController *_controller;
    MMListenCommentInfo *_commentInfo;
    NSString *_listenId;
    NSString *_categoryId;
    CDUnknownBlockType _addFootprintCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType addFootprintCompletionBlock; // @synthesize addFootprintCompletionBlock=_addFootprintCompletionBlock;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *listenId; // @synthesize listenId=_listenId;
@property(retain, nonatomic) MMListenCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) TingAddFootprintController *controller; // @synthesize controller=_controller;
- (void)internalDeleteFootprint:(id)arg1 categoryId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)internalAddFootprint:(struct CGRect)arg1 commentInfo:(id)arg2 categoryId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateFootprintAndDeleteSelfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateFootprintAndInsertFakeWithType:(int)arg1;
- (void)_addFootprintWithType:(int)arg1;
- (void)onRecommendClicked;
- (void)onListenedClicked;
- (void)showDeleteFootprintActionSheet:(CDUnknownBlockType)arg1;
- (void)_addFootprintController:(struct CGRect)arg1;
- (void)internalDeleteFootprint:(id)arg1 listenId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)internalAddFootprint:(struct CGRect)arg1 commentInfo:(id)arg2 listenId:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

