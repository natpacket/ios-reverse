//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWHostBaseView.h"

@class NSString;
@protocol GWHaowanAlbumBadNetViewDelegate;

@interface GWHaowanAlbumBadNetView : GWHostBaseView
{
    id <GWHaowanAlbumBadNetViewDelegate> _delegate;
    NSString *_badNetTip;
    NSString *_reloadDesc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reloadDesc; // @synthesize reloadDesc=_reloadDesc;
@property(copy, nonatomic) NSString *badNetTip; // @synthesize badNetTip=_badNetTip;
@property(nonatomic) __weak id <GWHaowanAlbumBadNetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tapReloadAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

