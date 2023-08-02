//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfilePageModel.h"

#import "WCFinderStreamProfileMusicPlaylistPageDelegate-Protocol.h"

@class NSString, WCFinderStreamLoadingState, WCFinderStreamProfileMusicPlaylist;
@protocol WCFinderStreamAlbumTabPageModelDelegate;

@interface WCFinderStreamAlbumTabPageModel : WCFinderStreamProfilePageModel <WCFinderStreamProfileMusicPlaylistPageDelegate>
{
    id <WCFinderStreamAlbumTabPageModelDelegate> _delegate;
    WCFinderStreamLoadingState *_state;
    NSString *_username;
    WCFinderStreamProfileMusicPlaylist *_section;
}

+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamProfileMusicPlaylist *section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderStreamAlbumTabPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayList:(id)arg1 appendDataAtRange:(struct _NSRange)arg2;
- (void)requestNextPageData;
- (id)onMusicPageDataFilled:(id)arg1;
- (id)fillPageDataWithHeadData:(id)arg1;
- (id)viewPageClassName;
- (id)displayName;
- (id)categoryItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
