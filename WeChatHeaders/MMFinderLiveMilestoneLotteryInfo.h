//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveMilestoneLotteryInfo : NSObject
{
    unsigned int _beginTime;
    NSString *_prizeWording;
    NSString *_attendWording;
    NSString *_lotteryId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *attendWording; // @synthesize attendWording=_attendWording;
@property(retain, nonatomic) NSString *prizeWording; // @synthesize prizeWording=_prizeWording;
- (id)description;
- (id)initWithLotteryInfo:(id)arg1;

@end

