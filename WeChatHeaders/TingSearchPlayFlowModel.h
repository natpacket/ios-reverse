//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingFlowModel.h"

@class NSString;

@interface TingSearchPlayFlowModel : TingFlowModel
{
    NSString *_text;
}

+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)buildFeedRequestWithRequest:(id)arg1 isFromLoadMore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithText:(id)arg1;

@end

