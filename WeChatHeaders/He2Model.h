//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HeMetadataModel, NSArray;

@interface He2Model : NSObject
{
    HeMetadataModel *_Metadata;
    NSArray *_PatternList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *PatternList; // @synthesize PatternList=_PatternList;
@property(retain, nonatomic) HeMetadataModel *Metadata; // @synthesize Metadata=_Metadata;

@end

