//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSTargetGenerator, NSMutableArray;

@interface LocalSearchClassConfig : NSObject
{
    Class _objClass;
    LSTargetGenerator *_nsKeyGenerator;
    NSMutableArray *_arrMatchConfig;
}

+ (id)makeDefaultConfigOfFTSFeatureItem;
+ (id)makeDefaultConfigOfMailContact;
+ (id)makeDefaultConfigOfAddressBookFriend;
+ (id)makeDefaultConfigOfContact;
+ (id)makeDefaultClassConfig:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrMatchConfig; // @synthesize arrMatchConfig=_arrMatchConfig;
@property(retain, nonatomic) LSTargetGenerator *nsKeyGenerator; // @synthesize nsKeyGenerator=_nsKeyGenerator;
@property(nonatomic) Class objClass; // @synthesize objClass=_objClass;

@end

