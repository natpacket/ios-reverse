//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCBGUserInfo : NSObject
{
    int _m_iWCFlag;
    unsigned int _bgImgSize;
    NSString *_username;
    NSString *_m_nsWCBGImgObjectID;
    NSString *_m_pcWCBGImgID;
    NSString *_bgImgAesKey;
    NSString *_bgImgAuthKey;
    NSString *_bgImgMd5;
    NSString *_signature;
    NSString *_bgFileId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bgFileId; // @synthesize bgFileId=_bgFileId;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *bgImgMd5; // @synthesize bgImgMd5=_bgImgMd5;
@property(nonatomic) unsigned int bgImgSize; // @synthesize bgImgSize=_bgImgSize;
@property(copy, nonatomic) NSString *bgImgAuthKey; // @synthesize bgImgAuthKey=_bgImgAuthKey;
@property(copy, nonatomic) NSString *bgImgAesKey; // @synthesize bgImgAesKey=_bgImgAesKey;
@property(copy, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID=_m_pcWCBGImgID;
@property(nonatomic) int m_iWCFlag; // @synthesize m_iWCFlag=_m_iWCFlag;
@property(copy, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID=_m_nsWCBGImgObjectID;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)init;

@end

