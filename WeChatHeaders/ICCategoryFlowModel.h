//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICFlowModel.h"

@class MMListenCategoryItem, NSString;
@protocol ICCategoryFlowModelDelegate;

@interface ICCategoryFlowModel : ICFlowModel
{
    id <ICCategoryFlowModelDelegate> _delegate;
    NSString *_categoryId;
    MMListenCategoryItem *_categoryItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) __weak id <ICCategoryFlowModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)manuallyInvokeLoadMethod;
- (id)executeLoadNew;
- (id)executeLoadMore;
- (id)loadMore:(CDUnknownBlockType)arg1;
- (id)loadNew:(CDUnknownBlockType)arg1;
- (id)initWithCategory:(id)arg1;

@end
