//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, _TtC6WeChat17WCDBIntegerNumber, _TtC6WeChat34KaraProphetBehaviorExtractAnalysis, _TtC6WeChat34KaraProphetBehaviorPredictAnalysis;

@interface _TtC6WeChat19KaraProphetBehavior : NSObject
{
    // Error parsing type: , name: dateThatHappened
    // Error parsing type: , name: versionThatHappened
    // Error parsing type: , name: dateThatPredicted
    // Error parsing type: , name: dateThatPrepared
    // Error parsing type: , name: dateThatExtracted
    // Error parsing type: , name: dateThatRecalled
    // Error parsing type: , name: prediction
    // Error parsing type: , name: positive
    // Error parsing type: , name: features
    // Error parsing type: , name: predictAnalysis
    // Error parsing type: , name: extractAnalysis
    // Error parsing type: , name: report
    // Error parsing type: , name: userInfo
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSString *userInfo;
@property(nonatomic) _Bool report; // @synthesize report;
@property(nonatomic, retain) _TtC6WeChat34KaraProphetBehaviorExtractAnalysis *extractAnalysis; // @synthesize extractAnalysis;
@property(nonatomic, retain) _TtC6WeChat34KaraProphetBehaviorPredictAnalysis *predictAnalysis; // @synthesize predictAnalysis;
@property(nonatomic, copy) NSString *features;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *positive;
@property(nonatomic, retain) NSNumber *prediction;
@property(nonatomic, copy) NSDate *dateThatRecalled;
@property(nonatomic, copy) NSDate *dateThatExtracted;
@property(nonatomic, copy) NSDate *dateThatPrepared;
@property(nonatomic, copy) NSDate *dateThatPredicted;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *versionThatHappened;
@property(nonatomic, copy) NSDate *dateThatHappened;

@end

