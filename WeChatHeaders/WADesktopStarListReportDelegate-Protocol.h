//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAAppItemData;

@protocol WADesktopStarListReportDelegate <NSObject>
- (void)reportItemMove:(WAAppItemData *)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
- (void)reportItemStared:(WAAppItemData *)arg1 index:(long long)arg2 isMy:(long long)arg3;
- (void)reportItemDeleted:(WAAppItemData *)arg1 index:(long long)arg2 isMy:(long long)arg3;
@end

