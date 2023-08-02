//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicEditVideoCropView;

@protocol MMMusicEditVideoCropViewDelegate <NSObject>

@optional
- (void)musicEditVideoCropView:(MMMusicEditVideoCropView *)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)musicEditVideoCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)musicEditVideoCropView:(MMMusicEditVideoCropView *)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)musicEditVideoCropView:(MMMusicEditVideoCropView *)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
@end
