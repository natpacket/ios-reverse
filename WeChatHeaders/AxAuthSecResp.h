//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HostList, NSString, SKBuiltinBuffer_t;

@interface AxAuthSecResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int axAlgo; // @dynamic axAlgo;
@property(nonatomic) unsigned int axAuthCgiId; // @dynamic axAuthCgiId;
@property(retain, nonatomic) NSString *axAuthUri; // @dynamic axAuthUri;
@property(retain, nonatomic) HostList *axHostList; // @dynamic axHostList;
@property(retain, nonatomic) SKBuiltinBuffer_t *axTicket; // @dynamic axTicket;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomKey; // @dynamic randomKey;

@end

