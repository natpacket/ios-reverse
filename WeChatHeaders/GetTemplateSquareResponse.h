//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface GetTemplateSquareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *categoryList; // @dynamic categoryList;
@property(nonatomic) unsigned int maxAge; // @dynamic maxAge;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(retain, nonatomic) NSMutableArray *tpls; // @dynamic tpls;

@end

