//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveDecorationDataItem : NSObject
{
    _Bool _isResourcePrepared;
    NSString *_decorID;
    NSString *_name;
    NSString *_thumbUrl;
    NSString *_thumbMd5;
    NSString *_resourceUrl;
    NSString *_resourceMd5;
}

+ (id)decorDataItemWithResource:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isResourcePrepared; // @synthesize isResourcePrepared=_isResourcePrepared;
@property(retain, nonatomic) NSString *resourceMd5; // @synthesize resourceMd5=_resourceMd5;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *decorID; // @synthesize decorID=_decorID;
- (_Bool)isDisableItem;
- (id)materialResourceUnzipTempFolderPath;
- (id)materialResourceFolderPath;
- (id)materialResourceBaseFolder;

@end
