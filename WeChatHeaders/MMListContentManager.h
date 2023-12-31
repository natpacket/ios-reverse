//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMListContentDataSource-Protocol.h"
#import "MMListContentUIDelegate-Protocol.h"

@class MMListContentView, NSMutableArray, NSString, UIColor;

@interface MMListContentManager : NSObject <MMListContentDataSource, MMListContentUIDelegate>
{
    _Bool _shouldDivide;
    UIColor *_backgroundColor;
    double _cornerRadius;
    NSMutableArray *_cellArray;
    MMListContentView *_listContentView;
}

+ (id)commonManager;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListContentView *listContentView; // @synthesize listContentView=_listContentView;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool shouldDivide; // @synthesize shouldDivide=_shouldDivide;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)accessoryControlWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 isModeOn:(_Bool)arg4;
- (id)descriptionLabelWithText:(id)arg1;
- (id)subtitleLabelWithText:(id)arg1;
- (id)labelWithText:(id)arg1;
- (void)removeCell:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)insertCell:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)addCells:(id)arg1;
- (void)addCell:(id)arg1;
- (void)initCellArrayIfNeeded;
- (id)singleCellViewWithConfig:(id)arg1;
- (id)listContentViewForCells:(id)arg1;
- (id)assembleListViewAndClear;
- (id)assembleListView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

