//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdPickerDataInfo : NSObject
{
    unsigned int _deep;
    NSString *_title;
    NSArray *_defaultData;
    NSArray *_transferTable;
    NSArray *_dataList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSArray *transferTable; // @synthesize transferTable=_transferTable;
@property(retain, nonatomic) NSArray *defaultData; // @synthesize defaultData=_defaultData;
@property(nonatomic) unsigned int deep; // @synthesize deep=_deep;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

