//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, TingFlowModel, TingFlowModelReloadContext;
@protocol TingFlowSessionProtocol;

@protocol TingFlowModelExtension <NSObject>

@optional
- (void)tingFlowModel:(TingFlowModel *)arg1 onRecommendSessionAvailableChagned:(id <TingFlowSessionProtocol>)arg2 available:(_Bool)arg3;
- (void)tingFlowModel:(TingFlowModel *)arg1 flowSession:(id <TingFlowSessionProtocol>)arg2 onInsertItemsOnTop:(NSArray *)arg3;
- (void)tingFlowModel:(TingFlowModel *)arg1 flowSession:(id <TingFlowSessionProtocol>)arg2 onAppendItems:(NSArray *)arg3;
- (void)tingFlowModel:(TingFlowModel *)arg1 flowSession:(id <TingFlowSessionProtocol>)arg2 onReloadItems:(NSArray *)arg3 context:(TingFlowModelReloadContext *)arg4;
- (void)tingFlowModel:(TingFlowModel *)arg1 onAppendList:(NSArray *)arg2 error:(NSError *)arg3;
- (void)tingFlowModel:(TingFlowModel *)arg1 shuffledChanged:(_Bool)arg2;
- (void)tingFlowModel:(TingFlowModel *)arg1 didChangedRecommendOn:(_Bool)arg2;
@end
