//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, NSData, NSString;

@interface FinderMusicBaikeSummary : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(retain, nonatomic) MMListenCategoryItem *listenCategoryItem;

// Remaining properties
@property(retain, nonatomic) NSString *baidkeIconUrl; // @dynamic baidkeIconUrl;
@property(retain, nonatomic) NSString *baikeCardTitle; // @dynamic baikeCardTitle;
@property(retain, nonatomic) NSData *categoryItem; // @dynamic categoryItem;
@property(nonatomic) unsigned int friendFavs; // @dynamic friendFavs;
@property(nonatomic) unsigned int songsCount; // @dynamic songsCount;

@end
