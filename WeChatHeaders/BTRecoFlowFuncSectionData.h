//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTRecoFlowSectionData.h"

@class NSString;

@interface BTRecoFlowFuncSectionData : BTRecoFlowSectionData
{
    unsigned long long _funcType;
    NSString *_flowHeaderTitle;
    NSString *_hintTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hintTitle; // @synthesize hintTitle=_hintTitle;
@property(retain, nonatomic) NSString *flowHeaderTitle; // @synthesize flowHeaderTitle=_flowHeaderTitle;
@property(nonatomic) unsigned long long funcType; // @synthesize funcType=_funcType;
- (id)identifierWithRow:(unsigned long long)arg1;
- (double)heightForSectionFooter;
- (long long)numberOfRowsInSection;
- (id)initWithFuncSectionType:(unsigned long long)arg1;

@end
