//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayGPSolitaireItem : NSObject
{
    _Bool _bIsContentCut;
    unsigned int _contentCreateTime;
    NSString *_username;
    NSString *_content;
    long long _newLineCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long newLineCount; // @synthesize newLineCount=_newLineCount;
@property(nonatomic) _Bool bIsContentCut; // @synthesize bIsContentCut=_bIsContentCut;
@property(nonatomic) unsigned int contentCreateTime; // @synthesize contentCreateTime=_contentCreateTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end
