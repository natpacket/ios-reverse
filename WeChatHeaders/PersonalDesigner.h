//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PersonalDesigner : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)getOldRedireUrlFromXMLStr:(id)arg1;
+ (id)genFromXMLStr:(id)arg1;
- (id)debugDescription;
- (_Bool)shouldUpdateWith:(id)arg1;
- (id)strDesignerUin;
- (_Bool)isValid;

// Remaining properties
@property(nonatomic) unsigned int designerUin; // @dynamic designerUin;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

