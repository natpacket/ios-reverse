//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenCategoryItem, NSMutableArray;

@interface MMListenCategoriesResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int categoryOffset; // @dynamic categoryOffset;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) MMListenCategoryItem *myAlbums; // @dynamic myAlbums;
@property(retain, nonatomic) MMListenCategoryItem *myLikeHistory; // @dynamic myLikeHistory;
@property(retain, nonatomic) MMListenCategoryItem *myListenHistory; // @dynamic myListenHistory;
@property(nonatomic) int wheelPointer; // @dynamic wheelPointer;

@end

