//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDynamicLayoutProvider.h"

@class GCLabelDynamicLayout;

@interface GCChatRoomVcLayout : GCDynamicLayoutProvider
{
    GCLabelDynamicLayout *_channelTitleLabelLayout;
    GCLabelDynamicLayout *_channelTitleNumberLayout;
    double _spaceBelowChannelTitle;
    double _spaceUpChatBtn;
    GCLabelDynamicLayout *_inputChannelTitleLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLabelDynamicLayout *inputChannelTitleLayout; // @synthesize inputChannelTitleLayout=_inputChannelTitleLayout;
@property(nonatomic) double spaceUpChatBtn; // @synthesize spaceUpChatBtn=_spaceUpChatBtn;
@property(nonatomic) double spaceBelowChannelTitle; // @synthesize spaceBelowChannelTitle=_spaceBelowChannelTitle;
@property(retain, nonatomic) GCLabelDynamicLayout *channelTitleNumberLayout; // @synthesize channelTitleNumberLayout=_channelTitleNumberLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *channelTitleLabelLayout; // @synthesize channelTitleLabelLayout=_channelTitleLabelLayout;
- (id)init;

@end

