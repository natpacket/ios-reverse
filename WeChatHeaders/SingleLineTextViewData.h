//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RightTextViewData, RouteInfo, TextViewData;

@interface SingleLineTextViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *leftText; // @dynamic leftText;
@property(retain, nonatomic) RightTextViewData *rightText; // @dynamic rightText;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

