//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseCellModel.h"

@class NSString;

@interface GCAtCellModel : GCBaseCellModel
{
    _Bool _selected;
    _Bool _showSeperatedLineInLeft;
    NSString *_headUrl;
    NSString *_nickName;
    NSString *_subTitle;
    NSString *_userId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSeperatedLineInLeft; // @synthesize showSeperatedLineInLeft=_showSeperatedLineInLeft;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
- (double)cellHeight;
- (Class)bindCellClass;

@end

