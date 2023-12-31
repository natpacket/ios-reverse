//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface VoiceAppMsgItem : MMObject <NSCopying>
{
    NSString *_voiceurl;
    NSString *_aeskey;
    NSString *_voicemd5;
    long long _length;
    long long _playtime;
    long long _format;
}

- (void).cxx_destruct;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long playtime; // @synthesize playtime=_playtime;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *voicemd5; // @synthesize voicemd5=_voicemd5;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *voiceurl; // @synthesize voiceurl=_voiceurl;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

