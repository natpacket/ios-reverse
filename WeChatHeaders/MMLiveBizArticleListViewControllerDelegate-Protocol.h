//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BizAppMsgDetailInfo, MMLiveBizArticleListViewController, MMLiveBizArticleSearchViewController;

@protocol MMLiveBizArticleListViewControllerDelegate <NSObject>
- (void)brandArticleListViewController:(MMLiveBizArticleListViewController *)arg1 searchViewController:(MMLiveBizArticleSearchViewController *)arg2 didSelectWithArticle:(BizAppMsgDetailInfo *)arg3;
- (void)brandArticleListViewController:(MMLiveBizArticleListViewController *)arg1 didSelectWithArticle:(BizAppMsgDetailInfo *)arg2;
@end

