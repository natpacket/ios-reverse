//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DataReportRelatedData : NSObject
{
    NSString *m_targetId;
    NSMutableDictionary *m_params;
}

- (void).cxx_destruct;
- (void)reset;
- (void)putParams:(id)arg1;
- (void)putParam:(id)arg1 withValue:(id)arg2;
- (void)setParams:(id)arg1;
- (id)getParams;
- (void)setTargetId:(id)arg1;
- (id)getTargetId;
- (id)init;

@end

