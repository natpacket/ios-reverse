//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveLotteryMethodItem, NSString;

@interface MMFinderLiveCreateLotteryDataItem : NSObject
{
    _Bool _isSelect;
    _Bool _isFromStaterVC;
    NSString *_title;
    NSString *_stateTitle;
    FinderLiveLotteryMethodItem *_lotteryMethodItem;
}

+ (id)initLotteryMethodDataItemWithTitle:(id)arg1 stateTitle:(id)arg2 isSelect:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveLotteryMethodItem *lotteryMethodItem; // @synthesize lotteryMethodItem=_lotteryMethodItem;
@property(nonatomic) _Bool isFromStaterVC; // @synthesize isFromStaterVC=_isFromStaterVC;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) NSString *stateTitle; // @synthesize stateTitle=_stateTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (double)getLotteryTableCellHeight;

@end
