//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveSEIFreeMicUserInfo : NSObject
{
    unsigned int _us;
    NSString *_uId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int us; // @synthesize us=_us;
@property(retain, nonatomic) NSString *uId; // @synthesize uId=_uId;
- (_Bool)isTalking;
- (void)updateWithMicUserInfo:(id)arg1;

@end
