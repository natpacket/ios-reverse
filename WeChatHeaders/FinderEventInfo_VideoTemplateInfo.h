//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventInfo_TemplateVersionInfo, NSString;

@interface FinderEventInfo_VideoTemplateInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cameraTmplId; // @dynamic cameraTmplId;
@property(nonatomic) unsigned int permittedPublishMethodFlag; // @dynamic permittedPublishMethodFlag;
@property(nonatomic) unsigned int tmplType; // @dynamic tmplType;
@property(retain, nonatomic) FinderEventInfo_TemplateVersionInfo *tmplVersionInfo; // @dynamic tmplVersionInfo;

@end
