//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ApplyCellInfo, BaseResponse, MenuItem, NSData, NSMutableArray, NSString, QRActionInfo, ReceiveOptionInfo;

@interface CgiGetQrcodeUrlMchResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ApplyCellInfo *applyCell; // @dynamic applyCell;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MenuItem *bottomItem; // @dynamic bottomItem;
@property(retain, nonatomic) NSString *bottomLeftIconUrl; // @dynamic bottomLeftIconUrl;
@property(nonatomic) _Bool bottomRightArrowFlag; // @dynamic bottomRightArrowFlag;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) QRActionInfo *longPressAction; // @dynamic longPressAction;
@property(retain, nonatomic) NSString *mchHeadImgUrl; // @dynamic mchHeadImgUrl;
@property(retain, nonatomic) NSString *mchShopName; // @dynamic mchShopName;
@property(retain, nonatomic) NSMutableArray *moreSettingCell; // @dynamic moreSettingCell;
@property(nonatomic) unsigned int qrcodeLevel; // @dynamic qrcodeLevel;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) _Bool receiveOptionEntrance; // @dynamic receiveOptionEntrance;
@property(retain, nonatomic) ReceiveOptionInfo *receiveOptionInfo; // @dynamic receiveOptionInfo;
@property(nonatomic) unsigned int refreshUrlInterval; // @dynamic refreshUrlInterval;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @dynamic saveNotifyInfo;
@property(retain, nonatomic) QRActionInfo *screenShotAction; // @dynamic screenShotAction;

@end

