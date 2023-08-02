//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface OMJTemplateCategory : NSObject
{
    NSString *_categoryID;
    NSString *_categoryName;
    NSURL *_thumbnailURL;
    NSArray *_templateInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(readonly, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBackingCategory:(const void *)arg1;

@end

