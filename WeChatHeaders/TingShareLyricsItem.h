//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MMListenItem, TingShareLyricsContext;

@interface TingShareLyricsItem : WXPBGeneratedMessage <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)itemFromXML:(struct XmlReaderNode_t *)arg1;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)arg1;
+ (id)xmlTagCustomFromXMLProcesslistForConfigTag:(id)arg1;
- (id)titleShowText;
- (id)toTingItem;
- (id)toXML:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) TingShareLyricsContext *lyricsContent; // @dynamic lyricsContent;

@end

