//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizAiGoodsMarkInfo, NSMutableArray, NSString;

@interface BizAiGoodsMarkResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *categoryImageUrl; // @dynamic categoryImageUrl;
@property(retain, nonatomic) NSString *categoryTitle; // @dynamic categoryTitle;
@property(retain, nonatomic) BizAiGoodsMarkInfo *markInfo; // @dynamic markInfo;
@property(retain, nonatomic) NSMutableArray *markInfos; // @dynamic markInfos;

@end

