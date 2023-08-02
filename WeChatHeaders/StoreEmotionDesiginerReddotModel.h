//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface StoreEmotionDesiginerReddotModel : MMObject <PBCoding>
{
    unsigned int _reddotTimeStamp;
    NSString *_designerUin;
    NSString *_name;
    NSString *_headUrl;
    NSMutableDictionary *_pidsWithReddotStatus;
}

+ (id)getSavePath:(id)arg1;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_pidsWithReddotStatus;
+ (void)PBArrayAdd_reddotTimeStamp;
+ (void)PBArrayAdd_headUrl;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_designerUin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pidsWithReddotStatus; // @synthesize pidsWithReddotStatus=_pidsWithReddotStatus;
@property(nonatomic) unsigned int reddotTimeStamp; // @synthesize reddotTimeStamp=_reddotTimeStamp;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *designerUin; // @synthesize designerUin=_designerUin;
- (_Bool)isDesignerInfoHasUpdate:(id)arg1;
- (_Bool)isDesignerInfoValid;
- (id)designer;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

