//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@protocol WCFinderPatCollectionReusableViewDelegate;

@interface WCFinderPatCollectionReusableView : UICollectionReusableView
{
    id <WCFinderPatCollectionReusableViewDelegate> _delegate;
}

+ (double)getPatMusicHeightWithBgmInfo:(id)arg1 titleWording:(id)arg2 screenWid:(double)arg3 enablePostFeed:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPatCollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)patPostButtonShow;
- (void)resumeMusicPlay;
- (void)stopMusicPlay;
- (void)playMusicWith:(id)arg1 isPlay:(_Bool)arg2;
- (void)playMusicWith:(id)arg1;
- (void)updatePatMusicWithBgmInfo:(id)arg1 patCount:(unsigned long long)arg2 readTotalCount:(unsigned long long)arg3 titleWording:(id)arg4 enablePostFeed:(_Bool)arg5;

@end

