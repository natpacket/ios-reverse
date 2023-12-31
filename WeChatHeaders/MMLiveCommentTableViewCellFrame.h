//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMLiveCommentTableViewCellFrameInitializeProtocol-Protocol.h"

@class MMLiveCommentDataItem, MMLiveTaskId, NSString;

@interface MMLiveCommentTableViewCellFrame : NSObject <MMLiveCommentTableViewCellFrameInitializeProtocol>
{
    _Bool _isLastLine;
    _Bool _isFirstLine;
    unsigned int _msgType;
    double _cellHeight;
    double _currCellHeight;
    MMLiveCommentDataItem *_comment;
    MMLiveTaskId *_taskId;
}

+ (double)standardLiveCommentCellHeight:(unsigned long long)arg1;
+ (double)liveCommentCellToCellMargin:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveCommentDataItem *comment; // @synthesize comment=_comment;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) _Bool isFirstLine; // @synthesize isFirstLine=_isFirstLine;
@property(nonatomic) _Bool isLastLine; // @synthesize isLastLine=_isLastLine;
@property(readonly, nonatomic) double currCellHeight; // @synthesize currCellHeight=_currCellHeight;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void)resetCellFrame;
- (void)calculateWithCommentInfo:(id)arg1 isFirstLine:(_Bool)arg2;
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(_Bool)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

