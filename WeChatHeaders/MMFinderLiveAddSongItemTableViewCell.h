//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveDeletableInputTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class MMFinderLiveSongItem, NSString;

@interface MMFinderLiveAddSongItemTableViewCell : MMFinderLiveDeletableInputTableViewCell <UITextFieldDelegate>
{
    MMFinderLiveSongItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSongItem *item; // @synthesize item=_item;
- (void)textFieldDidChangeContent:(id)arg1;
- (id)getCurrentSongName;
- (void)customizeTextField:(id)arg1;
- (long long)textFieldWordLimit;
- (void)configWithSongItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

