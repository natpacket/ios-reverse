//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatusLikeDataItem : NSObject
{
    _Bool _notifyFlag;
    _Bool _deleteFlag;
    unsigned int _type;
    unsigned int _likeCount;
    unsigned int _createTime;
    unsigned int _source;
    unsigned long long _likeId;
    NSString *_textStateId;
    NSString *_hashname;
    NSString *_encodeUsername;
    NSString *_nickname;
    NSString *_headImageURL;
    unsigned long long _version;
    unsigned long long _likeCountVersion;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned long long likeCountVersion; // @synthesize likeCountVersion=_likeCountVersion;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *encodeUsername; // @synthesize encodeUsername=_encodeUsername;
@property(retain, nonatomic) NSString *hashname; // @synthesize hashname=_hashname;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(nonatomic) _Bool deleteFlag; // @synthesize deleteFlag=_deleteFlag;
@property(nonatomic) _Bool notifyFlag; // @synthesize notifyFlag=_notifyFlag;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long likeId; // @synthesize likeId=_likeId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isValid;
- (id)description;

@end

