//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SimpleImgInfo.h"

@class CMessageWrap, FavoritesItemDataField;

@interface SimpleRecordImgInfo : SimpleImgInfo
{
    FavoritesItemDataField *_m_recordData;
    CMessageWrap *_m_msgWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap=_m_msgWrap;
@property(retain, nonatomic) FavoritesItemDataField *m_recordData; // @synthesize m_recordData=_m_recordData;
- (id)getImgUUID;
- (_Bool)isFromC2C;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (id)getDefaultImg;
- (unsigned int)getVideoTime;
- (id)getSightPath;
- (id)getImgPath;
- (id)getSquareImgDir;

@end

