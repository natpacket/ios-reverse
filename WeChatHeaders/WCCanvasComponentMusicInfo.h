//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"
#import "WCAdParserProtocol-Protocol.h"

@class WCCanvasComponentMusicItem;

@interface WCCanvasComponentMusicInfo : MMObject <NSCoding, WCAdParserProtocol>
{
    int _displayType;
    WCCanvasComponentMusicItem *_musicItem;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentMusicItem *musicItem; // @synthesize musicItem=_musicItem;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

