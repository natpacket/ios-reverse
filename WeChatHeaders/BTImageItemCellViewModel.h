//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellViewModel.h"

@class NSArray, NSString;

@interface BTImageItemCellViewModel : BTReaderItemCellViewModel
{
    NSArray *_picUrls;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *picUrls; // @synthesize picUrls=_picUrls;
- (unsigned long long)picNum;
@property(readonly, nonatomic) NSString *digestStr;
- (id)friendsReadStr;
- (unsigned long long)digestLineNumber;
- (double)titleMaxWidth;
- (double)viewHeight;
- (id)itemViewClassName;

@end

