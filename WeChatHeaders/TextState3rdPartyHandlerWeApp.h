//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextState3rdPartyBaseHandler.h"

@class TextStateWeAppBuffer;

@interface TextState3rdPartyHandlerWeApp : TextState3rdPartyBaseHandler
{
    TextStateWeAppBuffer *_buffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateWeAppBuffer *buffer; // @synthesize buffer=_buffer;
- (id)path;
- (id)username;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)customView;
- (_Bool)preferCustomView;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomMedia;
- (unsigned int)type;

@end
