//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTogetherMoreViewItem : NSObject
{
    _Bool _isLoading;
    _Bool _hasMoreData;
    NSString *_tipsText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) Class cellClass;

@end

