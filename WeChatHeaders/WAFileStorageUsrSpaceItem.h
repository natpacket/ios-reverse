//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAFileStorageUsrSpaceItem : NSObject
{
    unsigned int _lastOpenTime;
    NSString *_appId;
    NSString *_usrDir;
    double _sizeInBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastOpenTime; // @synthesize lastOpenTime=_lastOpenTime;
@property(nonatomic) double sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(copy, nonatomic) NSString *usrDir; // @synthesize usrDir=_usrDir;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

