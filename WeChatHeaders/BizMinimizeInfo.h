//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface BizMinimizeInfo : NSObject
{
    NSNumber *_localId;
    NSNumber *_svrId;
    NSString *_url;
    NSString *_userName;
    NSString *_nickName;
    NSString *_title;
    NSString *_coverUrl;
    NSNumber *_itemShowType;
    FlutterStandardTypedData *_coverImage;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithLocalId:(id)arg1 svrId:(id)arg2 url:(id)arg3 userName:(id)arg4 nickName:(id)arg5 title:(id)arg6 coverUrl:(id)arg7 itemShowType:(id)arg8 coverImage:(id)arg9;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSNumber *itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *svrId; // @synthesize svrId=_svrId;
@property(retain, nonatomic) NSNumber *localId; // @synthesize localId=_localId;
- (id)toMap;

@end

