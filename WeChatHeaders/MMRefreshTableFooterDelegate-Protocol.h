//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMRefreshTableFooterView;

@protocol MMRefreshTableFooterDelegate <NSObject>
- (void)MMRefreshTableFooterDidTriggerRefresh:(MMRefreshTableFooterView *)arg1;

@optional
- (_Bool)onRefreshFooterView:(MMRefreshTableFooterView *)arg1 clickedAtState:(unsigned long long)arg2;
@end
