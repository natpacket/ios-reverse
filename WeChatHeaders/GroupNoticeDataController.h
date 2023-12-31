//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeNoteDataController.h"

@class NSMutableArray;

@interface GroupNoticeDataController : WeNoteDataController
{
    _Bool _needReloadForEditMode;
    NSMutableArray *_lastDataList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lastDataList; // @synthesize lastDataList=_lastDataList;
@property(nonatomic) _Bool needReloadForEditMode; // @synthesize needReloadForEditMode=_needReloadForEditMode;
- (void)notifyContentChange;
- (void)onReplaceTextInRange:(struct _NSRange)arg1 withText:(id)arg2 inTextView:(id)arg3;
- (void)pasteSelectedContent;
- (void)insertAttributes:(id)arg1;
- (long long)getAttachmentSizeWithContentStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)addSizeWithNode:(id)arg1 size:(long long *)arg2;
- (void)saveWithHandler:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

@end

