//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSString, RoleIcon;

@interface UserRole : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) Color *bgColor; // @dynamic bgColor;
@property(retain, nonatomic) Color *color; // @dynamic color;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int role; // @dynamic role;
@property(retain, nonatomic) RoleIcon *roleIcon; // @dynamic roleIcon;
@property(retain, nonatomic) NSString *wordColor; // @dynamic wordColor;

@end

